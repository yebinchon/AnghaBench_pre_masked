
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msr {int h; int l; } ;
struct msr_info {int msr_no; struct msr reg; scalar_t__ msrs; } ;


 struct msr* FUNC_0 (scalar_t__,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct msr_info *VAR_1 = VAR_0;
 struct msr *VAR_2;
 int VAR_3 = FUNC_1();

 if (VAR_1->msrs)
  VAR_2 = FUNC_0(VAR_1->msrs, VAR_3);
 else
  VAR_2 = &VAR_1->reg;

 FUNC_2(VAR_1->msr_no, VAR_2->l, VAR_2->h);
}
