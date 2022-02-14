
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sin6_addr; } ;
struct nd_prefix {scalar_t__ ndpr_ifp; scalar_t__ ndpr_plen; int ndpr_expire; TYPE_1__ ndpr_prefix; struct nd_prefix* ndpr_next; } ;
struct TYPE_4__ {struct nd_prefix* lh_first; } ;


 int VAR_0 ;
 int FUNC_0 (struct nd_prefix*) ;
 int FUNC_1 (struct nd_prefix*) ;
 int FUNC_2 (struct nd_prefix*) ;
 scalar_t__ FUNC_3 (int *,int *,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

struct nd_prefix *
FUNC_6(struct nd_prefix *VAR_3, int VAR_4)
{
 struct nd_prefix *VAR_5;

 FUNC_4(VAR_1);
 for (VAR_5 = VAR_2.lh_first; VAR_5; VAR_5 = VAR_5->ndpr_next) {
  FUNC_1(VAR_5);
  if (VAR_3->ndpr_ifp == VAR_5->ndpr_ifp &&
      VAR_3->ndpr_plen == VAR_5->ndpr_plen &&
      FUNC_3(&VAR_3->ndpr_prefix.sin6_addr,
      &VAR_5->ndpr_prefix.sin6_addr, VAR_3->ndpr_plen)) {
   if (VAR_4 != VAR_0) {
    VAR_5->ndpr_expire = VAR_4;
   }
   FUNC_0(VAR_5);
   FUNC_2(VAR_5);
   break;
  }
  FUNC_2(VAR_5);
 }
 FUNC_5(VAR_1);

 return (VAR_5);
}
