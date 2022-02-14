
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xkb_mod_index_t ;
typedef int uint16_t ;
struct xkb_rule_names {char* rules; int layout; int variant; int member_0; } ;
struct string_list {int size; TYPE_2__* elems; } ;
struct TYPE_5__ {scalar_t__* input_keyboard_layout; } ;
struct TYPE_7__ {TYPE_1__ arrays; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_6__ {int data; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_0 (int ,int) ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,size_t,int ,int ,int,int ) ;
 int * VAR_18 ;
 int * VAR_19 ;
 int FUNC_4 (char*,size_t) ;
 int FUNC_5 (struct string_list*) ;
 struct string_list* FUNC_6 (scalar_t__*,char*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_20 ;
 int FUNC_8 (scalar_t__,int ) ;
 scalar_t__ FUNC_9 (scalar_t__,struct xkb_rule_names*,int ) ;
 scalar_t__ FUNC_10 (scalar_t__,char*,int ,int ) ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_11 (scalar_t__) ;

int FUNC_12(int VAR_23, size_t VAR_24)
{
   char *VAR_25 = ((void*)0);
   VAR_19 = (xkb_mod_index_t *)FUNC_0(
         VAR_2, sizeof(xkb_mod_index_t));

   if (!VAR_19)
      goto error;

   VAR_18 = (uint16_t*)
      FUNC_0(VAR_2, sizeof(uint16_t));

   if (!VAR_18)
      goto error;

   VAR_20 = FUNC_7(VAR_9);

   if (VAR_20)
   {
      if (VAR_23 >= 0)
      {
         VAR_25 = (char*)FUNC_3(((void*)0), VAR_24, VAR_3, VAR_1, VAR_23, 0);
         if (VAR_25 == VAR_0)
            goto error;

         VAR_21 = FUNC_10(VAR_20, VAR_25,
               VAR_11, VAR_10);
         FUNC_4(VAR_25, VAR_24);
      }
      else
      {
         struct string_list *VAR_26 = ((void*)0);
         struct xkb_rule_names VAR_27 = {0};
         settings_t *VAR_28 = FUNC_1();

         VAR_27.rules = "evdev";

         if (*VAR_28->arrays.input_keyboard_layout)
         {
            VAR_26 = FUNC_6(VAR_28->arrays.input_keyboard_layout, ":");
            if (VAR_26 && VAR_26->size >= 2)
               VAR_27.variant = VAR_26->elems[1].data;
            if (VAR_26 && VAR_26->size >= 1)
               VAR_27.layout = VAR_26->elems[0].data;
         }

         VAR_21 = FUNC_9(VAR_20,
               &VAR_27, VAR_12);

         if (VAR_26)
            FUNC_5(VAR_26);
      }
   }

   if (VAR_21)
   {
      xkb_mod_index_t *VAR_29 = (xkb_mod_index_t*)&VAR_19[0];
      uint16_t *VAR_30 = (uint16_t*)&VAR_18[0];

      VAR_22 = FUNC_11(VAR_21);

      *VAR_29 = FUNC_8(VAR_21, VAR_14);
      VAR_29++;
      *VAR_30 = VAR_5;
      VAR_30++;
      *VAR_29 = FUNC_8(VAR_21, VAR_17);
      VAR_29++;
      *VAR_30 = VAR_8;
      VAR_30++;
      *VAR_29 = FUNC_8(VAR_21, VAR_15);
      VAR_29++;
      *VAR_30 = VAR_6;
      VAR_30++;
      *VAR_29 = FUNC_8(VAR_21, VAR_13);
      VAR_29++;
      *VAR_30 = VAR_4;
      VAR_30++;
      *VAR_29 = FUNC_8(VAR_21, VAR_16);
      *VAR_30 = VAR_7;
   }

   return 0;

error:
   FUNC_2();

   return -1;
}
