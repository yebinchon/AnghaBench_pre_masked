
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sin6_addr; } ;
struct nd_prefix {int ndpr_stateflags; int ndpr_plen; TYPE_1__ ndpr_prefix; struct nd_prefix* ndpr_next; } ;
typedef int boolean_t ;
struct TYPE_4__ {struct nd_prefix* lh_first; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nd_prefix*) ;
 int FUNC_2 (struct nd_prefix*) ;
 int FUNC_3 (struct nd_prefix*) ;
 scalar_t__ FUNC_4 (int *,int *,int ) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static struct nd_prefix *
FUNC_5(struct nd_prefix *VAR_5, boolean_t VAR_6)
{
 struct nd_prefix *VAR_7;

 FUNC_0(VAR_3, VAR_0);

 for (VAR_7 = VAR_4.lh_first; VAR_7; VAR_7 = VAR_7->ndpr_next) {
  if (VAR_7 == VAR_5)
   continue;

  FUNC_2(VAR_7);
  if ((VAR_7->ndpr_stateflags & VAR_2) == 0) {
   FUNC_3(VAR_7);
   continue;
  }
  if (VAR_7->ndpr_plen == VAR_5->ndpr_plen &&
      FUNC_4(&VAR_5->ndpr_prefix.sin6_addr,
      &VAR_7->ndpr_prefix.sin6_addr, VAR_5->ndpr_plen) &&
      (!VAR_6 ||
      !(VAR_7->ndpr_stateflags & VAR_1))) {
   FUNC_1(VAR_7);
   FUNC_3(VAR_7);
   return (VAR_7);
  }
  FUNC_3(VAR_7);
 }
 return (((void*)0));
}
