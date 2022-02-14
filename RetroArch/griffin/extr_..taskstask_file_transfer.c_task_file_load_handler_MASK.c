
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct nbio_t {int dummy; } ;
struct TYPE_12__ {scalar_t__ state; } ;
typedef TYPE_1__ retro_task_t ;
struct TYPE_13__ {int status; int type; int is_finished; struct nbio_t* handle; int path; } ;
typedef TYPE_2__ nbio_handle_t ;


 int VAR_0 ;
 int FUNC_0 (struct nbio_t*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (TYPE_1__*,int) ;

void FUNC_12(retro_task_t *VAR_1)
{
   nbio_handle_t *VAR_2 = (nbio_handle_t*)VAR_1->state;

   if (VAR_2)
   {
      switch (VAR_2->status)
      {
         case 141:
            if (VAR_2 && !FUNC_3(VAR_2->path))
            {
               struct nbio_t *VAR_3 = (struct nbio_t*)FUNC_1(VAR_2->path, VAR_0);

               if (VAR_3)
               {
                  VAR_2->handle = VAR_3;
                  VAR_2->status = 140;

                  FUNC_0(VAR_3);
                  return;
               }
               else
                  FUNC_9(VAR_1, 1);
            }
            break;
         case 138:
            if (!VAR_2 || FUNC_5(VAR_2) == -1)
               FUNC_9(VAR_1, 1);
            VAR_2->status = 139;
            break;
         case 140:
            if (!VAR_2 || FUNC_6(VAR_2) == -1)
               VAR_2->status = 138;
            break;
         case 139:
            break;
      }

      switch (VAR_2->type)
      {
         case 130:
         case 135:
         case 129:
         case 137:
            if (!FUNC_8(VAR_1))
               FUNC_11(VAR_1, 1);
            break;
         case 133:
         case 136:
         case 131:
         case 134:
         case 128:




            break;
         case 132:
         default:
            if (VAR_2->is_finished)
               FUNC_11(VAR_1, 1);
            break;
      }
   }

   if (FUNC_7(VAR_1))
   {
      FUNC_10(VAR_1, FUNC_2("Task canceled."));
      FUNC_11(VAR_1, 1);
   }
}
