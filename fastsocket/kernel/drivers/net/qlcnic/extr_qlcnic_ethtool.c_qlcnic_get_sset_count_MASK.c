
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int flags; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4, int VAR_5)
{
 int VAR_6;

 struct qlcnic_adapter *VAR_7 = FUNC_0(VAR_4);
 switch (VAR_5) {
 case 128:
  return VAR_3;
 case 129:
  VAR_6 = FUNC_3(VAR_7) + VAR_2;
  if ((VAR_7->flags & VAR_1) ||
      FUNC_2(VAR_7))
   return VAR_6;
  return FUNC_1();
 default:
  return -VAR_0;
 }
}
