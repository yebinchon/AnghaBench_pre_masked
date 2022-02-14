
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pfioc_rule {char* anchor_call; } ;
struct pf_ruleset {TYPE_1__* anchor; } ;
struct pf_rule {int anchor_relative; scalar_t__ anchor_wildcard; TYPE_2__* anchor; } ;
struct TYPE_4__ {char* path; } ;
struct TYPE_3__ {char* path; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*,scalar_t__) ;
 char* FUNC_8 (char*,char) ;

int
FUNC_9(const struct pf_ruleset *VAR_1, const struct pf_rule *VAR_2,
    struct pfioc_rule *VAR_3)
{
 VAR_3->anchor_call[0] = 0;
 if (VAR_2->anchor == ((void*)0))
  return (0);
 if (!VAR_2->anchor_relative) {
  FUNC_5(VAR_3->anchor_call, "/", sizeof (VAR_3->anchor_call));
  FUNC_4(VAR_3->anchor_call, VAR_2->anchor->path,
      sizeof (VAR_3->anchor_call));
 } else {
  char *VAR_4, *VAR_5;
  int VAR_6;

  VAR_4 = (char *)FUNC_3(VAR_0);
  FUNC_0(VAR_4, VAR_0);
  if (VAR_1->anchor == ((void*)0))
   VAR_4[0] = 0;
  else
   FUNC_5(VAR_4, VAR_1->anchor->path, VAR_0);
  for (VAR_6 = 1; VAR_6 < VAR_2->anchor_relative; ++VAR_6) {
   if ((VAR_5 = FUNC_8(VAR_4, '/')) == ((void*)0))
    VAR_5 = VAR_4;
   *VAR_5 = 0;
   FUNC_4(VAR_3->anchor_call, "../",
       sizeof (VAR_3->anchor_call));
  }
  if (FUNC_7(VAR_4, VAR_2->anchor->path, FUNC_6(VAR_4))) {
   FUNC_1("pf_anchor_copyout: '%s' '%s'\n", VAR_4,
       VAR_2->anchor->path);
   FUNC_2(VAR_4);
   return (1);
  }
  if (FUNC_6(VAR_2->anchor->path) > FUNC_6(VAR_4))
   FUNC_4(VAR_3->anchor_call, VAR_2->anchor->path + (VAR_4[0] ?
       FUNC_6(VAR_4) + 1 : 0), sizeof (VAR_3->anchor_call));
  FUNC_2(VAR_4);
 }
 if (VAR_2->anchor_wildcard)
  FUNC_4(VAR_3->anchor_call, VAR_3->anchor_call[0] ? "/*" : "*",
      sizeof (VAR_3->anchor_call));
 return (0);
}
