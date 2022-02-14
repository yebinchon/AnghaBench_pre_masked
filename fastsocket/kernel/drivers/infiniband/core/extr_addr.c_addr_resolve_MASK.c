
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct rdma_dev_addr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sockaddr_in*,struct sockaddr_in*,struct rdma_dev_addr*) ;
 int FUNC_1 (struct sockaddr_in6*,struct sockaddr_in6*,struct rdma_dev_addr*) ;

__attribute__((used)) static int FUNC_2(struct sockaddr *VAR_1,
   struct sockaddr *VAR_2,
   struct rdma_dev_addr *VAR_3)
{
 if (VAR_1->sa_family == VAR_0) {
  return FUNC_0((struct sockaddr_in *) VAR_1,
   (struct sockaddr_in *) VAR_2, VAR_3);
 } else
  return FUNC_1((struct sockaddr_in6 *) VAR_1,
   (struct sockaddr_in6 *) VAR_2, VAR_3);
}
