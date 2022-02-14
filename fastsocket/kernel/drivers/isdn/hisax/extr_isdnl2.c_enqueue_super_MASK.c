
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_6__ {int (* l2l1 ) (struct PStack*,int,struct sk_buff*) ;int flag; } ;
struct TYPE_5__ {TYPE_1__* bcs; } ;
struct PStack {TYPE_3__ l2; TYPE_2__ l1; } ;
struct TYPE_4__ {int tx_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct PStack*,int,struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static inline void
FUNC_2(struct PStack *VAR_3,
       struct sk_buff *VAR_4)
{
 if (FUNC_1(VAR_0, &VAR_3->l2.flag))
  VAR_3->l1.bcs->tx_cnt += VAR_4->len;
 VAR_3->l2.l2l1(VAR_3, VAR_1 | VAR_2, VAR_4);
}
