
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void* whole_len; void* whole_len_left; void* pad_len; void* pad_len_left; scalar_t__ whole_dur; scalar_t__ pad_dur; } ;
struct TYPE_6__ {TYPE_3__* priv; } ;
struct TYPE_5__ {int sample_rate; TYPE_2__* src; } ;
typedef TYPE_1__ AVFilterLink ;
typedef TYPE_2__ AVFilterContext ;
typedef TYPE_3__ APadContext ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_1)
{
    AVFilterContext *VAR_2 = VAR_1->src;
    APadContext *VAR_3 = VAR_2->priv;

    if (VAR_3->pad_dur)
        VAR_3->pad_len = FUNC_0(VAR_3->pad_dur, VAR_1->sample_rate, VAR_0);
    if (VAR_3->whole_dur)
        VAR_3->whole_len = FUNC_0(VAR_3->whole_dur, VAR_1->sample_rate, VAR_0);

    VAR_3->pad_len_left = VAR_3->pad_len;
    VAR_3->whole_len_left = VAR_3->whole_len;

    return 0;
}
