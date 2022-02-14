
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct pf_ruleset {TYPE_3__* rules; } ;
struct pf_pool {int dummy; } ;
struct pf_rule {scalar_t__ nr; struct pf_pool rpool; } ;
struct TYPE_5__ {scalar_t__ ticket; int ptr; } ;
struct TYPE_4__ {scalar_t__ ticket; int ptr; } ;
struct TYPE_6__ {TYPE_2__ inactive; TYPE_1__ active; } ;


 int VAR_0 ;
 struct pf_rule* FUNC_0 (int ) ;
 struct pf_rule* FUNC_1 (int ,int ) ;
 struct pf_rule* FUNC_2 (struct pf_rule*,int ) ;
 int VAR_1 ;
 struct pf_ruleset* FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_2 ;

__attribute__((used)) static struct pf_pool *
FUNC_5(char *VAR_3, u_int32_t VAR_4, u_int8_t VAR_5,
    u_int32_t VAR_6, u_int8_t VAR_7, u_int8_t VAR_8,
    u_int8_t VAR_9)
{
 struct pf_ruleset *VAR_10;
 struct pf_rule *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_3(VAR_3);
 if (VAR_10 == ((void*)0))
  return (((void*)0));
 VAR_12 = FUNC_4(VAR_5);
 if (VAR_12 >= VAR_0)
  return (((void*)0));
 if (VAR_8) {
  if (VAR_9 && VAR_4 !=
      VAR_10->rules[VAR_12].active.ticket)
   return (((void*)0));
  if (VAR_7)
   VAR_11 = FUNC_1(VAR_10->rules[VAR_12].active.ptr,
       VAR_2);
  else
   VAR_11 = FUNC_0(VAR_10->rules[VAR_12].active.ptr);
 } else {
  if (VAR_9 && VAR_4 !=
      VAR_10->rules[VAR_12].inactive.ticket)
   return (((void*)0));
  if (VAR_7)
   VAR_11 = FUNC_1(VAR_10->rules[VAR_12].inactive.ptr,
       VAR_2);
  else
   VAR_11 = FUNC_0(VAR_10->rules[VAR_12].inactive.ptr);
 }
 if (!VAR_7) {
  while ((VAR_11 != ((void*)0)) && (VAR_11->nr != VAR_6))
   VAR_11 = FUNC_2(VAR_11, VAR_1);
 }
 if (VAR_11 == ((void*)0))
  return (((void*)0));

 return (&VAR_11->rpool);
}
