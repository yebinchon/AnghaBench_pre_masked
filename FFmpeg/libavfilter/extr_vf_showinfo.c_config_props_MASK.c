
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int den; int num; } ;
struct TYPE_5__ {int den; int num; } ;
struct TYPE_7__ {TYPE_2__ frame_rate; TYPE_1__ time_base; } ;
typedef TYPE_3__ AVFilterLink ;
typedef int AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_1, AVFilterLink *VAR_2, int VAR_3)
{

    FUNC_0(VAR_1, VAR_0, "config %s time_base: %d/%d, frame_rate: %d/%d\n",
           VAR_3 ? "out" : "in",
           VAR_2->time_base.num, VAR_2->time_base.den,
           VAR_2->frame_rate.num, VAR_2->frame_rate.den);

    return 0;
}
