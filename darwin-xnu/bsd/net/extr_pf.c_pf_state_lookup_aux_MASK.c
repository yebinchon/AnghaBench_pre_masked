
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pfi_kif {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ptr; } ;
struct pf_state {scalar_t__ timeout; struct pfi_kif* rt_kif; TYPE_2__ rule; } ;
struct TYPE_3__ {scalar_t__ rt; int direction; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static const int *
FUNC_0(struct pf_state **VAR_7, struct pfi_kif *VAR_8,
 int VAR_9, int *VAR_10)
{
 if (*VAR_7 == ((void*)0) || (*VAR_7)->timeout == VAR_0) {
  *VAR_10 = VAR_1;
  return (VAR_10);
 }

 if (VAR_9 == VAR_3 &&
     (((*VAR_7)->rule.ptr->rt == VAR_6 &&
     (*VAR_7)->rule.ptr->direction == VAR_3) ||
     ((*VAR_7)->rule.ptr->rt == VAR_5 &&
     (*VAR_7)->rule.ptr->direction == VAR_2)) &&
     (*VAR_7)->rt_kif != ((void*)0) && (*VAR_7)->rt_kif != VAR_8) {
  *VAR_10 = VAR_4;
  return (VAR_10);
 }

 return (0);
}
