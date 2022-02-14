
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*,int,int,int *) ;

__attribute__((used)) static int FUNC_4(void)
{
 UBYTE VAR_4[2];
 if (FUNC_3(VAR_4, 1, 2, VAR_0) != 2) {
  FUNC_2(VAR_0);
  VAR_0 = ((void*)0);
  if (VAR_1) {
   VAR_1 = VAR_3;
   FUNC_0("binload: not valid BIN file");
   return -1;
  }
  VAR_2 = FUNC_1(0x2e0);
  return -1;
 }
 return VAR_4[0] + (VAR_4[1] << 8);
}
