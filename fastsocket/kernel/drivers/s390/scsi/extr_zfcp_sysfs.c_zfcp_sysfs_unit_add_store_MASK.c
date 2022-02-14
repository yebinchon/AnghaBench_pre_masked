
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct zfcp_unit {TYPE_1__* port; } ;
struct zfcp_port {int status; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int config_mutex; } ;
struct TYPE_3__ {int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct zfcp_unit*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 struct zfcp_port* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*,int ,unsigned long long*) ;
 TYPE_2__ VAR_3 ;
 int FUNC_6 (struct zfcp_unit*,int ,char*,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct zfcp_unit*) ;
 struct zfcp_unit* FUNC_9 (struct zfcp_port*,int ) ;
 int FUNC_10 (struct zfcp_unit*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_4,
      struct device_attribute *VAR_5,
      const char *VAR_6, size_t VAR_7)
{
 struct zfcp_port *VAR_8 = FUNC_2(VAR_4);
 struct zfcp_unit *VAR_9;
 u64 VAR_10;

 FUNC_3(&VAR_3.config_mutex);
 if (FUNC_1(&VAR_8->status) & VAR_2) {
  FUNC_4(&VAR_3.config_mutex);
  return -VAR_0;
 }

 if (FUNC_5(VAR_6, 0, (unsigned long long *) &VAR_10)) {
  FUNC_4(&VAR_3.config_mutex);
  return -VAR_1;
 }

 VAR_9 = FUNC_9(VAR_8, VAR_10);
 FUNC_4(&VAR_3.config_mutex);
 if (FUNC_0(VAR_9))
  return -VAR_1;

 FUNC_6(VAR_9, 0, "syuas_1", ((void*)0));
 FUNC_7(VAR_9->port->adapter);
 FUNC_8(VAR_9);
 FUNC_10(VAR_9);

 return (ssize_t) VAR_7;
}
