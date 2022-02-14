
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int FBCR; int TVMR; } ;
typedef TYPE_1__ Vdp1 ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_1(Vdp1* VAR_4, u8 * VAR_5)
{
   if (VAR_4->FBCR & 8)
      VAR_1 = 2;
   else
      VAR_1 = 1;
   if (VAR_4->TVMR & 0x1)
   {
      if (VAR_4->TVMR & 0x2)
      {

         VAR_3 = 512;
         VAR_0 = 512;
      }
      else
      {

         VAR_3 = 1024;
         VAR_0 = 256;
      }

      VAR_2 = 1;
   }
   else
   {

      VAR_3 = 512;
      VAR_0 = 256;
      VAR_2 = 2;
   }

   FUNC_0(VAR_4, VAR_5);




}
