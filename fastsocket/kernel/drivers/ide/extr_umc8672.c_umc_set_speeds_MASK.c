
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,size_t,size_t,size_t,size_t) ;
 int** VAR_0 ;

__attribute__((used)) static void FUNC_3(u8 VAR_1[])
{
 int VAR_2, VAR_3;

 FUNC_1(0x5A, 0x108);

 FUNC_0(0xd7, (VAR_0[0][VAR_1[2]] | (VAR_0[0][VAR_1[3]]<<4)));
 FUNC_0(0xd6, (VAR_0[0][VAR_1[0]] | (VAR_0[0][VAR_1[1]]<<4)));
 VAR_3 = 0;
 for (VAR_2 = 3; VAR_2 >= 0; VAR_2--)
  VAR_3 = (VAR_3 << 2) | VAR_0[1][VAR_1[VAR_2]];
 FUNC_0(0xdc, VAR_3);
 for (VAR_2 = 0; VAR_2 < 4; VAR_2++) {
  FUNC_0(0xd0 + VAR_2, VAR_0[2][VAR_1[VAR_2]]);
  FUNC_0(0xd8 + VAR_2, VAR_0[2][VAR_1[VAR_2]]);
 }
 FUNC_1(0xa5, 0x108);

 FUNC_2("umc8672: drive speeds [0 to 11]: %d %d %d %d\n",
  VAR_1[0], VAR_1[1], VAR_1[2], VAR_1[3]);
}
