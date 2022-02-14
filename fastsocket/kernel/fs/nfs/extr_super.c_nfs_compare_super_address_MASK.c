
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_port; int sin6_addr; } ;
struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_2__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct nfs_server {TYPE_1__* nfs_client; } ;
struct TYPE_3__ {int cl_addr; } ;




 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(struct nfs_server *VAR_0,
         struct nfs_server *VAR_1)
{
 struct sockaddr *VAR_2, *VAR_3;

 VAR_2 = (struct sockaddr *)&VAR_0->nfs_client->cl_addr;
 VAR_3 = (struct sockaddr *)&VAR_1->nfs_client->cl_addr;

 if (VAR_2->sa_family != VAR_3->sa_family)
  return 0;

 switch (VAR_2->sa_family) {
 case 129: {
  struct sockaddr_in *VAR_4 = (struct sockaddr_in *)VAR_2;
  struct sockaddr_in *VAR_5 = (struct sockaddr_in *)VAR_3;
  if (VAR_4->sin_addr.s_addr != VAR_5->sin_addr.s_addr)
   return 0;
  if (VAR_4->sin_port != VAR_5->sin_port)
   return 0;
  break;
 }
 case 128: {
  struct sockaddr_in6 *VAR_6 = (struct sockaddr_in6 *)VAR_2;
  struct sockaddr_in6 *VAR_7 = (struct sockaddr_in6 *)VAR_3;
  if (!FUNC_0(&VAR_6->sin6_addr, &VAR_7->sin6_addr))
   return 0;
  if (VAR_6->sin6_port != VAR_7->sin6_port)
   return 0;
  break;
 }
 default:
  return 0;
 }

 return 1;
}
