
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_ipmi_msg {int netfn; unsigned char cmd; scalar_t__ data_len; int data; } ;
struct ipmi_smi_msg {int* data; scalar_t__ data_size; long msgid; } ;
struct ipmi_lan_addr {int channel; int session_handle; int remote_SWID; int lun; int local_SWID; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int*,int) ;
 int FUNC_1 (unsigned char*,int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct ipmi_smi_msg *VAR_2,
      struct kernel_ipmi_msg *VAR_3,
      struct ipmi_lan_addr *VAR_4,
      long VAR_5,
      unsigned char VAR_6,
      unsigned char VAR_7)
{

 VAR_2->data[0] = (VAR_0 << 2);
 VAR_2->data[1] = VAR_1;
 VAR_2->data[2] = VAR_4->channel;
 VAR_2->data[3] = VAR_4->session_handle;
 VAR_2->data[4] = VAR_4->remote_SWID;
 VAR_2->data[5] = (VAR_3->netfn << 2) | (VAR_4->lun & 0x3);
 VAR_2->data[6] = FUNC_0(&(VAR_2->data[4]), 2);
 VAR_2->data[7] = VAR_4->local_SWID;
 VAR_2->data[8] = (VAR_6 << 2) | VAR_7;
 VAR_2->data[9] = VAR_3->cmd;


 if (VAR_3->data_len > 0)
  FUNC_1(&(VAR_2->data[10]), VAR_3->data,
         VAR_3->data_len);
 VAR_2->data_size = VAR_3->data_len + 10;


 VAR_2->data[VAR_2->data_size]
  = FUNC_0(&(VAR_2->data[7]),
    VAR_2->data_size-7);





 VAR_2->data_size += 1;

 VAR_2->msgid = VAR_5;
}
