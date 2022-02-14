
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int specialprimode; } ;
typedef TYPE_1__ vdp2draw_struct ;
typedef int screeninfo_struct ;
struct TYPE_10__ {int SFPRMD; } ;
typedef TYPE_2__ Vdp2 ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*,int,int) ;
 TYPE_2__* FUNC_1 (int,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(vdp2draw_struct * VAR_0, screeninfo_struct * VAR_1, int VAR_2, Vdp2* VAR_3)
{
   Vdp2 * VAR_4;

   VAR_4 = FUNC_1(VAR_2, VAR_3);
   if (VAR_4 == ((void*)0)) return;
   FUNC_0(VAR_4, VAR_0, 0x10, 0x10);
   VAR_0->specialprimode = (VAR_4->SFPRMD >> 8) & 0x3;
}
