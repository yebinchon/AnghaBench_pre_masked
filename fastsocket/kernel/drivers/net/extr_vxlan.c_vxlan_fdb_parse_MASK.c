
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int remote_vni; } ;
struct vxlan_dev {TYPE_1__ default_dst; int dst_port; int dev; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 struct net_device* FUNC_0 (struct net*,int ) ;
 struct net* FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr*) ;

__attribute__((used)) static int FUNC_8(struct nlattr *VAR_8[], struct vxlan_dev *VAR_9,
      __be32 *VAR_10, __be16 *VAR_11, u32 *VAR_12, u32 *VAR_13)
{
 struct net *VAR_14 = FUNC_1(VAR_9->dev);

 if (VAR_8[VAR_4]) {
  if (FUNC_7(VAR_8[VAR_4]) != sizeof(__be32))
   return -VAR_1;

  *VAR_10 = FUNC_5(VAR_8[VAR_4]);
 } else {
  *VAR_10 = FUNC_3(VAR_3);
 }

 if (VAR_8[VAR_6]) {
  if (FUNC_7(VAR_8[VAR_6]) != sizeof(__be16))
   return -VAR_2;
  *VAR_11 = FUNC_4(VAR_8[VAR_6]);
 } else {
  *VAR_11 = VAR_9->dst_port;
 }

 if (VAR_8[VAR_7]) {
  if (FUNC_7(VAR_8[VAR_7]) != sizeof(u32))
   return -VAR_2;
  *VAR_12 = FUNC_6(VAR_8[VAR_7]);
 } else {
  *VAR_12 = VAR_9->default_dst.remote_vni;
 }

 if (VAR_8[VAR_5]) {
  struct net_device *VAR_15;

  if (FUNC_7(VAR_8[VAR_5]) != sizeof(u32))
   return -VAR_2;
  *VAR_13 = FUNC_6(VAR_8[VAR_5]);
  VAR_15 = FUNC_0(VAR_14, *VAR_13);
  if (!VAR_15)
   return -VAR_0;
  FUNC_2(VAR_15);
 } else {
  *VAR_13 = 0;
 }

 return 0;
}
