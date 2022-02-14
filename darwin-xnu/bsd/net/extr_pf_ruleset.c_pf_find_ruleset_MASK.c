
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_ruleset {int dummy; } ;
struct pf_anchor {struct pf_ruleset ruleset; } ;


 struct pf_anchor* FUNC_0 (char const*) ;
 struct pf_ruleset VAR_0 ;

struct pf_ruleset *
FUNC_1(const char *VAR_1)
{
 struct pf_anchor *VAR_2;

 while (*VAR_1 == '/')
  VAR_1++;
 if (!*VAR_1)
  return (&VAR_0);
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == ((void*)0))
  return (((void*)0));
 else
  return (&VAR_2->ruleset);
}
