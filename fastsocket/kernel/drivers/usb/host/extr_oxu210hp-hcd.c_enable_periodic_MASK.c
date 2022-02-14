
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct oxu_hcd {int next_uframe; int periodic_size; TYPE_1__* regs; } ;
struct TYPE_5__ {int state; } ;
struct TYPE_4__ {int frame_index; int command; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct oxu_hcd*,int *,int ,int ,int) ;
 TYPE_2__* FUNC_1 (struct oxu_hcd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static int FUNC_5(struct oxu_hcd *VAR_4)
{
 u32 VAR_5;
 int VAR_6;




 VAR_6 = FUNC_0(VAR_4, &VAR_4->regs->status, VAR_3, 0, 9 * 125);
 if (VAR_6 != 0) {
  FUNC_1(VAR_4)->state = VAR_1;
  FUNC_3(FUNC_1(VAR_4));
  return VAR_6;
 }

 VAR_5 = FUNC_2(&VAR_4->regs->command) | VAR_0;
 FUNC_4(VAR_5, &VAR_4->regs->command);

 FUNC_1(VAR_4)->state = VAR_2;


 VAR_4->next_uframe = FUNC_2(&VAR_4->regs->frame_index)
  % (VAR_4->periodic_size << 3);
 return 0;
}
