
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qlcnic_adapter {int flags; } ;
struct net_device {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_4, u32 VAR_5)
{
 struct qlcnic_adapter *VAR_6 = FUNC_0(VAR_4);

 if ((VAR_6->flags & VAR_3 &&
     FUNC_1(VAR_6)))
  return -VAR_0;
 if (VAR_5)
  VAR_4->features |= (VAR_2 | VAR_1);
 else
  VAR_4->features &= ~(VAR_2 | VAR_1);

 return 0;

}
