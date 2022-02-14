
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_ib {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct rdma_dev_addr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sockaddr_ib*,struct rdma_dev_addr*) ;
 int FUNC_1 (struct sockaddr*,struct rdma_dev_addr*) ;

__attribute__((used)) static int FUNC_2(struct sockaddr *VAR_1, struct rdma_dev_addr *VAR_2)
{
 int VAR_3;

 if (VAR_1->sa_family != VAR_0) {
  VAR_3 = FUNC_1(VAR_1, VAR_2);
 } else {
  FUNC_0((struct sockaddr_ib *) VAR_1, VAR_2);
  VAR_3 = 0;
 }

 return VAR_3;
}
