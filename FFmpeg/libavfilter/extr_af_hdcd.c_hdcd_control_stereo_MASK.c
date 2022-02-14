
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int hdcd_control_result ;
struct TYPE_4__ {int val_target_gain; int sample_count; int fctx; int * state; } ;
typedef TYPE_1__ HDCDContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,char*,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int *,int*,int*) ;

__attribute__((used)) static hdcd_control_result FUNC_3(HDCDContext *VAR_3, int *VAR_4, int *VAR_5)
{
    int VAR_6[2];
    FUNC_2(VAR_3, &VAR_3->state[0], VAR_4, &VAR_6[0]);
    FUNC_2(VAR_3, &VAR_3->state[1], VAR_5, &VAR_6[1]);
    if (VAR_6[0] == VAR_6[1])
        VAR_3->val_target_gain = VAR_6[0];
    else {
        FUNC_1(VAR_3->fctx, VAR_0,
           "hdcd error: Unmatched target_gain near %d: tg0: %0.1f, tg1: %0.1f, lvg: %0.1f\n",
           VAR_3->sample_count,
           FUNC_0(VAR_6[0] >>7),
           FUNC_0(VAR_6[1] >>7),
           FUNC_0(VAR_3->val_target_gain >>7) );
           return VAR_2;
    }
    return VAR_1;
}
