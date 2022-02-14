
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct oxu_hcd {int reclaim_ready; int lock; int async; int actions; TYPE_1__* regs; scalar_t__ reclaim; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct oxu_hcd*) ;
 int FUNC_1 (struct oxu_hcd*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct oxu_hcd*,int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int,int *) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_2)
{
 struct oxu_hcd *VAR_3 = (struct oxu_hcd *) VAR_2;
 unsigned long VAR_4;

 FUNC_3(&VAR_3->lock, VAR_4);


 if (VAR_3->reclaim) {
  u32 VAR_5 = FUNC_2(&VAR_3->regs->status);
  if (VAR_5 & VAR_0) {
   FUNC_1(VAR_3, "lost IAA\n");
   FUNC_7(VAR_0, &VAR_3->regs->status);
   VAR_3->reclaim_ready = 1;
  }
 }


 if (FUNC_6(VAR_1, &VAR_3->actions))
  FUNC_5(VAR_3, VAR_3->async);


 FUNC_0(VAR_3);

 FUNC_4(&VAR_3->lock, VAR_4);
}
