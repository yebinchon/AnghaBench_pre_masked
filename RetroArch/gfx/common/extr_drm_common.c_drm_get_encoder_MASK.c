
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ encoder_id; int count_modes; TYPE_1__* modes; } ;
struct TYPE_9__ {scalar_t__ encoder_id; } ;
struct TYPE_8__ {int count_encoders; int * encoders; } ;
struct TYPE_7__ {int vrefresh; int vdisplay; int hdisplay; int name; } ;


 int FUNC_0 (char*,unsigned int,int ,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int,int ) ;
 TYPE_4__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* VAR_2 ;

bool FUNC_4(int VAR_3)
{
   unsigned VAR_4;

   for (VAR_4 = 0; (int)VAR_4 < VAR_2->count_encoders; VAR_4++)
   {
      VAR_1 = FUNC_3(VAR_3, VAR_2->encoders[VAR_4]);

      if (!VAR_1)
         continue;

      if (VAR_1->encoder_id == VAR_0->encoder_id)
         break;

      FUNC_2(VAR_1);
      VAR_1 = ((void*)0);
   }

   if (!VAR_1)
   {
      FUNC_1("[DRM]: Couldn't find DRM encoder.\n");
      return 0;
   }

   for (VAR_4 = 0; (int)VAR_4 < VAR_0->count_modes; VAR_4++)
   {
      FUNC_0("[DRM]: Mode %d: (%s) %d x %d, %u Hz\n",
            VAR_4,
            VAR_0->modes[VAR_4].name,
            VAR_0->modes[VAR_4].hdisplay,
            VAR_0->modes[VAR_4].vdisplay,
            VAR_0->modes[VAR_4].vrefresh);
   }

   return 1;
}
