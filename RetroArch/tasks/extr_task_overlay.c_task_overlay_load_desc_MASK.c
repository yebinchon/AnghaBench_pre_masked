
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct string_list {int size; TYPE_1__* elems; } ;
struct overlay_desc {int type; char* next_index_name; float x; float y; float analog_saturate_pct; float range_x; float range_y; float mod_x; float mod_w; float mod_y; float mod_h; float alpha_mod; float range_mod; int movable; float delta_x; float delta_y; float range_x_mod; float range_y_mod; int hitbox; int button_mask; int retro_key_idx; } ;
struct overlay {int pos; } ;
typedef int overlay_target_key ;
struct TYPE_5__ {int * conf; } ;
typedef TYPE_2__ overlay_loader_t ;
typedef int overlay_desc_normalized_key ;
typedef int overlay_desc_key ;
typedef int overlay_analog_saturate_key ;
typedef int overlay ;
typedef int config_file_t ;
typedef int conf_key ;
struct TYPE_4__ {char* data; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,...) ;
 int VAR_4 ;
 int FUNC_4 (int *,char*,char*,int) ;
 scalar_t__ FUNC_5 (int *,char*,int*) ;
 scalar_t__ FUNC_6 (int *,char*,float*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int,char*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 int FUNC_11 (struct string_list*) ;
 struct string_list* FUNC_12 (char*,char*) ;
 char* FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (char const*,int *) ;
 char* FUNC_15 (char*,char*,char**) ;

__attribute__((used)) static bool FUNC_16(
      overlay_loader_t *VAR_5,
      struct overlay_desc *VAR_6,
      struct overlay *VAR_7,
      unsigned VAR_8, unsigned VAR_9,
      unsigned VAR_10, unsigned VAR_11,
      bool VAR_12, float VAR_13, float VAR_14)
{
   float VAR_15, VAR_16;
   char VAR_17[64];
   char VAR_18[64];
   char VAR_19[64];
   char VAR_20[256];
   float VAR_21 = 0.0f;
   bool VAR_22 = 0;
   bool VAR_23 = 1;
   bool VAR_24 = 0;
   char *VAR_25 = ((void*)0);
   struct string_list *VAR_26 = ((void*)0);
   const char *VAR_27 = ((void*)0);
   const char *VAR_28 = ((void*)0);
   const char *VAR_29 = ((void*)0);
   config_file_t *VAR_30 = VAR_5->conf;

   VAR_17[0] = VAR_18[0] =
      VAR_19[0] = VAR_20[0] = '\0';

   FUNC_9(VAR_17, sizeof(VAR_17),
         "overlay%u_desc%u", VAR_8, VAR_9);

   FUNC_9(VAR_19, sizeof(VAR_19),
         "overlay%u_desc%u_normalized", VAR_8, VAR_9);
   if (FUNC_5(VAR_30, VAR_19, &VAR_22))
      VAR_12 = VAR_22;

   VAR_24 = !VAR_12;

   if (VAR_24 && (VAR_10 == 0 || VAR_11 == 0))
   {
      FUNC_3("[Overlay]: Base overlay is not set and not using normalized coordinates.\n");
      VAR_23 = 0;
      goto end;
   }

   if (!FUNC_4(VAR_30, VAR_17, VAR_20, sizeof(VAR_20)))
   {
      FUNC_3("[Overlay]: Didn't find key: %s.\n", VAR_17);
      VAR_23 = 0;
      goto end;
   }

   VAR_26 = FUNC_12(VAR_20, ", ");

   if (!VAR_26)
   {
      FUNC_3("[Overlay]: Failed to split overlay desc.\n");
      VAR_23 = 0;
      goto end;
   }

   if (VAR_26->size < 6)
   {
      FUNC_3("[Overlay]: Overlay desc is invalid. Requires at least 6 tokens.\n");
      VAR_23 = 0;
      goto end;
   }

   VAR_25 = VAR_26->elems[0].data;
   VAR_27 = VAR_26->elems[1].data;
   VAR_28 = VAR_26->elems[2].data;
   VAR_29 = VAR_26->elems[3].data;

   VAR_6->retro_key_idx = 0;
   FUNC_0(VAR_6->button_mask);

   if (FUNC_10(VAR_25, "analog_left"))
      VAR_6->type = 129;
   else if (FUNC_10(VAR_25, "analog_right"))
      VAR_6->type = 128;
   else if (FUNC_13(VAR_25, "retrok_") == VAR_25)
   {
      VAR_6->type = VAR_3;
      VAR_6->retro_key_idx = FUNC_8(VAR_25 + 7);
   }
   else
   {
      char *VAR_31 = ((void*)0);
      const char *VAR_32 = FUNC_15(VAR_25, "|", &VAR_31);

      VAR_6->type = VAR_2;

      for (; VAR_32; VAR_32 = FUNC_15(((void*)0), "|", &VAR_31))
      {
         if (!FUNC_10(VAR_32, "nul"))
            FUNC_2(VAR_6->button_mask, FUNC_7(VAR_32));
      }

      if (FUNC_1(VAR_6->button_mask, VAR_4))
      {
         char VAR_33[64];

         FUNC_9(VAR_33, sizeof(VAR_33),
               "overlay%u_desc%u_next_target", VAR_8, VAR_9);
         FUNC_4(VAR_30, VAR_33,
               VAR_6->next_index_name, sizeof(VAR_6->next_index_name));
      }
   }

   VAR_15 = 1.0f;
   VAR_16 = 1.0f;

   if (VAR_24)
   {
      VAR_15 /= VAR_10;
      VAR_16 /= VAR_11;
   }

   VAR_6->x = (float)FUNC_14(VAR_27, ((void*)0)) * VAR_15;
   VAR_6->y = (float)FUNC_14(VAR_28, ((void*)0)) * VAR_16;

   if (FUNC_10(VAR_29, "radial"))
      VAR_6->hitbox = VAR_0;
   else if (FUNC_10(VAR_29, "rect"))
      VAR_6->hitbox = VAR_1;
   else
   {
      FUNC_3("[Overlay]: Hitbox type (%s) is invalid. Use \"radial\" or \"rect\".\n", VAR_29);
      VAR_23 = 0;
      goto end;
   }

   switch (VAR_6->type)
   {
      case 129:
      case 128:
         {
            char VAR_34[64];

            VAR_34[0] = '\0';

            if (VAR_6->hitbox != VAR_0)
            {
               FUNC_3("[Overlay]: Analog hitbox type must be \"radial\".\n");
               VAR_23 = 0;
               goto end;
            }

            FUNC_9(VAR_34,
                  sizeof(VAR_34),
                  "overlay%u_desc%u_saturate_pct", VAR_8, VAR_9);
            if (FUNC_6(VAR_30, VAR_34,
                     &VAR_21))
               VAR_6->analog_saturate_pct = VAR_21;
            else
               VAR_6->analog_saturate_pct = 1.0f;
         }
         break;
      default:


         break;
   }

   VAR_6->range_x = (float)FUNC_14(VAR_26->elems[4].data, ((void*)0)) * VAR_15;
   VAR_6->range_y = (float)FUNC_14(VAR_26->elems[5].data, ((void*)0)) * VAR_16;

   VAR_6->mod_x = VAR_6->x - VAR_6->range_x;
   VAR_6->mod_w = 2.0f * VAR_6->range_x;
   VAR_6->mod_y = VAR_6->y - VAR_6->range_y;
   VAR_6->mod_h = 2.0f * VAR_6->range_y;

   FUNC_9(VAR_18, sizeof(VAR_18),
         "overlay%u_desc%u_alpha_mod", VAR_8, VAR_9);
   VAR_6->alpha_mod = VAR_13;
   if (FUNC_6(VAR_30, VAR_18, &VAR_21))
         VAR_6->alpha_mod = VAR_21;

   FUNC_9(VAR_18, sizeof(VAR_18),
         "overlay%u_desc%u_range_mod", VAR_8, VAR_9);
   VAR_6->range_mod = VAR_14;
   if (FUNC_6(VAR_30, VAR_18, &VAR_21))
      VAR_6->range_mod = VAR_21;

   FUNC_9(VAR_18, sizeof(VAR_18),
         "overlay%u_desc%u_movable", VAR_8, VAR_9);
   VAR_6->movable = 0;
   VAR_6->delta_x = 0.0f;
   VAR_6->delta_y = 0.0f;

   if (FUNC_5(VAR_30, VAR_18, &VAR_22))
      VAR_6->movable = VAR_22;

   VAR_6->range_x_mod = VAR_6->range_x;
   VAR_6->range_y_mod = VAR_6->range_y;

   VAR_7->pos ++;

end:
   if (VAR_26)
      FUNC_11(VAR_26);
   return VAR_23;
}
