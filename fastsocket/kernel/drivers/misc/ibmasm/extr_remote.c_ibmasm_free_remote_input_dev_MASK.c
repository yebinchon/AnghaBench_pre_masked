
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int keybd_dev; int mouse_dev; } ;
struct service_processor {TYPE_1__ remote; } ;


 int FUNC_0 (struct service_processor*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct service_processor *VAR_0)
{
 FUNC_0(VAR_0);
 FUNC_1(VAR_0->remote.mouse_dev);
 FUNC_1(VAR_0->remote.keybd_dev);
}
