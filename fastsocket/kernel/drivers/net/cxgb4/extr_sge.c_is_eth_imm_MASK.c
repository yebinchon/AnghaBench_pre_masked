
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct cpl_tx_pkt {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const struct sk_buff *VAR_1)
{
 return VAR_1->len <= VAR_0 - sizeof(struct cpl_tx_pkt);
}
