
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sigh; int sigl; } ;
typedef TYPE_1__ FPU_REG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(FPU_REG *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3) & 0x7fff;
 if (VAR_4 == 0) {
  if (!(VAR_3->sigh | VAR_3->sigl)) {
   return VAR_2;
  }

  return VAR_0;
 }

 if (VAR_4 == 0x7fff) {

  return VAR_0;
 }

 if (!(VAR_3->sigh & 0x80000000)) {



  return VAR_0;
 }

 return VAR_1;
}
