
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct gfar_private {scalar_t__ rx_buffer_size; int rx_recycle; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int *) ;
 struct sk_buff* FUNC_1 (struct net_device*,scalar_t__) ;
 struct gfar_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*,unsigned int) ;

struct sk_buff * FUNC_4(struct net_device *VAR_1)
{
 unsigned int VAR_2;
 struct gfar_private *VAR_3 = FUNC_2(VAR_1);
 struct sk_buff *VAR_4 = ((void*)0);

 VAR_4 = FUNC_0(&VAR_3->rx_recycle);
 if (!VAR_4)
  VAR_4 = FUNC_1(VAR_1,
    VAR_3->rx_buffer_size + VAR_0);

 if (!VAR_4)
  return ((void*)0);

 VAR_2 = VAR_0 -
  (((unsigned long) VAR_4->data) & (VAR_0 - 1));




 FUNC_3(VAR_4, VAR_2);

 return VAR_4;
}
