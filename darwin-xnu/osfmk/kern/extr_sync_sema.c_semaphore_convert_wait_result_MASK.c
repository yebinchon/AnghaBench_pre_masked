
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (char*) ;

kern_return_t
FUNC_1(int VAR_5)
{
 switch (VAR_5) {
 case 131:
  return VAR_3;

 case 128:
  return VAR_2;

 case 130:
  return VAR_0;

 case 129:
  return VAR_4;

 default:
  FUNC_0("semaphore_block\n");
  return VAR_1;
 }
}
