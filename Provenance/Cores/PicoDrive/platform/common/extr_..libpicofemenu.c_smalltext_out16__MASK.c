
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char** VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(int VAR_4, int VAR_5, const char *VAR_6, int VAR_7)
{
 unsigned char *VAR_8;
 unsigned short *VAR_9;
 int VAR_10 = VAR_3 / 6;
 int VAR_11;

 for (VAR_11 = 0;; VAR_11++, VAR_4 += VAR_3)
 {
  unsigned char VAR_12 = (unsigned char) VAR_6[VAR_11];
  int VAR_13 = 8;

  if (!VAR_12 || VAR_12 == '\n')
   break;

  VAR_8 = VAR_0[VAR_12];
  VAR_9 = (unsigned short *)VAR_1 + VAR_4 + VAR_5 * VAR_2;

  while (VAR_13--)
  {
   int VAR_14, VAR_15, VAR_16;
   for (VAR_16 = VAR_10; VAR_16 > 0; VAR_16--)
   {
    for (VAR_14 = 0x20; VAR_14; VAR_14 >>= 1) {
     if (*VAR_8 & VAR_14)
      for (VAR_15 = VAR_10; VAR_15 > 0; VAR_15--)
       *VAR_9++ = VAR_7;
     else
      VAR_9 += VAR_10;
    }

    VAR_9 += VAR_2 - VAR_3;
   }
   VAR_8++;
  }
 }
}
