
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int timacnt; int timasd; int scipd; int mcipd; int timbcnt; int timbsd; int timccnt; int timcsd; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

void
FUNC_2 (u32 VAR_1)
{
   VAR_0.timacnt += VAR_1 << (8 - VAR_0.timasd);

   if (VAR_0.timacnt >= 0xFF00)
   {
      if (!(VAR_0.scipd & 0x40))
         FUNC_1(0x40);
      if (!(VAR_0.mcipd & 0x40))
         FUNC_0(0x40);
      VAR_0.timacnt -= 0xFF00;
   }

   VAR_0.timbcnt += VAR_1 << (8 - VAR_0.timbsd);

   if (VAR_0.timbcnt >= 0xFF00)
   {
      if (!(VAR_0.scipd & 0x80))
         FUNC_1(0x80);
      if (!(VAR_0.mcipd & 0x80))
         FUNC_0(0x80);
      VAR_0.timbcnt -= 0xFF00;
   }

   VAR_0.timccnt += VAR_1 << (8 - VAR_0.timcsd);

   if (VAR_0.timccnt >= 0xFF00)
   {
      if (!(VAR_0.scipd & 0x100))
         FUNC_1(0x100);
      if (!(VAR_0.mcipd & 0x100))
         FUNC_0(0x100);
      VAR_0.timccnt -= 0xFF00;
   }


   if (VAR_1)
   {
      if (!(VAR_0.scipd & 0x400))
         FUNC_1(0x400);
      if (!(VAR_0.mcipd & 0x400))
         FUNC_0(0x400);
   }
}
