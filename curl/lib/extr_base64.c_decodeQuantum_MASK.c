
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 unsigned char FUNC_0 (unsigned long) ;

__attribute__((used)) static size_t FUNC_1(unsigned char *VAR_1, const char *VAR_2)
{
  size_t VAR_3 = 0;
  const char *VAR_4, *VAR_5;
  unsigned long VAR_6, VAR_7 = 0;

  for(VAR_6 = 0, VAR_4 = VAR_2; VAR_6 < 4; VAR_6++, VAR_4++) {
    if(*VAR_4 == '=') {
      VAR_7 = (VAR_7 << 6);
      VAR_3++;
    }
    else {
      unsigned long VAR_8 = 0;
      VAR_5 = VAR_0;

      while(*VAR_5 && (*VAR_5 != *VAR_4)) {
        VAR_8++;
        VAR_5++;
      }

      if(*VAR_5 == *VAR_4)
        VAR_7 = (VAR_7 << 6) + VAR_8;
      else
        return 0;
    }
  }

  if(VAR_3 < 1)
    VAR_1[2] = FUNC_0(VAR_7 & 0xFFUL);

  VAR_7 >>= 8;
  if(VAR_3 < 2)
    VAR_1[1] = FUNC_0(VAR_7 & 0xFFUL);

  VAR_7 >>= 8;
  VAR_1[0] = FUNC_0(VAR_7 & 0xFFUL);

  return 3 - VAR_3;
}
