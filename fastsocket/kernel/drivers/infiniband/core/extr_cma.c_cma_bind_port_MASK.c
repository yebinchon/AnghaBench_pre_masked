
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct sockaddr_in6 {void* sin6_port; } ;
struct sockaddr_in {void* sin_port; } ;
struct sockaddr_ib {void* sib_sid_mask; void* sib_sid; } ;
struct sockaddr {int sa_family; } ;
struct rdma_id_private {int node; struct rdma_bind_list* bind_list; } ;
struct rdma_bind_list {int owners; int port; } ;
typedef void* __be16 ;





 unsigned long long FUNC_0 (void*) ;
 struct sockaddr* FUNC_1 (struct rdma_id_private*) ;
 void* FUNC_2 (unsigned long long) ;
 int FUNC_3 (int *,int *) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (void*) ;

__attribute__((used)) static void FUNC_6(struct rdma_bind_list *VAR_0,
     struct rdma_id_private *VAR_1)
{
 struct sockaddr *VAR_2;
 struct sockaddr_ib *VAR_3;
 u64 VAR_4, VAR_5;
 __be16 VAR_6;

 VAR_2 = FUNC_1(VAR_1);
 VAR_6 = FUNC_4(VAR_0->port);

 switch (VAR_2->sa_family) {
 case 129:
  ((struct sockaddr_in *) VAR_2)->sin_port = VAR_6;
  break;
 case 128:
  ((struct sockaddr_in6 *) VAR_2)->sin6_port = VAR_6;
  break;
 case 130:
  VAR_3 = (struct sockaddr_ib *) VAR_2;
  VAR_4 = FUNC_0(VAR_3->sib_sid);
  VAR_5 = FUNC_0(VAR_3->sib_sid_mask);
  VAR_3->sib_sid = FUNC_2((VAR_4 & VAR_5) | (u64) FUNC_5(VAR_6));
  VAR_3->sib_sid_mask = FUNC_2(~0ULL);
  break;
 }
 VAR_1->bind_list = VAR_0;
 FUNC_3(&VAR_1->node, &VAR_0->owners);
}
