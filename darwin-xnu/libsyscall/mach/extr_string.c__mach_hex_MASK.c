
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (char*) ;
 char* VAR_0 ;

__attribute__((used)) static void
FUNC_1(char **VAR_1, int *VAR_2, unsigned long long VAR_3)
{
 char VAR_4[32];
 char *VAR_5 = VAR_4 + sizeof(VAR_4);

 if (VAR_3) {
  *--VAR_5 = '\0';
  while (VAR_3) {
   *--VAR_5 = VAR_0[VAR_3 & 0xf];
   VAR_3 >>= 4;
  }

  int VAR_6 = FUNC_0(VAR_5);
  while (VAR_6 > 0 && VAR_2 > 0) {
   *(*VAR_1)++ = *VAR_5++;
   (*VAR_2)--;
   VAR_6--;
  }
 }
}
