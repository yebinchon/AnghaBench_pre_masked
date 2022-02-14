
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ priv; } ;
typedef TYPE_2__ wlandevice_t ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_9__ {int tallies; } ;
typedef TYPE_3__ hfa384x_t ;
struct TYPE_7__ {int commtallies16; int commtallies32; } ;
struct TYPE_10__ {int framelen; TYPE_1__ info; } ;
typedef TYPE_4__ hfa384x_InfFrame_t ;
typedef int hfa384x_CommTallies32_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(wlandevice_t *VAR_0,
      hfa384x_InfFrame_t *VAR_1)
{
 hfa384x_t *VAR_2 = (hfa384x_t *) VAR_0->priv;
 u16 *VAR_3;
 u32 *VAR_4;
 u32 *VAR_5;
 int VAR_6;
 int VAR_7;






 VAR_7 = sizeof(hfa384x_CommTallies32_t) / sizeof(u32);
 if (VAR_1->framelen > 22) {
  VAR_4 = (u32 *) & VAR_2->tallies;
  VAR_5 = (u32 *) & VAR_1->info.commtallies32;
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++, VAR_4++, VAR_5++)
   *VAR_4 += FUNC_1(*VAR_5);
 } else {
  VAR_4 = (u32 *) & VAR_2->tallies;
  VAR_3 = (u16 *) & VAR_1->info.commtallies16;
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++, VAR_4++, VAR_3++)
   *VAR_4 += FUNC_0(*VAR_3);
 }

 return;
}
