
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_3, unsigned long VAR_4,
       void *VAR_5)
{
 if (VAR_1 && VAR_2) {
  switch (VAR_4) {
  case 130:
   FUNC_0
       ("\x0cReloading\nSystem...\x1b[Lc\x1b[Lb\x1b[L+");
   break;
  case 129:
   FUNC_0
       ("\x0cSystem Halted.\x1b[Lc\x1b[Lb\x1b[L+");
   break;
  case 128:
   FUNC_0("\x0cPower off.\x1b[Lc\x1b[Lb\x1b[L+");
   break;
  default:
   break;
  }
 }
 return VAR_0;
}
