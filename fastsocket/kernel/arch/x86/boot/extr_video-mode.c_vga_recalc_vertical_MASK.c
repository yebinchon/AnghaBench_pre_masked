
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void)
{
 unsigned int VAR_1, VAR_2;
 u16 VAR_3;
 u8 VAR_4, VAR_5;

 FUNC_3(0);
 VAR_1 = FUNC_2(0x485);
 VAR_2 = VAR_0 ? VAR_0 : FUNC_2(0x484)+1;

 VAR_2 *= VAR_1;
 VAR_2--;

 VAR_3 = FUNC_4();

 VAR_4 = FUNC_0(VAR_3, 0x11);
 VAR_4 &= ~0x80;
 FUNC_1(VAR_4, VAR_3, 0x11);

 FUNC_1((u8)VAR_2, VAR_3, 0x12);

 VAR_5 = FUNC_0(VAR_3, 0x07);
 VAR_5 &= 0xbd;
 VAR_5 |= (VAR_2 >> (8-1)) & 0x02;
 VAR_5 |= (VAR_2 >> (9-6)) & 0x40;
 FUNC_1(VAR_5, VAR_3, 0x07);
}
