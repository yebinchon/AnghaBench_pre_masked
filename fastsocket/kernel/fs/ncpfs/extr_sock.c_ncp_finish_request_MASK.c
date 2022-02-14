
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncp_server {int rxbuf; } ;
struct ncp_request_reply {int result; scalar_t__ status; int wq; int datalen; int reply_buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct ncp_request_reply*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct ncp_server *VAR_2, struct ncp_request_reply *VAR_3, int VAR_4)
{
 VAR_3->result = VAR_4;
 if (VAR_3->status != VAR_0)
  FUNC_0(VAR_3->reply_buf, VAR_2->rxbuf, VAR_3->datalen);
 VAR_3->status = VAR_1;
 FUNC_2(&VAR_3->wq);
 FUNC_1(VAR_3);
}
