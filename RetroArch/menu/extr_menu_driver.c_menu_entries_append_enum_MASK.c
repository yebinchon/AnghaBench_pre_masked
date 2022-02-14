
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int enum_idx; int setting; } ;
typedef TYPE_1__ menu_file_list_cbs_t ;
struct TYPE_13__ {char const* path; char const* label; size_t idx; unsigned int entry_type; int * fullpath; TYPE_3__* list; } ;
typedef TYPE_2__ menu_ctx_list_t ;
struct TYPE_14__ {int size; } ;
typedef TYPE_3__ file_list_t ;
typedef enum msg_hash_enums { ____Placeholder_msg_hash_enums } msg_hash_enums ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_3__*,char const*,char const*,unsigned int,size_t,size_t) ;
 int FUNC_2 (TYPE_3__*,size_t) ;
 int FUNC_3 (TYPE_3__*,size_t,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,TYPE_1__*,char const*,char const*,unsigned int,size_t) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char const**,int *,int *,int *,int *) ;
 int FUNC_8 (int) ;
 int * FUNC_9 (char const*) ;
 int FUNC_10 (char const*) ;

bool FUNC_11(file_list_t *VAR_3, const char *VAR_4,
      const char *VAR_5,
      enum msg_hash_enums VAR_6,
      unsigned VAR_7, size_t VAR_8, size_t VAR_9)
{
   menu_ctx_list_t VAR_10;
   size_t VAR_11;
   const char *VAR_12 = ((void*)0);
   menu_file_list_cbs_t *VAR_13 = ((void*)0);
   if (!VAR_3 || !VAR_5)
      return 0;

   FUNC_1(VAR_3, VAR_4, VAR_5, VAR_7, VAR_8, VAR_9);

   FUNC_7(&VAR_12, ((void*)0), ((void*)0), ((void*)0), ((void*)0));

   VAR_11 = VAR_3->size - 1;

   VAR_10.fullpath = ((void*)0);

   if (!FUNC_10(VAR_12))
      VAR_10.fullpath = FUNC_9(VAR_12);
   VAR_10.list = VAR_3;
   VAR_10.path = VAR_4;
   VAR_10.label = VAR_5;
   VAR_10.idx = VAR_11;
   VAR_10.entry_type = VAR_7;

   FUNC_6(&VAR_10);

   if (VAR_10.fullpath)
      FUNC_4(VAR_10.fullpath);

   FUNC_2(VAR_3, VAR_11);
   VAR_13 = (menu_file_list_cbs_t*)
      FUNC_0(1, sizeof(menu_file_list_cbs_t));

   FUNC_3(VAR_3, VAR_11, VAR_13);

   VAR_13->enum_idx = VAR_6;

   if ( VAR_6 != VAR_1
       && VAR_6 != VAR_0
       && VAR_6 != VAR_2)
      VAR_13->setting = FUNC_8(VAR_6);

   FUNC_5(VAR_3, VAR_13, VAR_4, VAR_5, VAR_7, VAR_11);

   return 1;
}
