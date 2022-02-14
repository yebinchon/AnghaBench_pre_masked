
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {size_t mod_type; } ;
struct net_device {int dummy; } ;
struct adapter {struct net_device** port; } ;


 size_t FUNC_0 (char const**) ;
 size_t VAR_0 ;
 int FUNC_1 (struct net_device const*,char*,...) ;
 struct port_info* FUNC_2 (struct net_device const*) ;

void FUNC_3(const struct adapter *VAR_1, int VAR_2)
{
 static const char *VAR_3[] = {
  ((void*)0), "LR", "SR", "ER", "passive DA", "active DA", "LRM"
 };

 const struct net_device *VAR_4 = VAR_1->port[VAR_2];
 const struct port_info *VAR_5 = FUNC_2(VAR_4);

 if (VAR_5->mod_type == VAR_0)
  FUNC_1(VAR_4, "port module unplugged\n");
 else if (VAR_5->mod_type < FUNC_0(VAR_3))
  FUNC_1(VAR_4, "%s module inserted\n", VAR_3[VAR_5->mod_type]);
}
