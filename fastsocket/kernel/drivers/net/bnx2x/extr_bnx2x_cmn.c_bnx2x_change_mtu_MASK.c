
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct bnx2x {scalar_t__ recovery_state; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct net_device*) ;
 struct bnx2x* FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_6, int VAR_7)
{
 struct bnx2x *VAR_8 = FUNC_2(VAR_6);

 if (VAR_8->recovery_state != VAR_0) {
  FUNC_0("Can't perform change MTU during parity recovery\n");
  return -VAR_1;
 }

 if ((VAR_7 > VAR_4) ||
     ((VAR_7 + VAR_3) < VAR_5)) {
  FUNC_0("Can't support requested MTU size\n");
  return -VAR_2;
 }





 VAR_6->mtu = VAR_7;

 return FUNC_1(VAR_6);
}
