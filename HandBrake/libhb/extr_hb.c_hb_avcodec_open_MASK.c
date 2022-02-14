
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; int capabilities; } ;
struct TYPE_7__ {int thread_count; int thread_type; int thread_safe_callbacks; int strict_std_compliance; } ;
typedef int AVDictionary ;
typedef TYPE_1__ AVCodecContext ;
typedef TYPE_2__ AVCodec ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*,int **) ;
 int FUNC_1 () ;

int FUNC_2(AVCodecContext *VAR_6, AVCodec *VAR_7,
                    AVDictionary **VAR_8, int VAR_9)
{
    int VAR_10;

    if ((VAR_9 == VAR_5 || VAR_9 > 0) &&
        (VAR_7->type == VAR_0))
    {
        VAR_6->thread_count = (VAR_9 == VAR_5) ?
                               FUNC_1() / 2 + 1 : VAR_9;
        VAR_6->thread_type = VAR_3|VAR_4;
        VAR_6->thread_safe_callbacks = 1;
    }
    else
    {
        VAR_6->thread_count = 1;
    }

    if (VAR_7->capabilities & VAR_1)
    {

        VAR_6->strict_std_compliance = VAR_2;
    }

    VAR_10 = FUNC_0(VAR_6, VAR_7, VAR_8);
    return VAR_10;
}
