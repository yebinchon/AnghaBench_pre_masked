
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct resource {scalar_t__ start; scalar_t__ end; } ;
struct platform_device {int dummy; } ;
struct TYPE_3__ {struct TYPE_3__* extdata; scalar_t__ extlen; int vfebase; int vfeirq; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 struct resource* FUNC_4 (struct platform_device*,int ,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;

void FUNC_6(struct platform_device *VAR_2)
{
 struct resource *VAR_3;

 FUNC_0(VAR_1->vfeirq);
 FUNC_1(VAR_1->vfeirq, 0);

 FUNC_2(VAR_1->vfebase);
 VAR_3 = FUNC_4(VAR_2, VAR_0, 0);
 FUNC_5(VAR_3->start, (VAR_3->end - VAR_3->start) + 1);

 VAR_1->extlen = 0;

 FUNC_3(VAR_1->extdata);
 FUNC_3(VAR_1);
}
