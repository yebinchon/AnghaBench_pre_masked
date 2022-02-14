
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_server {int dummy; } ;
struct ncp_request_reply {int status; int req; } ;







 int FUNC_0 (int *) ;
 int FUNC_1 (struct ncp_server*,struct ncp_request_reply*,int) ;

__attribute__((used)) static inline void FUNC_2(struct ncp_server *VAR_0, struct ncp_request_reply *VAR_1, int VAR_2)
{

 switch (VAR_1->status) {
  case 130:
  case 131:
   break;
  case 128:
   FUNC_0(&VAR_1->req);
   FUNC_1(VAR_0, VAR_1, VAR_2);
   break;
  case 129:
   VAR_1->status = 132;
   break;
  case 132:
   break;
 }
}
