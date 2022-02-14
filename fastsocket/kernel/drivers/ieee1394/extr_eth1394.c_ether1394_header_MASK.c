
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int flags; int hard_header_len; int addr_len; } ;
struct eth1394hdr {int h_dest; int h_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned short) ;
 int FUNC_1 (int ,void const*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_3, struct net_device *VAR_4,
       unsigned short VAR_5, const void *VAR_6,
       const void *VAR_7, unsigned VAR_8)
{
 struct eth1394hdr *VAR_9 =
   (struct eth1394hdr *)FUNC_3(VAR_3, VAR_0);

 VAR_9->h_proto = FUNC_0(VAR_5);

 if (VAR_4->flags & (VAR_1 | VAR_2)) {
  FUNC_2(VAR_9->h_dest, 0, VAR_4->addr_len);
  return VAR_4->hard_header_len;
 }

 if (VAR_6) {
  FUNC_1(VAR_9->h_dest, VAR_6, VAR_4->addr_len);
  return VAR_4->hard_header_len;
 }

 return -VAR_4->hard_header_len;
}
