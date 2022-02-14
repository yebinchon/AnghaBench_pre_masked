
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_port {int lpar_map; } ;
struct sk_buff {unsigned char* data; } ;
struct net_device {int dummy; } ;
typedef int HvLpIndexMap ;
typedef int HvLpIndex ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 struct veth_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*,int,struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 unsigned char *VAR_3 = VAR_1->data;
 struct veth_port *VAR_4 = FUNC_1(VAR_2);
 HvLpIndexMap VAR_5;

 if (! (VAR_3[0] & 0x01)) {

  HvLpIndex VAR_6 = VAR_3[5];

  if ( ! ((1 << VAR_6) & VAR_4->lpar_map) ) {
   FUNC_0(VAR_1);
   return VAR_0;
  }

  VAR_5 = 1 << VAR_6;
 } else {
  VAR_5 = VAR_4->lpar_map;
 }

 FUNC_2(VAR_1, VAR_5, VAR_2);

 FUNC_0(VAR_1);

 return VAR_0;
}
