
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

void
FUNC_3(void)
{
 int VAR_3;

 if (VAR_2 & VAR_0) {

  for (VAR_3 = -32768; VAR_3 < 32768; VAR_3++) {
   VAR_1[VAR_3 & 0xffff] =
    FUNC_2(FUNC_1(VAR_3));
  }
 } else {

  for (VAR_3 = -32768; VAR_3 < 32768; VAR_3++) {
   VAR_1[VAR_3 & 0xffff] =
    FUNC_2(FUNC_0(VAR_3));
  }
 }
}
