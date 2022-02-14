
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_ipmi_msg {int netfn; scalar_t__ data_len; int * data; int cmd; } ;
struct ipmi_system_interface_addr {scalar_t__ lun; int channel; int addr_type; } ;
struct ipmi_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int ,struct ipmi_addr*,int ,struct kernel_ipmi_msg*,int *,int *,int *,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_3(void)
{
 struct kernel_ipmi_msg VAR_9;
 struct ipmi_system_interface_addr VAR_10;
 int VAR_11;





 if (VAR_4 == VAR_3)
  return;

 VAR_10.addr_type = VAR_1;
 VAR_10.channel = VAR_0;
 VAR_10.lun = 0;

 VAR_9.netfn = 0x06;
 VAR_9.cmd = VAR_2;
 VAR_9.data = ((void*)0);
 VAR_9.data_len = 0;
 FUNC_0(2, &VAR_5);
 VAR_11 = FUNC_2(VAR_8,
          (struct ipmi_addr *) &VAR_10,
          0,
          &VAR_9,
          ((void*)0),
          &VAR_7,
          &VAR_6,
          1);
 if (VAR_11)
  FUNC_1(2, &VAR_5);
}
