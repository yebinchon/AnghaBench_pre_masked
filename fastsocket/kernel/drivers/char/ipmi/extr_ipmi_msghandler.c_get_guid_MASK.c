
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* ipmi_smi_t ;
struct TYPE_6__ {int * null_user_handler; TYPE_1__* bmc; int waitq; } ;
struct TYPE_5__ {int guid_set; } ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void
FUNC_2(ipmi_smi_t VAR_1)
{
 int VAR_2;

 VAR_1->bmc->guid_set = 0x2;
 VAR_1->null_user_handler = VAR_0;
 VAR_2 = FUNC_0(VAR_1, 0);
 if (VAR_2)

  VAR_1->bmc->guid_set = 0;
 FUNC_1(VAR_1->waitq, VAR_1->bmc->guid_set != 2);
 VAR_1->null_user_handler = ((void*)0);
}
