
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; int name; } ;
typedef TYPE_1__ deviceinfo_struct ;
struct TYPE_5__ {int cartid; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;

deviceinfo_struct *FUNC_2(int *VAR_1)
{
   deviceinfo_struct *VAR_2;
   int VAR_3=1;

   if ((VAR_0->cartid & 0xF0) == 0x20)
      VAR_3++;

   if ((VAR_2 = (deviceinfo_struct *)FUNC_0(VAR_3 * sizeof(deviceinfo_struct))) == ((void*)0))
   {
      *VAR_1 = 0;
      return ((void*)0);
   }

   *VAR_1 = VAR_3;

   VAR_2[0].id = 0;
   FUNC_1(VAR_2[0].name, "Internal Backup RAM");

   if ((VAR_0->cartid & 0xF0) == 0x20)
   {
      VAR_2[1].id = 1;
      FUNC_1(VAR_2[1].name, "%d Mbit Backup RAM Cartridge", 1 << ((VAR_0->cartid & 0xF)+1));
   }





   return VAR_2;
}
