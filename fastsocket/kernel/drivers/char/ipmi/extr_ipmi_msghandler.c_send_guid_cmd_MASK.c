
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct kernel_ipmi_msg {scalar_t__ data_len; int * data; int cmd; int netfn; } ;
struct ipmi_system_interface_addr {scalar_t__ lun; int channel; int addr_type; } ;
struct ipmi_addr {int dummy; } ;
typedef TYPE_2__* ipmi_smi_t ;
struct TYPE_7__ {TYPE_1__* channels; } ;
struct TYPE_6__ {int lun; int address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_2__*,struct ipmi_addr*,int ,struct kernel_ipmi_msg*,TYPE_2__*,int *,int *,int ,int ,int ,int,int ) ;

__attribute__((used)) static int
FUNC_1(ipmi_smi_t VAR_4, int VAR_5)
{
 struct kernel_ipmi_msg VAR_6;
 struct ipmi_system_interface_addr VAR_7;

 VAR_7.addr_type = VAR_3;
 VAR_7.channel = VAR_0;
 VAR_7.lun = 0;

 VAR_6.netfn = VAR_2;
 VAR_6.cmd = VAR_1;
 VAR_6.data = ((void*)0);
 VAR_6.data_len = 0;
 return FUNC_0(((void*)0),
         VAR_4,
         (struct ipmi_addr *) &VAR_7,
         0,
         &VAR_6,
         VAR_4,
         ((void*)0),
         ((void*)0),
         0,
         VAR_4->channels[0].address,
         VAR_4->channels[0].lun,
         -1, 0);
}
