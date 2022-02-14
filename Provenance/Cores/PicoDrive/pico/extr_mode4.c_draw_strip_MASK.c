
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;

__attribute__((used)) static void FUNC_2(const unsigned short *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
  int VAR_4 = -1, VAR_5 = -1;
  int VAR_6 = 0, VAR_7 = 0;


  for (; VAR_2 > 0; VAR_1 += 8, VAR_3++, VAR_2--)
  {
    int VAR_8, VAR_9;

    VAR_8 = VAR_0[VAR_3 & 0x1f];
    if (VAR_8 == VAR_5)
      continue;
    if ((VAR_8 ^ VAR_3) & 0x1000)
      continue;

    if (VAR_8 != VAR_4) {
      VAR_4 = VAR_8;

      VAR_6 = (VAR_8 & 0x1ff) << 4;
      VAR_6 += VAR_3 >> 16;
      if (VAR_8 & 0x0400)
        VAR_6 ^= 0xe;

      VAR_7 = (VAR_8>>7) & 0x10;
    }

    if (VAR_8&0x0200) VAR_9 = FUNC_0(VAR_1, VAR_6, VAR_7);
    else VAR_9 = FUNC_1(VAR_1, VAR_6, VAR_7);

    if (VAR_9)
      VAR_5 = VAR_8;
  }
}
