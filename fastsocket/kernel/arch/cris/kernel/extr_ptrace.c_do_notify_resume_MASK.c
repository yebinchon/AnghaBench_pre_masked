
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
typedef int __u32 ;
struct TYPE_2__ {scalar_t__ replacement_session_keyring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int,struct pt_regs*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct pt_regs*) ;

void FUNC_4(int VAR_4, struct pt_regs *VAR_5,
        __u32 VAR_6)
{

 if (VAR_6 & VAR_2)
  FUNC_1(VAR_4,VAR_5);

 if (VAR_6 & VAR_1) {
  FUNC_0(VAR_0);
  FUNC_3(VAR_5);
  if (VAR_3->replacement_session_keyring)
   FUNC_2();
 }
}
