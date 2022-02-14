
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct cpl_tx_pkt {int dummy; } ;
struct TYPE_2__ {scalar_t__ gso_size; scalar_t__ nr_frags; } ;


 unsigned int FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (struct sk_buff const*) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_1__* FUNC_3 (struct sk_buff const*) ;

__attribute__((used)) static inline unsigned int FUNC_4(const struct sk_buff *VAR_0)
{
 unsigned int VAR_1;

 if (FUNC_1(VAR_0))
  return FUNC_0(VAR_0->len + sizeof(struct cpl_tx_pkt), 8);

 VAR_1 = FUNC_2(FUNC_3(VAR_0)->nr_frags + 1) + 4;
 if (FUNC_3(VAR_0)->gso_size)
  VAR_1 += 2;
 return VAR_1;
}
