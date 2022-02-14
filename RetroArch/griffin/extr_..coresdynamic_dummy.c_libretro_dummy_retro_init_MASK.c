
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int menu_rgui_aspect_ratio; } ;
struct TYPE_5__ {int menu_driver; } ;
struct TYPE_7__ {TYPE_2__ uints; TYPE_1__ arrays; } ;
typedef TYPE_3__ settings_t ;






 scalar_t__ FUNC_0 (int,int) ;
 TYPE_3__* FUNC_1 () ;
 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,char*) ;

void FUNC_3(void)
{



   unsigned VAR_3;


   VAR_2 = 320;
   VAR_1 = 240;
   VAR_0 = (uint16_t*)FUNC_0(VAR_2 * VAR_1, sizeof(uint16_t));
   for (VAR_3 = 0; VAR_3 < (unsigned)(VAR_2 * VAR_1); VAR_3++)
      VAR_0[VAR_3] = 4 << 5;
}
