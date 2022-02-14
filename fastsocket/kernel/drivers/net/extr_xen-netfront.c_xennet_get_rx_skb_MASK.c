
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netfront_info {struct sk_buff** rx_skbs; } ;
typedef int RING_IDX ;


 int FUNC_0 (int ) ;

__attribute__((used)) static struct sk_buff *FUNC_1(struct netfront_info *VAR_0,
      RING_IDX VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);
 struct sk_buff *VAR_3 = VAR_0->rx_skbs[VAR_2];
 VAR_0->rx_skbs[VAR_2] = ((void*)0);
 return VAR_3;
}
