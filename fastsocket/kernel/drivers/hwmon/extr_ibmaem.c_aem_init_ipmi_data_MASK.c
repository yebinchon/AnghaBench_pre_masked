
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_5__ {int netfn; } ;
struct TYPE_4__ {scalar_t__* data; int channel; int addr_type; } ;
struct aem_ipmi_data {int interface; int user; TYPE_2__ tx_message; scalar_t__ tx_msgid; TYPE_1__ address; struct device* bmc_device; int read_complete; } ;
struct TYPE_6__ {int ipmi_hndlrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 TYPE_3__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *,struct aem_ipmi_data*,int *) ;

__attribute__((used)) static int FUNC_3(struct aem_ipmi_data *VAR_5, int VAR_6,
         struct device *VAR_7)
{
 int VAR_8;

 FUNC_1(&VAR_5->read_complete);
 VAR_5->bmc_device = VAR_7;


 VAR_5->address.addr_type = VAR_3;
 VAR_5->address.channel = VAR_2;
 VAR_5->address.data[0] = 0;
 VAR_5->interface = VAR_6;


 VAR_5->tx_msgid = 0;
 VAR_5->tx_message.netfn = VAR_0;


 VAR_8 = FUNC_2(VAR_5->interface, &VAR_4.ipmi_hndlrs,
          VAR_5, &VAR_5->user);
 if (VAR_8 < 0) {
  FUNC_0(VAR_7, "Unable to register user with IPMI "
   "interface %d\n", VAR_5->interface);
  return -VAR_1;
 }

 return 0;
}
