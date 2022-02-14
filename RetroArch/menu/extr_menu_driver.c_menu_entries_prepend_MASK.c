
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int enum_idx; int setting; } ;
typedef TYPE_1__ menu_file_list_cbs_t ;
struct TYPE_7__ {char const* path; char const* label; size_t idx; unsigned int entry_type; int * fullpath; int * list; } ;
typedef TYPE_2__ menu_ctx_list_t ;
typedef int file_list_t ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,char const*,char const*,unsigned int,size_t,size_t) ;
 int FUNC_3 (int *,size_t,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*,char const*,char const*,unsigned int,size_t) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char const**,int *,int *,int *,int *) ;
 int FUNC_8 (int) ;
 int * FUNC_9 (char const*) ;
 int FUNC_10 (char const*) ;

void FUNC_11(file_list_t *VAR_0,
      const char *VAR_1, const char *VAR_2,
      enum msg_hash_enums VAR_3,
      unsigned VAR_4, size_t VAR_5, size_t VAR_6)
{
   menu_ctx_list_t VAR_7;
   size_t VAR_8;
   const char *VAR_9 = ((void*)0);
   menu_file_list_cbs_t *VAR_10 = ((void*)0);
   if (!VAR_0 || !VAR_2)
      return;

   FUNC_2(VAR_0, VAR_1, VAR_2, VAR_4, VAR_5, VAR_6);

   FUNC_7(&VAR_9, ((void*)0), ((void*)0), ((void*)0), ((void*)0));

   VAR_8 = 0;

   VAR_7.fullpath = ((void*)0);

   if (!FUNC_10(VAR_9))
      VAR_7.fullpath = FUNC_9(VAR_9);
   VAR_7.list = VAR_0;
   VAR_7.path = VAR_1;
   VAR_7.label = VAR_2;
   VAR_7.idx = VAR_8;
   VAR_7.entry_type = VAR_4;

   FUNC_6(&VAR_7);

   if (VAR_7.fullpath)
      FUNC_4(VAR_7.fullpath);

   FUNC_1(VAR_0, VAR_8);
   VAR_10 = (menu_file_list_cbs_t*)
      FUNC_0(1, sizeof(menu_file_list_cbs_t));

   if (!VAR_10)
      return;

   FUNC_3(VAR_0, VAR_8, VAR_10);

   VAR_10->enum_idx = VAR_3;
   VAR_10->setting = FUNC_8(VAR_10->enum_idx);

   FUNC_5(VAR_0, VAR_10, VAR_1, VAR_2, VAR_4, VAR_8);
}
