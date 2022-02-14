
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct ppp_channel {struct channel* ppp; } ;
struct TYPE_5__ {scalar_t__ qlen; } ;
struct TYPE_4__ {int rwait; TYPE_2__ rq; } ;
struct channel {int upl; int ppp; TYPE_1__ file; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,struct sk_buff*,struct channel*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct sk_buff* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,struct sk_buff*) ;
 int FUNC_7 (int *) ;

void
FUNC_8(struct ppp_channel *VAR_2, struct sk_buff *VAR_3)
{
 struct channel *VAR_4 = VAR_2->ppp;
 int VAR_5;

 if (!VAR_4 || VAR_3->len == 0) {
  FUNC_1(VAR_3);
  return;
 }

 VAR_5 = FUNC_0(VAR_3);
 FUNC_3(&VAR_4->upl);
 if (!VAR_4->ppp || VAR_5 >= 0xc000 || VAR_5 == VAR_0) {

  FUNC_6(&VAR_4->file.rq, VAR_3);

  while (VAR_4->file.rq.qlen > VAR_1
         && (VAR_3 = FUNC_5(&VAR_4->file.rq)))
   FUNC_1(VAR_3);
  FUNC_7(&VAR_4->file.rwait);
 } else {
  FUNC_2(VAR_4->ppp, VAR_3, VAR_4);
 }
 FUNC_4(&VAR_4->upl);
}
