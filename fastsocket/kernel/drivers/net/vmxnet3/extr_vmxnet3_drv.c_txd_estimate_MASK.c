
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skb_frag_struct {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int nr_frags; struct skb_frag_struct* frags; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct skb_frag_struct const*) ;
 int FUNC_2 (struct sk_buff const*) ;
 TYPE_1__* FUNC_3 (struct sk_buff const*) ;

__attribute__((used)) static int FUNC_4(const struct sk_buff *VAR_0)
{
 int VAR_1 = FUNC_0(FUNC_2(VAR_0)) + 1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_3(VAR_0)->nr_frags; VAR_2++) {
  const struct skb_frag_struct *VAR_3 = &FUNC_3(VAR_0)->frags[VAR_2];

  VAR_1 += FUNC_0(FUNC_1(VAR_3));
 }
 return VAR_1;
}
