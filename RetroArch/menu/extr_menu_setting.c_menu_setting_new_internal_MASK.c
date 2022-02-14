
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int rarch_setting_t ;
struct TYPE_5__ {int index; int size; } ;
typedef TYPE_1__ rarch_setting_info_t ;
typedef enum settings_list_type { ____Placeholder_settings_list_type } settings_list_type ;


 unsigned int FUNC_0 (int*) ;
 int VAR_0 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 char* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int,int **,TYPE_1__*,char const*) ;
 int FUNC_7 (int **,TYPE_1__*) ;

__attribute__((used)) static rarch_setting_t *FUNC_8(rarch_setting_info_t *VAR_42)
{
   unsigned VAR_43;
   rarch_setting_t* VAR_44 = ((void*)0);
   enum settings_list_type VAR_45[] =
   {
      VAR_20,
      VAR_12,
      VAR_8,
      VAR_7,
      VAR_19,
      VAR_33,
      VAR_32,
      VAR_4,
      VAR_5,
      VAR_3,
      VAR_40,
      VAR_10,
      VAR_2,
      VAR_16,
      VAR_17,
      VAR_31,
      VAR_14,
      VAR_15,
      VAR_13,
      VAR_27,



      VAR_21,
      VAR_22,
      VAR_25,



      VAR_39,
      VAR_29,
      VAR_23,
      VAR_28,
      VAR_6,
      VAR_9,
      VAR_26,
      VAR_18,
      VAR_34,
      VAR_35,
      VAR_36,
      VAR_38,
      VAR_37,
      VAR_11,
      VAR_30,
      VAR_24
   };
   const char *VAR_46 = FUNC_4(VAR_0);
   rarch_setting_t *VAR_47 = (rarch_setting_t*)FUNC_1(
         VAR_42->size, sizeof(*VAR_47));
   rarch_setting_t **VAR_48 = ((void*)0);

   if (!VAR_47)
      return ((void*)0);

   for (VAR_43 = 0; VAR_43 < FUNC_0(VAR_45); VAR_43++)
   {
      if (!FUNC_6(VAR_45[VAR_43], &VAR_47, VAR_42, VAR_46))
      {
         FUNC_2(VAR_47);
         return ((void*)0);
      }
   }

   VAR_48 = &VAR_47;

   if (!FUNC_7(VAR_48, VAR_42))
   {
      FUNC_2(VAR_47);
      return ((void*)0);
   }
   FUNC_3(VAR_47, VAR_42->index);
   VAR_42->index++;


   VAR_44 = (rarch_setting_t*)FUNC_5(VAR_47,
         VAR_42->index * sizeof(rarch_setting_t));
   if (!VAR_44)
   {
      FUNC_2(VAR_47);
      return ((void*)0);
   }

   VAR_47 = VAR_44;

   return VAR_47;
}
