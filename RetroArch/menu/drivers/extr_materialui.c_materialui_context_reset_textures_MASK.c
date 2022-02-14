
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * list; } ;
struct TYPE_5__ {TYPE_1__ textures; } ;
typedef TYPE_2__ materialui_handle_t ;
typedef int icon_path ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,char*,int ,int ) ;
 int VAR_6 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,char*,int *,int ,int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int,int,int,int *,int ,int ) ;

__attribute__((used)) static void FUNC_7(materialui_handle_t *VAR_7)
{
   bool VAR_8 = 1;
   char VAR_9[VAR_5];
   unsigned VAR_10;

   VAR_9[0] = '\0';

   FUNC_1(
         VAR_9, sizeof(VAR_9),
         VAR_0);


   for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
   {
      if (!FUNC_3(
            FUNC_2(VAR_10), VAR_9, &VAR_7->textures.list[VAR_10],
            VAR_6, ((void*)0), ((void*)0)))
      {
         FUNC_0("[GLUI] Asset missing: %s%s%s\n", VAR_9, FUNC_5(), FUNC_2(VAR_10));
         VAR_8 = 0;
      }
   }


   if (!VAR_8)
      FUNC_6(
            FUNC_4(VAR_3), 1, 256, 0, ((void*)0),
            VAR_2, VAR_1);
}
