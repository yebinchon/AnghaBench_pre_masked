
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct pktq {int hi_prec; int len; TYPE_1__* q; } ;
struct TYPE_2__ {struct sk_buff_head skblist; } ;


 scalar_t__ FUNC_0 (struct pktq*) ;
 scalar_t__ FUNC_1 (struct pktq*,int) ;
 int FUNC_2 (struct sk_buff_head*,struct sk_buff*) ;

struct sk_buff *FUNC_3(struct pktq *VAR_0, int VAR_1,
        struct sk_buff *VAR_2)
{
 struct sk_buff_head *VAR_3;

 if (FUNC_0(VAR_0) || FUNC_1(VAR_0, VAR_1))
  return ((void*)0);

 VAR_3 = &VAR_0->q[VAR_1].skblist;
 FUNC_2(VAR_3, VAR_2);
 VAR_0->len++;

 if (VAR_0->hi_prec < VAR_1)
  VAR_0->hi_prec = (u8) VAR_1;

 return VAR_2;
}
