
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct pf_ruleset {TYPE_2__* rules; } ;
struct pf_rule {int dummy; } ;
struct TYPE_3__ {scalar_t__ ticket; scalar_t__ open; int rcount; int ptr; } ;
struct TYPE_4__ {TYPE_1__ inactive; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pf_rule* FUNC_0 (int ) ;
 struct pf_ruleset* FUNC_1 (char*) ;
 int FUNC_2 (int ,struct pf_rule*) ;

__attribute__((used)) static int
FUNC_3(u_int32_t VAR_2, int VAR_3, char *VAR_4)
{
 struct pf_ruleset *VAR_5;
 struct pf_rule *VAR_6;

 if (VAR_3 < 0 || VAR_3 >= VAR_1)
  return (VAR_0);
 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 == ((void*)0) || !VAR_5->rules[VAR_3].inactive.open ||
     VAR_5->rules[VAR_3].inactive.ticket != VAR_2)
  return (0);
 while ((VAR_6 = FUNC_0(VAR_5->rules[VAR_3].inactive.ptr)) != ((void*)0)) {
  FUNC_2(VAR_5->rules[VAR_3].inactive.ptr, VAR_6);
  VAR_5->rules[VAR_3].inactive.rcount--;
 }
 VAR_5->rules[VAR_3].inactive.open = 0;
 return (0);
}
