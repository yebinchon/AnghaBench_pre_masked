
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_scope_id; } ;
struct sockaddr_ib {int sib_pkey; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct TYPE_4__ {int src_addr; } ;
struct TYPE_3__ {TYPE_2__ addr; } ;
struct rdma_cm_id {TYPE_1__ route; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rdma_cm_id*,struct sockaddr*) ;

__attribute__((used)) static int FUNC_1(struct rdma_cm_id *VAR_2, struct sockaddr *VAR_3,
    struct sockaddr *VAR_4)
{
 if (!VAR_3 || !VAR_3->sa_family) {
  VAR_3 = (struct sockaddr *) &VAR_2->route.addr.src_addr;
  VAR_3->sa_family = VAR_4->sa_family;
  if (VAR_4->sa_family == VAR_1) {
   ((struct sockaddr_in6 *) VAR_3)->sin6_scope_id =
    ((struct sockaddr_in6 *) VAR_4)->sin6_scope_id;
  } else if (VAR_4->sa_family == VAR_0) {
   ((struct sockaddr_ib *) VAR_3)->sib_pkey =
    ((struct sockaddr_ib *) VAR_4)->sib_pkey;
  }
 }
 return FUNC_0(VAR_2, VAR_3);
}
