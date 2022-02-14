
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {struct ncp_request_reply* creq; } ;
struct ncp_server {int timeout_last; int timeout_tm; int ncp_sock; int timeout_retries; TYPE_2__ m; TYPE_1__ rcv; } ;
struct ncp_request_reply {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ncp_server*,struct ncp_request_reply*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ,struct ncp_request_reply*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ncp_server *VAR_4)
{

 if (!FUNC_3(&VAR_4->timeout_tm)) {
  struct ncp_request_reply* VAR_5;

  VAR_5 = VAR_4->rcv.creq;
  if (VAR_5) {
   int VAR_6;

   if (VAR_4->m.flags & VAR_2) {
    if (VAR_4->timeout_retries-- == 0) {
     FUNC_0(VAR_4, VAR_5, -VAR_0);
     return;
    }
   }

   FUNC_2(VAR_4->ncp_sock, VAR_5);
   VAR_6 = VAR_4->timeout_last << 1;
   if (VAR_6 > VAR_1) {
    VAR_6 = VAR_1;
   }
   VAR_4->timeout_last = VAR_6;
   FUNC_1(&VAR_4->timeout_tm, VAR_3 + VAR_6);
  }
 }
}
