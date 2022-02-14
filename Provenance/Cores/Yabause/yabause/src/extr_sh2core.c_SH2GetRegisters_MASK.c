
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sh2regs_struct ;
struct TYPE_2__ {int (* GetRegisters ) (int *,int *) ;} ;
typedef int SH2_struct ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int *) ;

void FUNC_1(SH2_struct *VAR_1, sh2regs_struct * VAR_2)
{
   if (VAR_2 != ((void*)0)) {
      VAR_0->GetRegisters(VAR_1, VAR_2);
   }
}
