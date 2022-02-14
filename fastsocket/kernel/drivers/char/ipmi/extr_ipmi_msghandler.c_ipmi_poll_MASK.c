
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* ipmi_smi_t ;
struct TYPE_6__ {int send_info; TYPE_1__* handlers; } ;
struct TYPE_5__ {int (* poll ) (int ) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(ipmi_smi_t VAR_0)
{
 if (VAR_0->handlers->poll)
  VAR_0->handlers->poll(VAR_0->send_info);

 FUNC_0(VAR_0);
}
