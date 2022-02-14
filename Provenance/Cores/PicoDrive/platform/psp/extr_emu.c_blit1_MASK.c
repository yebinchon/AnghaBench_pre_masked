
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int*,int,int) ;

void FUNC_3(void)
{
 if (VAR_3&0x10)
 {
  int VAR_4;
  unsigned char *VAR_5;

  for (VAR_5 = VAR_2+8, VAR_4 = 8; VAR_4 > 0; VAR_4--, VAR_5 += 512)
   FUNC_2((int *)VAR_5, 0xe0e0e0e0, 320/4);
  for (VAR_5 = VAR_2+512*232+8, VAR_4 = 8; VAR_4 > 0; VAR_4--, VAR_5 += 512)
   FUNC_2((int *)VAR_5, 0xe0e0e0e0, 320/4);
 }

 if (VAR_1 & VAR_0)
  FUNC_1();

 FUNC_0();
}
