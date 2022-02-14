
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int flags; int flags2; int thread_count; int active_thread_type; int thread_type; TYPE_1__* codec; } ;
struct TYPE_5__ {int capabilities; } ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*,int ,char*,int,int) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_10)
{
    int VAR_11 = (VAR_10->codec->capabilities & VAR_1)
                                && !(VAR_10->flags & VAR_5)
                                && !(VAR_10->flags & VAR_4)
                                && !(VAR_10->flags2 & VAR_3);
    if (VAR_10->thread_count == 1) {
        VAR_10->active_thread_type = 0;
    } else if (VAR_11 && (VAR_10->thread_type & VAR_7)) {
        VAR_10->active_thread_type = VAR_7;
    } else if (VAR_10->codec->capabilities & VAR_2 &&
               VAR_10->thread_type & VAR_8) {
        VAR_10->active_thread_type = VAR_8;
    } else if (!(VAR_10->codec->capabilities & VAR_0)) {
        VAR_10->thread_count = 1;
        VAR_10->active_thread_type = 0;
    }

    if (VAR_10->thread_count > VAR_9)
        FUNC_0(VAR_10, VAR_6,
               "Application has requested %d threads. Using a thread count greater than %d is not recommended.\n",
               VAR_10->thread_count, VAR_9);
}
