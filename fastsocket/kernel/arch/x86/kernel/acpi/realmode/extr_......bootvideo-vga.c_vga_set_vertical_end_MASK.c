
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (int,int ,int) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(int VAR_0)
{
 u16 VAR_1;
 u8 VAR_2;
 int VAR_3 = VAR_0-1;

 VAR_1 = FUNC_1();

 VAR_2 = 0x3c | ((VAR_3 >> (8-1)) & 0x02) | ((VAR_3 >> (9-6)) & 0x40);

 FUNC_0(VAR_2, VAR_1, 0x07);
 FUNC_0(VAR_3, VAR_1, 0x12);
}
