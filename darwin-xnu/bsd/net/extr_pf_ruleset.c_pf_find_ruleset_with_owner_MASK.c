
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_ruleset {int dummy; } ;
struct pf_anchor {char* owner; struct pf_ruleset ruleset; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pf_anchor* FUNC_0 (char const*) ;
 struct pf_ruleset VAR_2 ;
 int FUNC_1 (char const*,char*) ;

struct pf_ruleset *
FUNC_2(const char *VAR_3, const char *VAR_4, int VAR_5,
    int *VAR_6)
{
 struct pf_anchor *VAR_7;

 while (*VAR_3 == '/')
  VAR_3++;
 if (!*VAR_3)
  return (&VAR_2);
 VAR_7 = FUNC_0(VAR_3);
 if (VAR_7 == ((void*)0)) {
  *VAR_6 = VAR_0;
  return (((void*)0));
 } else {
  if ((VAR_4 && (!FUNC_1(VAR_4, VAR_7->owner)))
      || (VAR_5 && !FUNC_1(VAR_7->owner, "")))
   return (&VAR_7->ruleset);
  *VAR_6 = VAR_1;
  return ((void*)0);
 }
}
