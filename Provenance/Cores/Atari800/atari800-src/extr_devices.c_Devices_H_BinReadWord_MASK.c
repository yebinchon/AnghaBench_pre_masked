
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int * VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*,int,int,int *) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_4(void)
{
 UBYTE VAR_8[2];
 if (FUNC_3(VAR_8, 1, 2, VAR_6) != 2) {
  FUNC_2(VAR_6);
  VAR_6 = ((void*)0);
  if (VAR_0) {
   VAR_0 = VAR_5;
   FUNC_0("binload: not valid BIN file");
   VAR_4 = 180;
   VAR_2;
   return -1;
  }
  if (VAR_7)
   VAR_3 = FUNC_1(0x2e0);
  VAR_4 = 1;
  VAR_1;
  return -1;
 }
 return VAR_8[0] + (VAR_8[1] << 8);
}
