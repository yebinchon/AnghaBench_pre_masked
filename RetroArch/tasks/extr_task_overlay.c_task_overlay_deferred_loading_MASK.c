
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int range_mod; int alpha_mod; int normalized; } ;
struct TYPE_10__ {int height; int width; } ;
struct overlay {size_t pos; size_t pos_increment; size_t size; TYPE_2__ config; TYPE_1__ image; int * descs; } ;
struct TYPE_12__ {scalar_t__ state; } ;
typedef TYPE_3__ retro_task_t ;
struct TYPE_13__ {size_t pos; size_t size; int loading_status; void* state; struct overlay* overlays; } ;
typedef TYPE_4__ overlay_loader_t ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (struct overlay*) ;
 int FUNC_2 (TYPE_4__*,int *,struct overlay*,size_t,unsigned int,int ,int ,int ,int ,int ) ;
 int FUNC_3 (TYPE_4__*,int *,struct overlay*,size_t,unsigned int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_6(retro_task_t *VAR_2)
{
   size_t VAR_3 = 0;
   overlay_loader_t *VAR_4 = (overlay_loader_t*)VAR_2->state;
   struct overlay *VAR_5 = &VAR_4->overlays[VAR_4->pos];
   bool VAR_6 = VAR_4->pos < VAR_4->size;

   if (!VAR_6)
   {
      VAR_4->state = VAR_1;
      return;
   }

   switch (VAR_4->loading_status)
   {
      case 128:
      case 134:
         VAR_4->loading_status = 130;



      case 130:
         FUNC_1(&VAR_4->overlays[VAR_4->pos]);
         VAR_4->loading_status = 132;
         VAR_4->overlays[VAR_4->pos].pos = 0;
         break;
      case 132:
         for (VAR_3 = 0; VAR_3 < VAR_5->pos_increment; VAR_3++)
         {
            if (VAR_5->pos < VAR_5->size)
            {
               FUNC_3(VAR_4,
                     &VAR_5->descs[VAR_5->pos], VAR_5,
                     VAR_4->pos, (unsigned)VAR_5->pos);
            }
            else
            {
               VAR_5->pos = 0;
               VAR_4->loading_status = 131;
               break;
            }

         }
         break;
      case 131:
         for (VAR_3 = 0; VAR_3 < VAR_5->pos_increment; VAR_3++)
         {
            if (VAR_5->pos < VAR_5->size)
            {
               if (!FUNC_2(VAR_4,
                        &VAR_5->descs[VAR_5->pos], VAR_5,
                        VAR_4->pos, (unsigned)VAR_5->pos,
                        VAR_5->image.width, VAR_5->image.height,
                        VAR_5->config.normalized,
                        VAR_5->config.alpha_mod, VAR_5->config.range_mod))
               {
                  FUNC_0("[Overlay]: Failed to load overlay descs for overlay #%u.\n",
                        (unsigned)VAR_5->pos);
                  FUNC_5(VAR_2, 1);
                  VAR_4->state = VAR_0;
                  break;
               }
            }
            else
            {
               VAR_5->pos = 0;
               VAR_4->loading_status = 133;
               break;
            }
         }
         break;
      case 133:
         if (VAR_4->pos == 0)
            FUNC_4(VAR_2);

         VAR_4->pos += 1;
         VAR_4->loading_status = 128;
         break;
      case 129:
         FUNC_5(VAR_2, 1);
         VAR_4->state = VAR_0;
         break;
   }
}
