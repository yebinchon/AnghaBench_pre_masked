
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (scalar_t__,int,int) ;

void FUNC_3(void)
{
  int VAR_7 = (VAR_2 & 8) >> 3;
  int VAR_8 = VAR_3;



  VAR_5 += VAR_4;
  if (VAR_5 >= 0x10000) {
    VAR_5 -= 0x10000;
    VAR_8++;
  }



  if (VAR_2 & VAR_0)
    FUNC_2(VAR_6, VAR_8, VAR_7);


  if (VAR_7) {
    int VAR_9, *VAR_10;
    for (VAR_9 = VAR_8, VAR_10 = (void *)VAR_6; VAR_9 > 0; VAR_9--, VAR_10++)
      *VAR_10 |= *VAR_10 << 16;
  }

  if (&FUNC_0 != ((void*)0))
    FUNC_0(VAR_8 * ((VAR_2 & VAR_1) ? 4 : 2));
  FUNC_1();
}
