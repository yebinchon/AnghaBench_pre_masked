
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct kernel_ipmi_msg {int dummy; } ;
struct ipmi_addr {int dummy; } ;
typedef TYPE_1__* ipmi_user_t ;
struct TYPE_4__ {int intf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ipmi_addr*,unsigned char*,unsigned char*) ;
 int FUNC_1 (TYPE_1__*,int ,struct ipmi_addr*,long,struct kernel_ipmi_msg*,void*,int *,int *,int,unsigned char,unsigned char,int,unsigned int) ;

int FUNC_2(ipmi_user_t VAR_1,
    struct ipmi_addr *VAR_2,
    long VAR_3,
    struct kernel_ipmi_msg *VAR_4,
    void *VAR_5,
    int VAR_6,
    int VAR_7,
    unsigned int VAR_8)
{
 unsigned char VAR_9, VAR_10;
 int VAR_11;

 if (!VAR_1)
  return -VAR_0;
 VAR_11 = FUNC_0(VAR_1->intf, VAR_2, &VAR_9, &VAR_10);
 if (VAR_11)
  return VAR_11;
 return FUNC_1(VAR_1,
         VAR_1->intf,
         VAR_2,
         VAR_3,
         VAR_4,
         VAR_5,
         ((void*)0), ((void*)0),
         VAR_6,
         VAR_9,
         VAR_10,
         VAR_7,
         VAR_8);
}
