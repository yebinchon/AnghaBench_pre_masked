
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int msg_widget ;
typedef int menu_widget_msg_t ;
typedef uintptr_t menu_animation_ctx_tag ;
struct TYPE_8__ {size_t size; } ;
struct TYPE_7__ {int carr; } ;
struct TYPE_6__ {int carr; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int **,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,size_t) ;
 int FUNC_5 (int *,int *) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_6 (int *) ;
 float VAR_3 ;
 float VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (uintptr_t*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 uintptr_t VAR_6 ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 float VAR_9 ;
 int FUNC_12 (int *) ;
 float VAR_10 ;
 uintptr_t VAR_11 ;

void FUNC_13(void)
{
   size_t VAR_12;
   menu_animation_ctx_tag VAR_13;


   FUNC_7(&VAR_11);
   FUNC_7(&VAR_6);


   if (VAR_7)
   {
      while (FUNC_2(VAR_7) > 0)
      {
         menu_widget_msg_t *VAR_14;

         FUNC_1(VAR_7, &VAR_14, sizeof(VAR_14));

         FUNC_10(VAR_14, 0);
         FUNC_6(VAR_14);
      }

      FUNC_0(VAR_7);
      VAR_7 = ((void*)0);
   }


   if (VAR_0)
   {
      for (VAR_12 = 0; VAR_12 < VAR_0->size; VAR_12++)
      {
         menu_widget_msg_t *VAR_15 = (menu_widget_msg_t*)
            FUNC_4(VAR_0, VAR_12);

         FUNC_10(VAR_15, 0);
      }
      FUNC_3(VAR_0);
      VAR_0 = ((void*)0);
   }

   VAR_8 = 0;


   FUNC_9(((void*)0));


   FUNC_12(&VAR_2.carr);
   FUNC_12(&VAR_1.carr);

   FUNC_5(((void*)0), ((void*)0));



   VAR_3 = 0.0f;


   VAR_13 = (uintptr_t) &VAR_5;
   VAR_4 = 0.0f;
   FUNC_8(&VAR_5);
   FUNC_7(&VAR_13);





   VAR_10 = 0.0f;


   VAR_9 = 0.0f;
   FUNC_11(((void*)0));
}
