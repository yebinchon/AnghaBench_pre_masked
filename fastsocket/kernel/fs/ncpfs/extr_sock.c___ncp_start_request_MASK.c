
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ncp_server {TYPE_2__* ncp_sock; int txbuf; } ;
struct ncp_request_reply {TYPE_1__* tx_iov; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {int iov_base; int iov_len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct ncp_server*,struct ncp_request_reply*) ;
 int FUNC_2 (struct ncp_server*,struct ncp_request_reply*) ;

__attribute__((used)) static inline void FUNC_3(struct ncp_server *VAR_1, struct ncp_request_reply *VAR_2)
{


 FUNC_0(VAR_1->txbuf, VAR_2->tx_iov[1].iov_base, VAR_2->tx_iov[1].iov_len);
 VAR_2->tx_iov[1].iov_base = VAR_1->txbuf;

 if (VAR_1->ncp_sock->type == VAR_0)
  FUNC_2(VAR_1, VAR_2);
 else
  FUNC_1(VAR_1, VAR_2);
}
