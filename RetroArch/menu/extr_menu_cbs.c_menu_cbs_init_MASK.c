
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_22__ {scalar_t__ enum_idx; int action_sublabel_ident; int action_label_ident; int action_get_title_ident; int action_get_value_ident; int action_refresh_ident; int action_deferred_push_ident; int action_right_ident; int action_left_ident; int action_down_ident; int action_up_ident; int action_content_list_switch_ident; int action_info_ident; int action_select_ident; int action_start_ident; int action_scan_ident; int action_cancel_ident; int action_ok_ident; } ;
typedef TYPE_1__ menu_file_list_cbs_t ;
struct TYPE_23__ {char const* path; char const* label; unsigned int type; size_t idx; int label_hash; TYPE_1__* cbs; } ;
typedef TYPE_2__ menu_ctx_bind_t ;
typedef int file_list_t ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,char const*,char const*,unsigned int,size_t) ;
 int FUNC_2 (TYPE_1__*,char const*,char const*,unsigned int,size_t) ;
 int FUNC_3 (TYPE_1__*,char const*,char const*,unsigned int,size_t,int ) ;
 int FUNC_4 (TYPE_1__*,char const*,char const*,unsigned int,size_t) ;
 int FUNC_5 (TYPE_1__*,char const*,char const*,unsigned int,size_t) ;
 int FUNC_6 (TYPE_1__*,char const*,char const*,unsigned int,size_t) ;
 int FUNC_7 (TYPE_1__*,char const*,char const*,unsigned int,size_t) ;
 int FUNC_8 (TYPE_1__*,char const*,char const*,unsigned int,size_t,char const*,int ) ;
 int FUNC_9 (TYPE_1__*,char const*,char const*,unsigned int,size_t,int ,int ) ;
 int FUNC_10 (TYPE_1__*,char const*,char const*,unsigned int,size_t) ;
 int FUNC_11 (TYPE_1__*,char const*,char const*,unsigned int,size_t,char const*,int ) ;
 int FUNC_12 (TYPE_1__*,char const*,char const*,unsigned int,size_t) ;
 int FUNC_13 (TYPE_1__*,char const*,char const*,unsigned int,size_t) ;
 int FUNC_14 (TYPE_1__*,char const*,char const*,unsigned int,size_t) ;
 int FUNC_15 (TYPE_1__*,char const*,char const*,unsigned int,size_t) ;
 int FUNC_16 (TYPE_1__*,char const*,char const*,unsigned int,size_t,int ) ;
 int FUNC_17 (TYPE_1__*,char const*,char const*,unsigned int,size_t) ;
 int FUNC_18 (char const*,char*,int ) ;
 int FUNC_19 (int ,TYPE_2__*) ;
 int FUNC_20 (int *,char const**,int *,int*,int *) ;
 int FUNC_21 (char const*) ;
 int FUNC_22 (scalar_t__) ;
 int FUNC_23 (char const*) ;

void FUNC_24(void *VAR_2,
      menu_file_list_cbs_t *VAR_3,
      const char *VAR_4, const char *VAR_5,
      unsigned VAR_6, size_t VAR_7)
{
   menu_ctx_bind_t VAR_8;
   const char *VAR_9 = ((void*)0);
   const char *VAR_10 = ((void*)0);
   uint32_t VAR_11 = 0;
   uint32_t VAR_12 = 0;
   enum msg_hash_enums VAR_13 = VAR_0;
   file_list_t *VAR_14 = (file_list_t*)VAR_2;
   if (!VAR_14)
      return;

   FUNC_20(((void*)0), &VAR_10, ((void*)0), &VAR_13, ((void*)0));

   if (!VAR_5 || !VAR_10)
      return;

   VAR_11 = FUNC_21(VAR_5);
   VAR_12 = FUNC_21(VAR_10);





   VAR_9 = (!FUNC_23(VAR_5)) ? VAR_5 : VAR_4;
   FUNC_9(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_11, VAR_12);

   FUNC_18(VAR_9, "OK", VAR_3->action_ok_ident);



   FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

   FUNC_18(VAR_9, "CANCEL", VAR_3->action_cancel_ident);



   FUNC_12(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

   FUNC_18(VAR_9, "SCAN", VAR_3->action_scan_ident);



   FUNC_14(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

   FUNC_18(VAR_9, "START", VAR_3->action_start_ident);



   FUNC_13(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

   FUNC_18(VAR_9, "SELECT", VAR_3->action_select_ident);



   FUNC_6(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

   FUNC_18(VAR_9, "INFO", VAR_3->action_info_ident);



   FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

   FUNC_18(VAR_9, "CONTENT SWITCH", VAR_3->action_content_list_switch_ident);



   FUNC_17(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

   FUNC_18(VAR_9, "UP", VAR_3->action_up_ident);



   FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

   FUNC_18(VAR_9, "DOWN", VAR_3->action_down_ident);



   FUNC_8(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_10, VAR_11);

   FUNC_18(VAR_9, "LEFT", VAR_3->action_left_ident);



   FUNC_11(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_10, VAR_11);

   FUNC_18(VAR_9, "RIGHT", VAR_3->action_right_ident);



   FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_11);

   FUNC_18(VAR_9, "DEFERRED PUSH", VAR_3->action_deferred_push_ident);



   FUNC_10(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

   FUNC_18(VAR_9, "REFRESH", VAR_3->action_refresh_ident);



   FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

   FUNC_18(VAR_9, "GET VALUE", VAR_3->action_get_value_ident);



   FUNC_16(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_11);

   FUNC_18(VAR_9, "GET TITLE", VAR_3->action_get_title_ident);



   FUNC_7(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

   FUNC_18(VAR_9, "LABEL", VAR_3->action_label_ident);



   FUNC_15(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

   FUNC_18(VAR_9, "SUBLABEL", VAR_3->action_sublabel_ident);

   VAR_8.cbs = VAR_3;
   VAR_8.path = VAR_4;
   VAR_8.label = VAR_5;
   VAR_8.type = VAR_6;
   VAR_8.idx = VAR_7;
   VAR_8.label_hash = VAR_11;

   FUNC_19(VAR_1, &VAR_8);
}
