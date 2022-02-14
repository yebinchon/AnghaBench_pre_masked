
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int specialprimode; int enable; int PlaneAddr; } ;
typedef TYPE_1__ vdp2draw_struct ;
struct TYPE_14__ {int planetbl; } ;
typedef TYPE_2__ screeninfo_struct ;
struct TYPE_15__ {int SFPRMD; int BGON; } ;
typedef TYPE_3__ Vdp2 ;


 int FUNC_0 (TYPE_1__*,int ,int ,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*,int,int) ;
 TYPE_3__* FUNC_2 (int,TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(vdp2draw_struct * VAR_0, screeninfo_struct * VAR_1, int VAR_2, Vdp2* VAR_3)
{
   Vdp2 * VAR_4;

   VAR_4 = FUNC_2(VAR_2, VAR_3);
   if (VAR_4 == ((void*)0)) return;
   FUNC_1(VAR_4, VAR_0, 0x8, 0x8);
   VAR_0->specialprimode = (VAR_4->SFPRMD >> 6) & 0x3;
   VAR_0->enable = VAR_4->BGON & 0x8;
   FUNC_0(VAR_0, VAR_1->planetbl, VAR_0->PlaneAddr, VAR_4);
}
