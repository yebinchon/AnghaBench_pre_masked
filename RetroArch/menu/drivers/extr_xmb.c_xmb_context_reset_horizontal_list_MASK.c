
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int content_icon; int icon; } ;
typedef TYPE_1__ xmb_node_t ;
struct TYPE_11__ {float categories_x_pos; float icon_spacing_horizontal; int depth; int x; int icon_size; int horizontal_list; scalar_t__ categories_selection_ptr; } ;
typedef TYPE_2__ xmb_handle_t ;
struct texture_image {int * pixels; int supports_rgba; scalar_t__ height; scalar_t__ width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,unsigned int,char const**,int *,int *,int *) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (char*,char*,char*,char*,int) ;
 int FUNC_4 (char*,char*,char*,char,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct texture_image*) ;
 scalar_t__ FUNC_7 (struct texture_image*,char*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char const*,char*) ;
 int FUNC_12 () ;
 int FUNC_13 (struct texture_image*,int ,int *) ;
 int FUNC_14 (int *) ;
 TYPE_1__* FUNC_15 (TYPE_2__*,unsigned int) ;
 size_t FUNC_16 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_17 (TYPE_2__*,unsigned int) ;
 int FUNC_18 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_19(
      xmb_handle_t *VAR_4)
{
   unsigned VAR_5;
   int VAR_6;
   size_t VAR_7 =
      FUNC_16(VAR_4, VAR_1);

   VAR_4->categories_x_pos =
      VAR_4->icon_spacing_horizontal *
      -(float)VAR_4->categories_selection_ptr;

   VAR_6 = (VAR_4->depth > 1) ? 2 : 1;
   VAR_4->x = VAR_4->icon_size * -(VAR_6*2-2);

   for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
   {
      const char *VAR_8 = ((void*)0);
      xmb_node_t *VAR_9 =
         FUNC_15(VAR_4, VAR_5);

      if (!VAR_9)
      {
         VAR_9 = FUNC_17(VAR_4, VAR_5);
         if (!VAR_9)
            continue;
      }

      FUNC_0(VAR_4->horizontal_list, VAR_5,
            &VAR_8, ((void*)0), ((void*)0), ((void*)0));

      if (!VAR_8)
         continue;

      if (!FUNC_11(VAR_8, ".lpl"))
         continue;

      {
         struct texture_image VAR_10;
         char *VAR_11 = (char*)
            FUNC_8(VAR_2 * sizeof(char));
         char *VAR_12 = (char*)
            FUNC_8(VAR_2 * sizeof(char));
         char *VAR_13 = (char*)
            FUNC_8(VAR_2 * sizeof(char));
         char *VAR_14 = (char*)
            FUNC_8(VAR_2 * sizeof(char));

         VAR_12[0] = VAR_11[0] =
            VAR_13[0] = VAR_14[0] = '\0';

         FUNC_2(VAR_11, VAR_8,
               VAR_2 * sizeof(char));

         FUNC_1(VAR_12,
               VAR_2 * sizeof(char),
               VAR_0);

         FUNC_3(VAR_13, VAR_12, VAR_11,
               ".png",
               VAR_2 * sizeof(char));



         if (!FUNC_9(VAR_13))
               FUNC_3(VAR_13, VAR_12, "default",
               ".png",
               VAR_2 * sizeof(char));

         VAR_10.width = 0;
         VAR_10.height = 0;
         VAR_10.pixels = ((void*)0);
         VAR_10.supports_rgba = FUNC_12();

         if (FUNC_7(&VAR_10, VAR_13))
         {
            if (VAR_10.pixels)
            {
               FUNC_14(&VAR_9->icon);
               FUNC_13(&VAR_10,
                     VAR_3, &VAR_9->icon);
            }

            FUNC_6(&VAR_10);
         }

         FUNC_4(VAR_11, VAR_11, "content.png",
               '-', VAR_2 * sizeof(char));
         FUNC_10(VAR_14, VAR_12, VAR_2 * sizeof(char));
         FUNC_10(VAR_14, VAR_11, VAR_2 * sizeof(char));



         if (!FUNC_9(VAR_14))
         {
            FUNC_10(VAR_12, "default", VAR_2 * sizeof(char));
            FUNC_4(VAR_14, VAR_12,
                  "content.png", '-',
                  VAR_2 * sizeof(char));
         }

         if (FUNC_7(&VAR_10, VAR_14))
         {
            if (VAR_10.pixels)
            {
               FUNC_14(&VAR_9->content_icon);
               FUNC_13(&VAR_10,
                     VAR_3, &VAR_9->content_icon);
            }

            FUNC_6(&VAR_10);
         }

         FUNC_5(VAR_11);
         FUNC_5(VAR_12);
         FUNC_5(VAR_13);
         FUNC_5(VAR_14);
      }
   }

   FUNC_18(VAR_4);
}
