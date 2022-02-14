
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int creq_mutex; } ;
struct ncp_server {TYPE_1__ rcv; } ;
struct ncp_request_reply {int dummy; } ;


 int FUNC_0 (struct ncp_server*,struct ncp_request_reply*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct ncp_server *VAR_0, struct ncp_request_reply *VAR_1, int VAR_2)
{
 FUNC_1(&VAR_0->rcv.creq_mutex);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->rcv.creq_mutex);
}
