
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ehea_port {TYPE_1__* netdev; } ;
struct ehea_adapter {struct ehea_port** port; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ehea_adapter* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ) ;
 struct ehea_port* FUNC_2 (struct ehea_adapter*,int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct ehea_adapter*) ;
 int FUNC_5 (struct ehea_port*) ;
 int FUNC_6 (char const*,char*,int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
    struct device_attribute *VAR_3,
    const char *VAR_4, size_t VAR_5)
{
 struct ehea_adapter *VAR_6 = FUNC_0(VAR_2);
 struct ehea_port *VAR_7;
 int VAR_8;
 u32 VAR_9;

 FUNC_6(VAR_4, "%d", &VAR_9);

 VAR_7 = FUNC_2(VAR_6, VAR_9);

 if (VAR_7) {
  FUNC_3("removed %s (logical port id=%d)", VAR_7->netdev->name,
     VAR_9);

  FUNC_5(VAR_7);

  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
   if (VAR_6->port[VAR_8] == VAR_7) {
    VAR_6->port[VAR_8] = ((void*)0);
    break;
   }
 } else {
  FUNC_1("removing port with logical port id=%d failed. port "
      "not configured.", VAR_9);
  return -VAR_1;
 }

 FUNC_4(VAR_6);

 return (ssize_t) VAR_5;
}
