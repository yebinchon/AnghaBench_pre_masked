
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ tail; scalar_t__ transport_header; int len; } ;
struct TYPE_2__ {unsigned int nr_frags; } ;


 unsigned int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct sk_buff const*) ;
 unsigned int FUNC_2 (unsigned int) ;
 TYPE_1__* FUNC_3 (struct sk_buff const*) ;
 unsigned int FUNC_4 (struct sk_buff const*) ;

__attribute__((used)) static inline unsigned int FUNC_5(const struct sk_buff *VAR_0)
{
 unsigned int VAR_1, VAR_2;

 if (FUNC_1(VAR_0))
  return FUNC_0(VAR_0->len, 8);

 VAR_1 = FUNC_4(VAR_0) / 8U;
 VAR_2 = FUNC_3(VAR_0)->nr_frags;
 if (VAR_0->tail != VAR_0->transport_header)
  VAR_2++;
 return VAR_1 + FUNC_2(VAR_2);
}
