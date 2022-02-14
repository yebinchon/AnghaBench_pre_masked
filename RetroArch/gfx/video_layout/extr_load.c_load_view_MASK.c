
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_26__ {void* bounds; } ;
typedef TYPE_2__ view_t ;
typedef int video_layout_orientation_t ;
typedef int video_layout_color_t ;
typedef void* video_layout_bounds_t ;
typedef int scope_t ;
struct TYPE_27__ {int * name; struct TYPE_27__* next; struct TYPE_27__* children; } ;
typedef TYPE_3__ rxml_node_t ;
typedef int layer_t ;
struct TYPE_28__ {int i_raw; int components_count; void* bounds; TYPE_1__* components; void* i_mask; void* i_bind; void* o_bind; } ;
typedef TYPE_4__ element_t ;
struct TYPE_25__ {int color; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 void* FUNC_1 (void**,void**) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_4__*) ;
 void* FUNC_5 (int *) ;
 TYPE_4__* FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_3__*,int) ;
 int FUNC_8 (int *,TYPE_4__*,TYPE_3__*) ;
 void* FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int *,TYPE_2__*,TYPE_2__*,int,void*,int ,int ) ;
 void* FUNC_12 (int *,TYPE_3__*) ;
 int FUNC_13 (int *,TYPE_3__*) ;
 int FUNC_14 (int *,TYPE_3__*) ;
 char* FUNC_15 (TYPE_3__*,char*) ;
 int * FUNC_16 (int *,char const*) ;
 TYPE_4__* FUNC_17 (int *,char const*) ;
 TYPE_2__* FUNC_18 (int *,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 scalar_t__ FUNC_22 (int *,char*) ;
 void* FUNC_23 (int *) ;
 int FUNC_24 (TYPE_2__*) ;
 int * FUNC_25 (TYPE_2__*,int *) ;
 int FUNC_26 (TYPE_2__*,int *) ;

__attribute__((used)) static bool FUNC_27(scope_t *VAR_1, view_t *VAR_2, rxml_node_t *VAR_3, bool VAR_4)
{
   bool VAR_5, VAR_6;
   rxml_node_t *VAR_7;
   rxml_node_t *VAR_8;
   int VAR_9;

   if (VAR_4)
   {
      const char *VAR_10;

      if (!(VAR_10 = FUNC_15(VAR_3, "name")))
      {
         FUNC_0("video_layout: <view> is missing 'name' attribute\n");
         return 0;
      }

      FUNC_26(VAR_2, FUNC_16(VAR_1, VAR_10));
   }

   VAR_5 = 1;
   VAR_6 = 0;

   for (VAR_7 = VAR_3->children; VAR_7; VAR_7 = VAR_7->next)
   {
      video_layout_color_t VAR_11;
      video_layout_bounds_t VAR_12;
      video_layout_orientation_t VAR_13;

      if (FUNC_22(VAR_7->name, "param") == 0)
      {
         if (!FUNC_7(VAR_1, VAR_7, 1))
            VAR_5 = 0;
         continue;
      }

      else if (FUNC_22(VAR_7->name, "bounds") == 0)
      {
         VAR_2->bounds = FUNC_12(VAR_1, VAR_7);
         VAR_6 = 1;
         continue;
      }

      VAR_11 = FUNC_10();
      VAR_12 = FUNC_9();
      VAR_13 = VAR_0;

      for (VAR_8 = VAR_7->children; VAR_8; VAR_8 = VAR_8->next)
      {
         if (FUNC_22(VAR_8->name, "color") == 0)
            VAR_11 = FUNC_13(VAR_1, VAR_8);

         else if (FUNC_22(VAR_8->name, "bounds") == 0)
            VAR_12 = FUNC_12(VAR_1, VAR_8);

         else if (FUNC_22(VAR_8->name, "orientation") == 0)
            VAR_13 = FUNC_14(VAR_1, VAR_8);
      }

      if (FUNC_22(VAR_7->name, "group") == 0)
      {
         const char *VAR_14;
         if ((VAR_14 = FUNC_15(VAR_7, "ref")))
         {
            view_t *VAR_15;
            if ((VAR_15 = FUNC_18(VAR_1, FUNC_16(VAR_1, VAR_14))))
            {
               FUNC_11(VAR_1, VAR_2, VAR_15, VAR_6, VAR_12, VAR_13, VAR_11);
            }
            else
            {
               FUNC_0("video_layout: group \"%s\" is missing\n", FUNC_16(VAR_1, VAR_14));
               VAR_5 = 0;
            }
         }
         else
         {
            FUNC_0("video_layout: <group> is missing 'ref' attribute\n");
            VAR_5 = 0;
         }
      }

      else if (FUNC_22(VAR_7->name, "repeat") == 0)
      {
         const char *VAR_16;
         int VAR_17;

         if (!(VAR_16 = FUNC_15(VAR_7, "count")))
         {
            FUNC_0("video_layout: <repeat> is missing 'count' attribute\n");
            VAR_5 = 0;
            continue;
         }

         VAR_17 = FUNC_5(FUNC_16(VAR_1, VAR_16));

         FUNC_20(VAR_1);

         for (VAR_8 = VAR_7->children; VAR_8; VAR_8 = VAR_8->next)
         {
            if (FUNC_22(VAR_8->name, "param") == 0)
            {
               if (!FUNC_7(VAR_1, VAR_8, 1))
                  VAR_5 = 0;
            }
         }

         for (VAR_9 = 0; VAR_9 < VAR_17; ++VAR_9)
         {
            view_t VAR_18;
            FUNC_26(&VAR_18, ((void*)0));

            if (!FUNC_27(VAR_1, &VAR_18, VAR_7, 0))
               VAR_5 = 0;

            FUNC_11(VAR_1, VAR_2, &VAR_18, VAR_6, VAR_12, VAR_13, VAR_11);

            FUNC_24(&VAR_18);

            FUNC_21(VAR_1);
         }

         FUNC_19(VAR_1);
      }

      else
      {
         layer_t *VAR_19;
         element_t *VAR_20;

         VAR_19 = FUNC_25(VAR_2, VAR_7->name);
         VAR_20 = FUNC_6(VAR_19);

         if (FUNC_22(VAR_7->name, "screen") == 0)
         {
            if (!FUNC_8(VAR_1, VAR_20, VAR_7))
               VAR_5 = 0;
         }
         else
         {
            const char *VAR_21;
            const char *VAR_22;

            if ((VAR_21 = FUNC_15(VAR_7, "element")))
            {
               element_t *VAR_23;
               if ((VAR_23 = FUNC_17(VAR_1, VAR_21)))
               {
                  FUNC_4(VAR_20, VAR_23);

                  if ((VAR_22 = FUNC_15(VAR_7, "name")))
                     VAR_20->o_bind = FUNC_23(FUNC_16(VAR_1, VAR_22));

                  if ((VAR_22 = FUNC_15(VAR_7, "inputtag")))
                     VAR_20->i_bind = FUNC_23(FUNC_16(VAR_1, VAR_22));

                  if ((VAR_22 = FUNC_15(VAR_7, "inputmask")))
                     VAR_20->i_mask = FUNC_5(FUNC_16(VAR_1, VAR_22));

                  if ((VAR_22 = FUNC_15(VAR_7, "inputraw")))
                     VAR_20->i_raw = FUNC_5(FUNC_16(VAR_1, VAR_22)) ? 1 : 0;
               }
               else
               {
                  FUNC_0("video_layout: element \"%s\" is missing\n", FUNC_16(VAR_1, VAR_21));
                  VAR_5 = 0;
               }
            }
            else
            {
               FUNC_0("video_layout: <%s> is missing 'element' attribute\n", VAR_7->name);
               VAR_5 = 0;
            }
         }

         for (VAR_9 = 0; VAR_9 < VAR_20->components_count; ++VAR_9)
            FUNC_2(&VAR_20->components->color, &VAR_11);

         VAR_20->bounds = VAR_12;

         if (VAR_13)
            FUNC_3(VAR_20, VAR_13);

         if (!VAR_6)
            VAR_2->bounds = FUNC_1(&VAR_2->bounds, &VAR_20->bounds);
      }
   }

   return VAR_5;
}
