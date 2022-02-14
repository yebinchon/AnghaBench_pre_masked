
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_11__ {scalar_t__ s_mul; int * source; int * target; } ;
typedef TYPE_3__ ThreadData_blend_frame ;
struct TYPE_12__ {TYPE_1__** outputs; TYPE_2__* internal; } ;
struct TYPE_10__ {int (* execute ) (TYPE_4__*,int ,TYPE_3__*,int *,int ) ;} ;
struct TYPE_9__ {int h; } ;
typedef int AVFrame ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ,TYPE_3__*,int *,int ) ;

__attribute__((used)) static void FUNC_3(AVFilterContext *VAR_1, AVFrame *VAR_2, AVFrame *VAR_3, float VAR_4)
{
    ThreadData_blend_frame VAR_5;
    VAR_5.target = VAR_2;
    VAR_5.source = VAR_3;
    VAR_5.s_mul = (uint16_t)(VAR_4 * 0x100);
    VAR_1->internal->execute(VAR_1, VAR_0, &VAR_5, ((void*)0), FUNC_0(VAR_1->outputs[0]->h, FUNC_1(VAR_1)));
}
