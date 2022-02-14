
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kpersona_info {int* persona_groups; int persona_ngroups; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct kpersona_info *VAR_0, char *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;
 char *VAR_4, *VAR_5;

 if (!VAR_1)
  return -1;
 VAR_4 = VAR_5 = VAR_1;
 while (*VAR_4) {
  int VAR_6 = 0;
  VAR_5 = VAR_4;
  while (*VAR_5 && *VAR_5 != ',')
   VAR_5++;
  if (*VAR_5)
   VAR_6 = 1;
  *VAR_5 = 0;
  VAR_3 = FUNC_0(VAR_4);
  if (VAR_6) {
   *VAR_5 = ',';
   VAR_4 = VAR_5 + 1;
  } else {
   VAR_4 = VAR_5;
  }
  if (VAR_3 < 0)
   return -1;
  VAR_0->persona_groups[VAR_2] = VAR_3;
  VAR_2++;
 }
 VAR_0->persona_ngroups = VAR_2;

 return 0;
}
