
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ap_data {int * proc; } ;
struct TYPE_3__ {int * proc; struct ap_data* ap; } ;
typedef TYPE_1__ local_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int *,int *,struct ap_data*) ;

void FUNC_1(local_info_t *VAR_3)
{
 struct ap_data *VAR_4 = VAR_3->ap;

 VAR_4->proc = VAR_3->proc;
 if (VAR_4->proc == ((void*)0))
  return;


 FUNC_0("ap_debug", 0, VAR_4->proc, &VAR_1, VAR_4);



 FUNC_0("ap_control", 0, VAR_4->proc, &VAR_0, VAR_4);
 FUNC_0("ap", 0, VAR_4->proc, &VAR_2, VAR_4);


}
