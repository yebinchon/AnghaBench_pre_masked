
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s2io_nic {int device_type; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 struct s2io_nic* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_4, int VAR_5)
{
 struct s2io_nic *VAR_6 = FUNC_0(VAR_4);

 switch (VAR_5) {
 case 130:
  return VAR_1;
 case 131:
  switch (VAR_6->device_type) {
  case 128:
   return VAR_3;
  case 129:
   return VAR_2;
  default:
   return 0;
  }
 default:
  return -VAR_0;
 }
}
