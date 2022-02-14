
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct qeth_card {int dummy; } ;
struct TYPE_2__ {int nr_frags; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int,char*,int,int ) ;
 int FUNC_1 (struct qeth_card*) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;

int FUNC_3(struct qeth_card *VAR_2, void *VAR_3,
       struct sk_buff *VAR_4, int VAR_5)
{
 int VAR_6 = 0;

 if (FUNC_2(VAR_4)->nr_frags > 0)
  VAR_6 = (FUNC_2(VAR_4)->nr_frags + 1);
 if (VAR_6 == 0)
  VAR_6 = 1 + (((((unsigned long) VAR_4->data) %
    VAR_1) + VAR_4->len) >> VAR_0);
 if ((VAR_6 + VAR_5) > FUNC_1(VAR_2)) {
  FUNC_0(2, "Invalid size of IP packet "
   "(Number=%d / Length=%d). Discarded.\n",
   (VAR_6+VAR_5), VAR_4->len);
  return 0;
 }
 return VAR_6;
}
