
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct zfcp_port {int list; int status; int refcount; } ;
struct zfcp_adapter {int status; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int config_mutex; int config_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 struct zfcp_adapter* FUNC_3 (struct device*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (char const*,int ,unsigned long long*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_1__ VAR_5 ;
 int FUNC_10 (struct zfcp_port*,int ,char*,int *) ;
 int FUNC_11 (struct zfcp_adapter*) ;
 struct zfcp_port* FUNC_12 (struct zfcp_adapter*,int ) ;
 int FUNC_13 (struct zfcp_port*) ;
 int FUNC_14 (struct zfcp_port*) ;
 int FUNC_15 (struct zfcp_port*) ;

__attribute__((used)) static ssize_t FUNC_16(struct device *VAR_6,
         struct device_attribute *VAR_7,
         const char *VAR_8, size_t VAR_9)
{
 struct zfcp_adapter *VAR_10 = FUNC_3(VAR_6);
 struct zfcp_port *VAR_11;
 u64 VAR_12;
 int VAR_13 = 0;
 FUNC_0(VAR_4);

 FUNC_5(&VAR_5.config_mutex);
 if (FUNC_1(&VAR_10->status) & VAR_3) {
  VAR_13 = -VAR_0;
  goto out;
 }

 if (FUNC_7(VAR_8, 0, (unsigned long long *) &VAR_12)) {
  VAR_13 = -VAR_1;
  goto out;
 }

 FUNC_8(&VAR_5.config_lock);
 VAR_11 = FUNC_12(VAR_10, VAR_12);
 if (VAR_11 && (FUNC_1(&VAR_11->refcount) == 0)) {
  FUNC_14(VAR_11);
  FUNC_2(VAR_3, &VAR_11->status);
  FUNC_4(&VAR_11->list, &VAR_4);
 } else
  VAR_11 = ((void*)0);
 FUNC_9(&VAR_5.config_lock);

 if (!VAR_11) {
  VAR_13 = -VAR_2;
  goto out;
 }

 FUNC_10(VAR_11, 0, "syprs_1", ((void*)0));
 FUNC_11(VAR_10);
 FUNC_15(VAR_11);
 FUNC_13(VAR_11);
 out:
 FUNC_6(&VAR_5.config_mutex);
 return VAR_13 ? VAR_13 : (ssize_t) VAR_9;
}
