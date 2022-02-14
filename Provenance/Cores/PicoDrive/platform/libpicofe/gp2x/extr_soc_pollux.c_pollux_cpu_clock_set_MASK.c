
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int,int) ;

int FUNC_2(int VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7 = 0;
 int VAR_8, VAR_9, VAR_10;

 if (!VAR_1)
  return -1;
 if (VAR_3 == FUNC_0())
  return 0;



 VAR_6 = 9;
 VAR_5 = (VAR_3 * VAR_6) / 27;
 if (VAR_5 & ~0x3ff)
  return -1;
 VAR_10 = (VAR_6<<18) | (VAR_5<<8) | VAR_7;


 for (VAR_4 = 1; VAR_3 / VAR_4 > 250; VAR_4++)
  ;

 VAR_9 = VAR_2[0xf000>>2];
 VAR_9 = (VAR_9 & ~0x3c0) | ((VAR_4 - 1) << 6);
 VAR_2[0xf000>>2] = VAR_9;
 VAR_2[0xf004>>2] = VAR_10;
 VAR_2[0xf07c>>2] |= 0x8000;
 for (VAR_8 = 0; (VAR_2[0xf07c>>2] & 0x8000) && VAR_8 < 0x100000; VAR_8++)
  ;

 FUNC_1("clock set to %dMHz, AHB set to %dMHz\n", VAR_3, VAR_3 / VAR_4);
 return 0;
}
