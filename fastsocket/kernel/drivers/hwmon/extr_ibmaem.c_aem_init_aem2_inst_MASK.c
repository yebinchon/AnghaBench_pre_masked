
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct aem_ipmi_data {int interface; int bmc_device; } ;
struct aem_find_instance_resp {int module_handle; int minor; int major; } ;
struct TYPE_13__ {int user; int bmc_device; } ;
struct aem_data {int id; TYPE_1__* pdev; TYPE_8__ ipmi; int hwmon_dev; int module_handle; int ver_minor; int ver_major; int list; int update; int * power_period; int lock; } ;
struct TYPE_14__ {int driver; } ;
struct TYPE_12__ {int aem_devices; } ;
struct TYPE_11__ {int * driver; } ;
struct TYPE_10__ {TYPE_4__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct aem_data*) ;
 TYPE_9__ VAR_5 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_8__*,int ,int ) ;
 int FUNC_5 (TYPE_4__*,char*,int ) ;
 int FUNC_6 (int ,char*,int ,int ,int ) ;
 int FUNC_7 (TYPE_4__*,struct aem_data*) ;
 TYPE_5__ VAR_6 ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct aem_data*) ;
 struct aem_data* FUNC_12 (int,int ) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_1__*) ;
 TYPE_1__* FUNC_16 (int ,int ) ;
 int FUNC_17 (TYPE_1__*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_18(struct aem_ipmi_data *VAR_8,
         struct aem_find_instance_resp *VAR_9)
{
 struct aem_data *VAR_10;
 int VAR_11;
 int VAR_12 = -VAR_3;

 VAR_10 = FUNC_12(sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return VAR_12;
 FUNC_14(&VAR_10->lock);


 VAR_10->ver_major = VAR_9->major;
 VAR_10->ver_minor = VAR_9->minor;
 VAR_10->module_handle = VAR_9->module_handle;
 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
  VAR_10->power_period[VAR_11] = VAR_1;


 if (FUNC_2(&VAR_10->id))
  goto id_err;

 VAR_10->pdev = FUNC_16(VAR_2, VAR_10->id);
 if (!VAR_10->pdev)
  goto dev_err;
 VAR_10->pdev->dev.driver = &VAR_5.driver;

 VAR_12 = FUNC_15(VAR_10->pdev);
 if (VAR_12)
  goto ipmi_err;

 FUNC_7(&VAR_10->pdev->dev, VAR_10);


 if (FUNC_4(&VAR_10->ipmi, VAR_8->interface,
          VAR_8->bmc_device))
  goto ipmi_err;


 VAR_10->hwmon_dev = FUNC_8(&VAR_10->pdev->dev);

 if (FUNC_0(VAR_10->hwmon_dev)) {
  FUNC_5(&VAR_10->pdev->dev, "Unable to register hwmon "
   "device for IPMI interface %d\n",
   VAR_8->interface);
  goto hwmon_reg_err;
 }

 VAR_10->update = VAR_7;


 if (FUNC_1(VAR_10))
  goto sensor_err;


 FUNC_13(&VAR_10->list, &VAR_6.aem_devices);

 FUNC_6(VAR_10->ipmi.bmc_device, "Found AEM v%d.%d at 0x%X\n",
   VAR_10->ver_major, VAR_10->ver_minor,
   VAR_10->module_handle);
 return 0;

sensor_err:
 FUNC_9(VAR_10->hwmon_dev);
hwmon_reg_err:
 FUNC_10(VAR_10->ipmi.user);
ipmi_err:
 FUNC_7(&VAR_10->pdev->dev, ((void*)0));
 FUNC_17(VAR_10->pdev);
dev_err:
 FUNC_3(VAR_10->id);
id_err:
 FUNC_11(VAR_10);

 return VAR_12;
}
