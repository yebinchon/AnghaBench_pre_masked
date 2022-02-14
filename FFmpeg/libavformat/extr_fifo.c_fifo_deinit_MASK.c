
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int overflow_flag_lock; scalar_t__ overflow_flag_lock_initialized; int queue; int avf; int format_options; } ;
typedef TYPE_1__ FifoContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(AVFormatContext *VAR_0)
{
    FifoContext *VAR_1 = VAR_0->priv_data;

    FUNC_0(&VAR_1->format_options);
    FUNC_2(VAR_1->avf);
    FUNC_1(&VAR_1->queue);
    if (VAR_1->overflow_flag_lock_initialized)
        FUNC_3(&VAR_1->overflow_flag_lock);
}
