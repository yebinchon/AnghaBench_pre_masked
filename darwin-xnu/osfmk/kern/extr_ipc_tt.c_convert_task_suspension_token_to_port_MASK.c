
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* task_suspension_token_t ;
typedef scalar_t__ ipc_port_t ;
typedef int ipc_kobject_t ;
struct TYPE_6__ {scalar_t__ itk_resume; scalar_t__ active; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

ipc_port_t
FUNC_9(
 task_suspension_token_t VAR_2)
{
 ipc_port_t VAR_3;

 FUNC_6(VAR_2);
 if (VAR_2->active) {
  if (VAR_2->itk_resume == VAR_1) {
   VAR_2->itk_resume = FUNC_3();
   if (!FUNC_0(VAR_2->itk_resume)) {
    FUNC_5("failed to create resume port");
   }

   FUNC_2(VAR_2->itk_resume, (ipc_kobject_t) VAR_2, VAR_0);
  }






  VAR_3 = FUNC_4(VAR_2->itk_resume);
  FUNC_1(FUNC_0(VAR_3));
 } else {
  VAR_3 = VAR_1;
 }

 FUNC_8(VAR_2);
 FUNC_7(VAR_2);

 return VAR_3;
}
