
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int msr; int link; int nip; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct pt_regs*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pt_regs*) ;

__attribute__((used)) static int FUNC_4(struct pt_regs *VAR_2)
{





 if (VAR_2->msr & VAR_1)
  VAR_2->nip = VAR_2->link;

 switch (VAR_2->msr & VAR_1) {
 case 128:
  FUNC_0(VAR_2);
  break;
 case 129:
  FUNC_3(VAR_2);
  break;
 default:

  return 0;
 }


 FUNC_2(FUNC_1());


 VAR_2->msr |= VAR_0;
 return 1;
}
