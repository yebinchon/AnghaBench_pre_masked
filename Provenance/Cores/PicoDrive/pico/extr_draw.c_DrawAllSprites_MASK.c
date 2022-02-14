
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(unsigned char *VAR_4, int VAR_5, int VAR_6)
{
  int VAR_7 = VAR_3;
  unsigned char *VAR_8;
  int VAR_9;

  if (VAR_7 & (VAR_2|VAR_1)) {

    FUNC_1(VAR_7 & VAR_1);
    VAR_3 = VAR_7 & ~(VAR_2|VAR_1);
  }

  VAR_9 = VAR_4[0] & 0x7f;
  if (VAR_9 == 0) return;

  VAR_8 = &VAR_4[3];


  for (VAR_9--; VAR_9 >= 0; VAR_9--)
  {
    int VAR_10;
    if ((VAR_8[VAR_9] >> 7) != VAR_5) continue;
    VAR_10 = (VAR_8[VAR_9]&0x7f) * 2;
    FUNC_0(VAR_0 + VAR_10, VAR_6);
  }
}
