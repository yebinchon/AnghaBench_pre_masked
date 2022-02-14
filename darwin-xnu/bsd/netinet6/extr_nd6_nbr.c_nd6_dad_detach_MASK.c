
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifaddr {int dummy; } ;
struct TYPE_2__ {int * tqe_prev; int * tqe_next; } ;
struct dadq {int dad_attached; TYPE_1__ dad_list; struct ifaddr* dad_ifa; } ;


 int FUNC_0 (struct dadq*) ;
 int FUNC_1 (struct dadq*) ;
 int FUNC_2 (struct dadq*) ;
 int FUNC_3 (int *,struct dadq*,int ) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct dadq *VAR_3, struct ifaddr *VAR_4)
{
 int VAR_5;

 FUNC_5(VAR_0);
 FUNC_0(VAR_3);
 if ((VAR_5 = VAR_3->dad_attached)) {
  FUNC_4(VAR_3->dad_ifa == VAR_4);
  FUNC_3(&VAR_2, (struct dadq *)VAR_3, VAR_1);
  VAR_3->dad_list.tqe_next = ((void*)0);
  VAR_3->dad_list.tqe_prev = ((void*)0);
  VAR_3->dad_attached = 0;
 }
 FUNC_2(VAR_3);
 FUNC_6(VAR_0);
 if (VAR_5) {
  FUNC_1(VAR_3);
 }
}
