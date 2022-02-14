
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int protocol; } ;
struct net_device {int hard_header_len; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_0,
          struct net_device *VAR_1, u16 VAR_2,
          const void *VAR_3, const void *VAR_4,
          unsigned VAR_5)
{
 VAR_0->protocol = FUNC_0(VAR_2);

 return VAR_1->hard_header_len;
}
