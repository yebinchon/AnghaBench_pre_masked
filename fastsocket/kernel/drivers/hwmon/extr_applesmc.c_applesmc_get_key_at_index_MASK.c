
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 char FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(int VAR_3, char* VAR_4)
{
 int VAR_5;
 u8 VAR_6[4];
 VAR_6[0] = VAR_3 >> 24;
 VAR_6[1] = VAR_3 >> 16;
 VAR_6[2] = VAR_3 >> 8;
 VAR_6[3] = VAR_3;

 if (FUNC_3(VAR_1))
  return -VAR_2;

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  FUNC_2(VAR_6[VAR_5], VAR_0);
  if (FUNC_0(0x04))
   return -VAR_2;
 }

 FUNC_2(4, VAR_0);

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  if (FUNC_0(0x05))
   return -VAR_2;
  VAR_4[VAR_5] = FUNC_1(VAR_0);
 }
 VAR_4[4] = 0;

 return 0;
}
