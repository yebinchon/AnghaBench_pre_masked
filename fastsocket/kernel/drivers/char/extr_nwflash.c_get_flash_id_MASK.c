
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned int volatile VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(void)
{
 volatile unsigned int VAR_4, VAR_5;




 FUNC_1();
 VAR_5 = FUNC_0(0x80);
 *(volatile unsigned char *) (VAR_0 + 0x8000) = 0x90;
 FUNC_2(15);
 VAR_4 = *(volatile unsigned char *) VAR_0;
 VAR_5 = FUNC_0(0x80);




 if (VAR_4 == 0xB0)
  VAR_5 = *(volatile unsigned char *) (VAR_0 + 2);
 else
  VAR_5 = *(volatile unsigned char *) (VAR_0 + 1);

 VAR_5 += (VAR_4 << 8);




 *(volatile unsigned char *) (VAR_0 + 0x8000) = 0xFF;

 if (VAR_5 == VAR_1)
  VAR_3 = VAR_2;

 return VAR_5;
}
