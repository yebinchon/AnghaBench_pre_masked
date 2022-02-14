
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int queue_mapping; } ;
struct cxgbi_sock {int dummy; } ;



__attribute__((used)) static inline void FUNC_0(struct sk_buff *VAR_0, unsigned int VAR_1,
    const struct cxgbi_sock *VAR_2)
{
 VAR_0->queue_mapping = VAR_1;
}
