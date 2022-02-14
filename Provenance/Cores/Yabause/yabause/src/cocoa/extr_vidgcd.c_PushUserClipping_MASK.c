
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ userclipX1; scalar_t__ userclipX2; scalar_t__ userclipY1; scalar_t__ userclipY2; scalar_t__ systemclipX1; scalar_t__ systemclipX2; scalar_t__ systemclipY1; scalar_t__ systemclipY2; } ;


 int FUNC_0 (char*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_1(int VAR_5)
{
   if (VAR_5 == 1)
   {
      FUNC_0("User clipping mode 1 not implemented\n");
      return;
   }

   VAR_2 = VAR_0->userclipX1;
   VAR_1 = VAR_0->userclipX2;
   VAR_4 = VAR_0->userclipY1;
   VAR_3 = VAR_0->userclipY2;


   if (VAR_2 > VAR_0->systemclipX1)
      VAR_2 = VAR_0->userclipX1;
   else
      VAR_2 = VAR_0->systemclipX1;

   if (VAR_1 < VAR_0->systemclipX2)
      VAR_1 = VAR_0->userclipX2;
   else
      VAR_1 = VAR_0->systemclipX2;

   if (VAR_4 > VAR_0->systemclipY1)
      VAR_4 = VAR_0->userclipY1;
   else
      VAR_4 = VAR_0->systemclipY1;

   if (VAR_3 < VAR_0->systemclipY2)
      VAR_3 = VAR_0->userclipY2;
   else
      VAR_3 = VAR_0->systemclipY2;
}
