
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int userclipX2; int systemclipX2; int userclipY2; int systemclipY2; scalar_t__ systemclipY1; scalar_t__ userclipY1; scalar_t__ systemclipX1; scalar_t__ userclipX1; } ;


 TYPE_1__* VAR_0 ;

int FUNC_0(void)
{
   VAR_0->userclipX1 = VAR_0->systemclipX1 = 0;
   VAR_0->userclipY1 = VAR_0->systemclipY1 = 0;
   VAR_0->userclipX2 = VAR_0->systemclipX2 = 512;
   VAR_0->userclipY2 = VAR_0->systemclipY2 = 256;

   return 0;
}
