
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* ipmi_smi_t ;
struct TYPE_5__ {int maintenance_mode_enable; int send_info; TYPE_1__* handlers; } ;
struct TYPE_4__ {int (* set_maintenance_mode ) (int ,int ) ;} ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(ipmi_smi_t VAR_0)
{
 if (VAR_0->handlers->set_maintenance_mode)
  VAR_0->handlers->set_maintenance_mode(
   VAR_0->send_info, VAR_0->maintenance_mode_enable);
}
