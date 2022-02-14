
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct rpc_create_args {int addrsize; char* servername; int flags; int authflavor; int version; int * program; struct sockaddr* address; int protocol; int * net; } ;
struct rpc_clnt {int dummy; } ;
typedef int sin ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 struct rpc_clnt* FUNC_1 (struct rpc_create_args*) ;

__attribute__((used)) static struct rpc_clnt *FUNC_2(void)
{
 struct sockaddr_in VAR_8 = {
  .sin_family = VAR_0,
  .sin_addr.s_addr = FUNC_0(VAR_1),
 };
 struct rpc_create_args VAR_9 = {
  .net = &VAR_6,
  .protocol = VAR_5,
  .address = (struct sockaddr *)&VAR_8,
  .addrsize = sizeof(VAR_8),
  .servername = "rpc.statd",
  .program = &VAR_7,
  .version = VAR_2,
  .authflavor = VAR_3,
  .flags = VAR_4,
 };

 return FUNC_1(&VAR_9);
}
