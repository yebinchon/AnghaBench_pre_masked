
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sp; int pc; int erp; int spc; int exs; scalar_t__ eda; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_3 ;

void FUNC_1(int VAR_4)
{

 VAR_3.sp += 4;


 VAR_3.pc = VAR_3.erp;
 if (VAR_3.erp & 0x1) {

  if (VAR_3.spc) {

   VAR_3.pc = VAR_3.spc;
  } else {


   VAR_3.pc += FUNC_0(VAR_3.erp & ~1) - 1 ;
  }
 }

 if ((VAR_3.exs & 0x3) == 0x0) {



  VAR_3.eda = 0;
 }

 if (VAR_4 == VAR_1) {



  if (((VAR_3.exs & 0xff00) >> 8) == 0x18) {
   if (!VAR_2) {

    VAR_2 = 1;
   } else {


    if (!(VAR_3.erp & 0x1)) {
     VAR_3.erp -= 2;
     VAR_3.pc -= 2;
    }
   }

  } else if (((VAR_3.exs & 0xff00) >> 8) == 0x3) {



  } else if (((VAR_3.exs & 0xff00) >> 8) == 0xc) {





   VAR_3.spc = 0;


  }

 } else if (VAR_4 == VAR_0) {

 }
}
