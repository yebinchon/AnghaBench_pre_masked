
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ehea_port {TYPE_1__* netdev; } ;
struct ehea_adapter {struct ehea_port** port; } ;
struct device_node {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ehea_adapter* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct ehea_adapter*) ;
 int FUNC_2 (char*) ;
 struct device_node* FUNC_3 (struct ehea_adapter*,int ) ;
 struct ehea_port* FUNC_4 (struct ehea_adapter*,int ) ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (struct ehea_adapter*) ;
 struct ehea_port* FUNC_7 (struct ehea_adapter*,int ,struct device_node*) ;
 int FUNC_8 (struct device_node*) ;
 int FUNC_9 (char const*,char*,int *) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_3,
          struct device_attribute *VAR_4,
          const char *VAR_5, size_t VAR_6)
{
 struct ehea_adapter *VAR_7 = FUNC_0(VAR_3);
 struct ehea_port *VAR_8;
 struct device_node *VAR_9 = ((void*)0);
 int VAR_10;

 u32 VAR_11;

 FUNC_9(VAR_5, "%d", &VAR_11);

 VAR_8 = FUNC_4(VAR_7, VAR_11);

 if (VAR_8) {
  FUNC_5("adding port with logical port id=%d failed. port "
     "already configured as %s.", VAR_11,
     VAR_8->netdev->name);
  return -VAR_1;
 }

 VAR_9 = FUNC_3(VAR_7, VAR_11);

 if (!VAR_9) {
  FUNC_5("no logical port with id %d found", VAR_11);
  return -VAR_1;
 }

 if (FUNC_1(VAR_7)) {
  FUNC_2("creating MR failed");
  return -VAR_2;
 }

 VAR_8 = FUNC_7(VAR_7, VAR_11, VAR_9);

 FUNC_8(VAR_9);

 if (VAR_8) {
  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
   if (!VAR_7->port[VAR_10]) {
    VAR_7->port[VAR_10] = VAR_8;
    break;
   }

  FUNC_5("added %s (logical port id=%d)", VAR_8->netdev->name,
     VAR_11);
 } else {
  FUNC_6(VAR_7);
  return -VAR_2;
 }

 return (ssize_t) VAR_6;
}
