
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char*,int ) ;

char *FUNC_1(char *VAR_0, size_t VAR_1)
{
  static char VAR_2[256*3];
  size_t VAR_3;
  char *VAR_4 = VAR_2;
  char *VAR_5 = VAR_0;

  if(VAR_1 > 255)
    VAR_1 = 255;

  for(VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
    if((VAR_0[VAR_3] >= 0x20) && (VAR_0[VAR_3] < 0x7f))
      *VAR_4++ = *VAR_5++;
    else {
      FUNC_0(VAR_4, 4, "%%%02x", *VAR_5++);
      VAR_4 += 3;
    }
  }
  *VAR_4 = 0;

  return VAR_2;
}
