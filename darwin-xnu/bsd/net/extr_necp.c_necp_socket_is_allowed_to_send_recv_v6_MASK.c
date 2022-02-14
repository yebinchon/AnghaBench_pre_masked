
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef void* u_int16_t ;
struct sockaddr_in6 {int sin6_len; int sin6_addr; void* sin6_port; int sin6_family; } ;
struct sockaddr {int dummy; } ;
struct inpcb {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int necp_kernel_policy_id ;
typedef int ifnet_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct in6_addr*,int) ;
 int FUNC_1 (struct inpcb*,struct sockaddr*,struct sockaddr*,int ,int *,int *,int *) ;

bool
FUNC_2(struct inpcb *VAR_1, u_int16_t VAR_2, u_int16_t VAR_3, struct in6_addr *VAR_4, struct in6_addr *VAR_5, ifnet_t VAR_6, necp_kernel_policy_id *VAR_7, u_int32_t *VAR_8, necp_kernel_policy_id *VAR_9)
{
 struct sockaddr_in6 VAR_10 = {};
 struct sockaddr_in6 VAR_11 = {};
 VAR_10.sin6_family = VAR_11.sin6_family = VAR_0;
 VAR_10.sin6_len = VAR_11.sin6_len = sizeof(struct sockaddr_in6);
 VAR_10.sin6_port = VAR_2;
 VAR_11.sin6_port = VAR_3;
 FUNC_0(&VAR_10.sin6_addr, VAR_4, sizeof(VAR_10.sin6_addr));
 FUNC_0(&VAR_11.sin6_addr, VAR_5, sizeof(VAR_11.sin6_addr));

 return (FUNC_1(VAR_1, (struct sockaddr *)&VAR_10, (struct sockaddr *)&VAR_11, VAR_6,
               VAR_7, VAR_8, VAR_9));
}
