
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {char a; char b; char c; char d; char e; char f; char g; char h; } ;
typedef TYPE_1__ pasc_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*,int) ;

int
FUNC_2(char *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
  unsigned int VAR_3, VAR_4 = 0;
  pasc_t VAR_5;

  VAR_1 = FUNC_0(((VAR_1 + 7) & ~7), VAR_2);

  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3+=8)
    {
      VAR_5.a = VAR_0[VAR_3];
      VAR_5.b = VAR_0[VAR_3+1];
      VAR_5.c = VAR_0[VAR_3+2];
      VAR_5.d = VAR_0[VAR_3+3];
      VAR_5.e = VAR_0[VAR_3+4];
      VAR_5.f = VAR_0[VAR_3+5];
      VAR_5.g = VAR_0[VAR_3+6];
      VAR_5.h = VAR_0[VAR_3+7];
      FUNC_1 ((char *) &VAR_5, VAR_0 + VAR_4, 7);
      VAR_4 += 7;
    }
  return VAR_4;
}
