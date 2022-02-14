
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmi_smi_msg {int * user_data; int done; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct ipmi_smi_msg* FUNC_1 (int,int ) ;
 int VAR_2 ;

struct ipmi_smi_msg *FUNC_2(void)
{
 struct ipmi_smi_msg *VAR_3;
 VAR_3 = FUNC_1(sizeof(struct ipmi_smi_msg), VAR_0);
 if (VAR_3) {
  VAR_3->done = VAR_1;
  VAR_3->user_data = ((void*)0);
  FUNC_0(&VAR_2);
 }
 return VAR_3;
}
