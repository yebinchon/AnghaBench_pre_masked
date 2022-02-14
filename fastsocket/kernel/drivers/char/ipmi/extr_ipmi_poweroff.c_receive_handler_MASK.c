
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_recv_msg {struct completion* user_msg_data; } ;
struct completion {int dummy; } ;


 int FUNC_0 (struct completion*) ;

__attribute__((used)) static void FUNC_1(struct ipmi_recv_msg *VAR_0, void *VAR_1)
{
 struct completion *VAR_2 = VAR_0->user_msg_data;

 if (VAR_2)
  FUNC_0(VAR_2);
}
