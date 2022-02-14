
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ time_out; int retry_count; } ;
struct TYPE_5__ {struct ncp_request_reply* creq; } ;
struct ncp_server {TYPE_3__ m; int timeout_tm; int ncp_sock; int timeout_retries; scalar_t__ timeout_last; TYPE_2__ rcv; } ;
struct ncp_request_reply {size_t tx_totallen; int tx_iovlen; TYPE_1__* tx_ciov; struct ncp_request_header* sign; TYPE_1__* tx_iov; } ;
struct ncp_request_header {int dummy; } ;
struct TYPE_4__ {int iov_len; struct ncp_request_header* iov_base; } ;


 int FUNC_0 (size_t) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct ncp_server*,struct ncp_request_reply*,struct ncp_request_header*) ;
 int FUNC_3 (int ,struct ncp_request_reply*) ;
 size_t FUNC_4 (struct ncp_server*,struct ncp_request_header*,int,int ,struct ncp_request_header*) ;

__attribute__((used)) static void FUNC_5(struct ncp_server *VAR_1, struct ncp_request_reply *VAR_2)
{
 size_t VAR_3;
 struct ncp_request_header* VAR_4;

 VAR_2->tx_ciov = VAR_2->tx_iov + 1;

 VAR_4 = VAR_2->tx_iov[1].iov_base;
 FUNC_2(VAR_1, VAR_2, VAR_4);
 VAR_3 = FUNC_4(VAR_1, VAR_2->tx_iov[1].iov_base + sizeof(struct ncp_request_header) - 1,
   VAR_2->tx_iov[1].iov_len - sizeof(struct ncp_request_header) + 1,
   FUNC_0(VAR_2->tx_totallen), VAR_2->sign);
 if (VAR_3) {
  VAR_2->tx_ciov[1].iov_base = VAR_2->sign;
  VAR_2->tx_ciov[1].iov_len = VAR_3;
  VAR_2->tx_iovlen += 1;
  VAR_2->tx_totallen += VAR_3;
 }
 VAR_1->rcv.creq = VAR_2;
 VAR_1->timeout_last = VAR_1->m.time_out;
 VAR_1->timeout_retries = VAR_1->m.retry_count;
 FUNC_3(VAR_1->ncp_sock, VAR_2);
 FUNC_1(&VAR_1->timeout_tm, VAR_0 + VAR_1->m.time_out);
}
