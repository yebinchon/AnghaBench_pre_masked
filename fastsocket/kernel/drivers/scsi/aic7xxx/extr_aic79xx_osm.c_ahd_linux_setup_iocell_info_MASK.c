
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t u_long ;
typedef int int32_t ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int,size_t,int) ;

__attribute__((used)) static void
FUNC_2(u_long VAR_2, int VAR_3, int VAR_4, int32_t VAR_5)
{

 if ((VAR_3 >= 0)
  && (VAR_3 < FUNC_0(VAR_0))) {
  uint8_t *VAR_6;

  VAR_6 = (uint8_t*)&VAR_0[VAR_3];
  VAR_6[VAR_2] = VAR_5 & 0xFFFF;
  if (VAR_1)
   FUNC_1("iocell[%d:%ld] = %d\n", VAR_3, VAR_2, VAR_5);
 }
}
