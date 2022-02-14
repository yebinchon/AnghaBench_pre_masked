
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct ethhdr {int dummy; } ;


 int FUNC_0 (struct sk_buff*,struct net_device*,unsigned short,void const*,void const*,unsigned int) ;
 int FUNC_1 (struct net_device*,struct ethhdr*) ;

__attribute__((used)) static int
FUNC_2(struct sk_buff *VAR_0, struct net_device *VAR_1,
   unsigned short VAR_2, const void *VAR_3,
   const void *VAR_4, unsigned VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 >= 0)
  FUNC_1 (VAR_1, (struct ethhdr *)VAR_0->data);

 return VAR_6;
}
