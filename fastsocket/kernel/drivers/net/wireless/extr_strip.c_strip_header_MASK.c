
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strip {int true_dev_addr; } ;
struct sk_buff {int dummy; } ;
struct net_device {int hard_header_len; } ;
struct TYPE_2__ {int dst_addr; int protocol; int src_addr; } ;
typedef TYPE_1__ STRIP_Header ;
typedef int MetricomAddress ;


 int FUNC_0 (unsigned short) ;
 struct strip* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_0, struct net_device *VAR_1,
   unsigned short VAR_2, const void *VAR_3,
   const void *VAR_4, unsigned VAR_5)
{
 struct strip *VAR_6 = FUNC_1(VAR_1);
 STRIP_Header *VAR_7 = (STRIP_Header *) FUNC_2(VAR_0, sizeof(STRIP_Header));




 VAR_7->src_addr = VAR_6->true_dev_addr;
 VAR_7->protocol = FUNC_0(VAR_2);



 if (!VAR_3)
  return (-VAR_1->hard_header_len);

 VAR_7->dst_addr = *(MetricomAddress *) VAR_3;
 return (VAR_1->hard_header_len);
}
