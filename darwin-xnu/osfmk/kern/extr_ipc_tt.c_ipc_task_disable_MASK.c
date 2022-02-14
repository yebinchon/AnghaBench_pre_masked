
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef scalar_t__ ipc_port_t ;
struct TYPE_5__ {scalar_t__ itk_self; scalar_t__ itk_nself; scalar_t__ itk_resume; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(
 task_t VAR_3)
{
 ipc_port_t VAR_4;
 ipc_port_t VAR_5;
 ipc_port_t VAR_6;

 FUNC_1(VAR_3);
 VAR_4 = VAR_3->itk_self;
 if (VAR_4 != VAR_2)
  FUNC_0(VAR_4, VAR_1, VAR_0);
 VAR_5 = VAR_3->itk_nself;
 if (VAR_5 != VAR_2)
  FUNC_0(VAR_5, VAR_1, VAR_0);

 VAR_6 = VAR_3->itk_resume;
 if (VAR_6 != VAR_2) {
  FUNC_0(VAR_6, VAR_1, VAR_0);
 }
 FUNC_2(VAR_3);
}
