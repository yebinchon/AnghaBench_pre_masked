
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int,int,int) ;

int FUNC_7()
{
 int VAR_1, VAR_2;

 FUNC_3(FUNC_4(0));

 VAR_0 = FUNC_1("test_misc2.bin", "wb");
 if (!VAR_0) return 1;

 FUNC_5(0x00ff8000);
 FUNC_5(0x300);

 for (VAR_1=0x100/4-2; VAR_1; VAR_1--)
 {
  FUNC_5(0x200+VAR_1*4);
 }

 for (VAR_1=0x100/4; VAR_1; VAR_1--)
 {
  FUNC_5(0);
 }

 for (VAR_1=0x100/4; VAR_1; VAR_1--)
 {
  FUNC_5(0x4e734e73);
 }

 for (VAR_2 = 0; VAR_2 < 0x10000; VAR_2++)
 {
  if ((VAR_2&0xf000) == 0x6000)
  {
   if ((VAR_2&0x00ff) == 0)
    FUNC_6(VAR_2, 6, 0, 0);
  }
  else if ((VAR_2&0xf0f8)==0x50c8)
  {
   FUNC_6(VAR_2, 6, 0, 0);
  }
  else if ((VAR_2&0xff80)==0x4e80)
  {
   int VAR_3 = 0x300 + VAR_2*8 + 8;
   if ((VAR_2&0x3f) == 0x39)
    FUNC_6(VAR_2, VAR_3 >> 16, VAR_3 & 0xffff, 0);
  }
  else if ((VAR_2&0xf000)==0xa000 || (VAR_2&0xf000)==0xf000)
  {
   if (VAR_2 != 0xa000 && VAR_2 != 0xf000) continue;
  }
  else if ((VAR_2&0xfff8)==0x4e70&&VAR_2!=0x4e71&&VAR_2!=0x4e76);
  else
  {
   FUNC_6(VAR_2, FUNC_2(), FUNC_2(), FUNC_2());
  }
 }


 FUNC_6(0x4ef8, 0x300, 0x4ef8, 0x300);
 FUNC_6(0x4ef8, 0x300, 0x4ef8, 0x300);

 FUNC_0(VAR_0);
 return 0;
}
