
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct pf_ruleset {TYPE_3__* rules; } ;
struct pf_rulequeue {int dummy; } ;
struct pf_rule {int rule_flag; } ;
struct TYPE_5__ {scalar_t__ ticket; scalar_t__ rcount; scalar_t__ open; struct pf_rule** ptr_array; struct pf_rulequeue* ptr; } ;
struct TYPE_4__ {scalar_t__ rcount; scalar_t__ ticket; struct pf_rulequeue* ptr; struct pf_rule** ptr_array; } ;
struct TYPE_6__ {TYPE_2__ inactive; TYPE_1__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct pf_rule* FUNC_1 (struct pf_rulequeue*) ;
 struct pf_rule* FUNC_2 (struct pf_rule*,int ) ;
 int FUNC_3 (struct pf_rule**,int ) ;
 int VAR_6 ;
 int FUNC_4 (struct pf_rulequeue*) ;
 struct pf_ruleset* FUNC_5 (char*) ;
 int VAR_7 ;
 struct pf_ruleset VAR_8 ;
 int FUNC_6 (struct pf_ruleset*) ;
 int FUNC_7 (struct pf_rulequeue*,struct pf_rule*) ;
 int FUNC_8 (struct pf_ruleset*) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_9(u_int32_t VAR_10, int VAR_11, char *VAR_12)
{
 struct pf_ruleset *VAR_13;
 struct pf_rule *VAR_14, **VAR_15, *VAR_16;
 struct pf_rulequeue *VAR_17;
 int VAR_18;
 u_int32_t VAR_19;

 FUNC_0(VAR_7, VAR_2);

 if (VAR_11 < 0 || VAR_11 >= VAR_5)
  return (VAR_1);
 VAR_13 = FUNC_5(VAR_12);
 if (VAR_13 == ((void*)0) || !VAR_13->rules[VAR_11].inactive.open ||
     VAR_10 != VAR_13->rules[VAR_11].inactive.ticket)
  return (VAR_0);


 if (VAR_13 == &VAR_8) {
  VAR_18 = FUNC_8(VAR_13);
  if (VAR_18 != 0)
   return (VAR_18);
 }


 VAR_17 = VAR_13->rules[VAR_11].active.ptr;
 VAR_19 = VAR_13->rules[VAR_11].active.rcount;
 VAR_15 = VAR_13->rules[VAR_11].active.ptr_array;

 if(VAR_19 != 0) {
  VAR_16 = FUNC_1(VAR_13->rules[VAR_11].active.ptr);
  while (VAR_16) {
   if (VAR_16->rule_flag & VAR_4)
    VAR_9--;
   VAR_16 = FUNC_2(VAR_16, VAR_6);
  }
 }


 VAR_13->rules[VAR_11].active.ptr =
     VAR_13->rules[VAR_11].inactive.ptr;
 VAR_13->rules[VAR_11].active.ptr_array =
     VAR_13->rules[VAR_11].inactive.ptr_array;
 VAR_13->rules[VAR_11].active.rcount =
     VAR_13->rules[VAR_11].inactive.rcount;
 VAR_13->rules[VAR_11].inactive.ptr = VAR_17;
 VAR_13->rules[VAR_11].inactive.ptr_array = VAR_15;
 VAR_13->rules[VAR_11].inactive.rcount = VAR_19;

 VAR_13->rules[VAR_11].active.ticket =
     VAR_13->rules[VAR_11].inactive.ticket;
 FUNC_4(VAR_13->rules[VAR_11].active.ptr);



 while ((VAR_14 = FUNC_1(VAR_17)) != ((void*)0))
  FUNC_7(VAR_17, VAR_14);
 if (VAR_13->rules[VAR_11].inactive.ptr_array)
  FUNC_3(VAR_13->rules[VAR_11].inactive.ptr_array, VAR_3);
 VAR_13->rules[VAR_11].inactive.ptr_array = ((void*)0);
 VAR_13->rules[VAR_11].inactive.rcount = 0;
 VAR_13->rules[VAR_11].inactive.open = 0;
 FUNC_6(VAR_13);
 return (0);
}
