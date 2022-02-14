
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int16_t ;
struct ncp_server {scalar_t__ packet; } ;
struct ncp_request_reply {unsigned char* reply_buf; int datalen; int tx_iovlen; int tx_totallen; scalar_t__ status; int result; int wq; int tx_type; TYPE_1__* tx_iov; } ;
struct TYPE_2__ {int iov_len; scalar_t__ iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ncp_server*,struct ncp_request_reply*,int) ;
 int FUNC_1 (struct ncp_server*,struct ncp_request_reply*) ;
 struct ncp_request_reply* FUNC_2 () ;
 int FUNC_3 (struct ncp_request_reply*) ;
 scalar_t__ FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct ncp_server *VAR_3, int VAR_4,
  unsigned char* VAR_5, int VAR_6)
{
 int VAR_7;
 struct ncp_request_reply *VAR_8;

 VAR_8 = FUNC_2();
 if (!VAR_8)
  return -VAR_1;

 VAR_8->reply_buf = VAR_5;
 VAR_8->datalen = VAR_6;
 VAR_8->tx_iov[1].iov_base = VAR_3->packet;
 VAR_8->tx_iov[1].iov_len = VAR_4;
 VAR_8->tx_iovlen = 1;
 VAR_8->tx_totallen = VAR_4;
 VAR_8->tx_type = *(u_int16_t*)VAR_3->packet;

 VAR_7 = FUNC_1(VAR_3, VAR_8);
 if (VAR_7 < 0)
  goto out;

 if (FUNC_4(VAR_8->wq, VAR_8->status == VAR_2)) {
  FUNC_0(VAR_3, VAR_8, -VAR_0);
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_7 = VAR_8->result;

out:
 FUNC_3(VAR_8);

 return VAR_7;
}
