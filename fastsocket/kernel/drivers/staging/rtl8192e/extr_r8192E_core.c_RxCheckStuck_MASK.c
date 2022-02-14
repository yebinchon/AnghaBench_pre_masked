
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
typedef int RESET_TYPE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static RESET_TYPE FUNC_2(struct net_device *VAR_3)
{

 if(FUNC_0(VAR_3))
 {
  FUNC_1(VAR_0, "RxStuck Condition\n");
  return VAR_2;
 }

 return VAR_1;
}
