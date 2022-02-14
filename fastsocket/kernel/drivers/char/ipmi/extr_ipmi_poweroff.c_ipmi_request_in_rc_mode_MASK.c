
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kernel_ipmi_msg {int dummy; } ;
struct ipmi_addr {int dummy; } ;
typedef int ipmi_user_t ;
struct TYPE_4__ {int* data; } ;
struct TYPE_5__ {TYPE_1__ msg; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 () ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct ipmi_addr*,int ,struct kernel_ipmi_msg*,int *,int *,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_5(ipmi_user_t VAR_3,
       struct ipmi_addr *VAR_4,
       struct kernel_ipmi_msg *VAR_5)
{
 int VAR_6;

 FUNC_1(&VAR_0, 2);
 VAR_6 = FUNC_4(VAR_3, VAR_4, 0, VAR_5, ((void*)0),
          &VAR_2, &VAR_1, 0);
 if (VAR_6) {
  FUNC_1(&VAR_0, 0);
  return VAR_6;
 }




 while (FUNC_0(&VAR_0) > 0) {
  FUNC_3(VAR_3);
  FUNC_2();
 }

 return VAR_1.msg.data[0];
}
