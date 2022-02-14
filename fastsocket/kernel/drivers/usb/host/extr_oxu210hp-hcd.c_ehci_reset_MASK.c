
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct oxu_hcd {TYPE_1__* regs; int next_statechange; } ;
struct TYPE_4__ {int state; } ;
struct TYPE_3__ {int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct oxu_hcd*,char*,int ) ;
 int FUNC_1 (struct oxu_hcd*,int *,int ,int ,int) ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (struct oxu_hcd*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct oxu_hcd*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct oxu_hcd *VAR_3)
{
 int VAR_4;
 u32 VAR_5 = FUNC_3(&VAR_3->regs->command);

 VAR_5 |= VAR_0;
 FUNC_0(VAR_3, "reset", VAR_5);
 FUNC_5(VAR_5, &VAR_3->regs->command);
 FUNC_2(VAR_3)->state = VAR_1;
 VAR_3->next_statechange = VAR_2;
 VAR_4 = FUNC_1(VAR_3, &VAR_3->regs->command,
       VAR_0, 0, 250 * 1000);

 if (VAR_4)
  return VAR_4;

 FUNC_4(VAR_3);

 return VAR_4;
}
