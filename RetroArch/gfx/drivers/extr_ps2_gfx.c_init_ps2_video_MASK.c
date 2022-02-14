
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* coreTexture; int interface_version; int interface_type; } ;
struct TYPE_5__ {void* coreTexture; TYPE_1__ iface; void* menuTexture; int gsGlobal; } ;
typedef TYPE_2__ ps2_video_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 void* FUNC_1 () ;

__attribute__((used)) static void FUNC_2(ps2_video_t *VAR_2)
{
   VAR_2->gsGlobal = FUNC_0();
   VAR_2->menuTexture = FUNC_1();
   VAR_2->coreTexture = FUNC_1();


   VAR_2->iface.interface_type = VAR_0;
   VAR_2->iface.interface_version = VAR_1;
   VAR_2->iface.coreTexture = VAR_2->coreTexture;
}
