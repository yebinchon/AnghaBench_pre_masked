
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; int dev_addr; int addr_assign_type; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int VAR_1 ;
 int FUNC_3 (struct bnx2x*,int ) ;
 int FUNC_4 (struct bnx2x*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 struct bnx2x* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;

int FUNC_9(struct net_device *VAR_2, void *VAR_3)
{
 struct sockaddr *VAR_4 = VAR_3;
 struct bnx2x *VAR_5 = FUNC_7(VAR_2);
 int VAR_6 = 0;

 if (!FUNC_3(VAR_5, VAR_4->sa_data)) {
  FUNC_0("Requested MAC address is not valid\n");
  return -VAR_0;
 }

 if ((FUNC_2(VAR_5) || FUNC_1(VAR_5)) &&
     !FUNC_5(VAR_4->sa_data)) {
  FUNC_0("Can't configure non-zero address on iSCSI or FCoE functions in MF-SD mode\n");
  return -VAR_0;
 }

 if (FUNC_8(VAR_2)) {
  VAR_6 = FUNC_4(VAR_5, 0);
  if (VAR_6)
   return VAR_6;
 }

 VAR_2->addr_assign_type &= ~VAR_1;
 FUNC_6(VAR_2->dev_addr, VAR_4->sa_data, VAR_2->addr_len);

 if (FUNC_8(VAR_2))
  VAR_6 = FUNC_4(VAR_5, 1);

 return VAR_6;
}
