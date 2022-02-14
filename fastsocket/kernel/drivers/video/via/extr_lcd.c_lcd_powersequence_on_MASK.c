
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int** VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_4, VAR_5, VAR_6;


 FUNC_1(VAR_1, VAR_3, 0x11, 0x11);


 FUNC_1(VAR_0, VAR_3, 0x08, 0x08);

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
  VAR_5 = VAR_2[0][VAR_4];
  VAR_6 = VAR_2[1][VAR_4] & VAR_5;
  FUNC_1(VAR_1, VAR_3, (u8) VAR_6, (u8) VAR_5);
  FUNC_0(VAR_2[2][VAR_4]);
 }

 FUNC_0(1);
}
