
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int setting; int enum_idx; } ;
typedef TYPE_1__ menu_file_list_cbs_t ;
struct TYPE_13__ {char const* path; char const* label; size_t idx; unsigned int entry_type; int * fullpath; TYPE_3__* list; } ;
typedef TYPE_2__ menu_ctx_list_t ;
struct TYPE_14__ {int size; } ;
typedef TYPE_3__ file_list_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_3__*,char const*,char const*,unsigned int,size_t,size_t) ;
 int FUNC_2 (TYPE_3__*,size_t) ;
 int FUNC_3 (TYPE_3__*,size_t,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,TYPE_1__*,char const*,char const*,unsigned int,size_t) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char const**,int *,int *,int *,int *) ;
 int FUNC_8 (char const*) ;
 int * FUNC_9 (char const*) ;
 int FUNC_10 (char const*) ;

void FUNC_11(file_list_t *VAR_1, const char *VAR_2, const char *VAR_3,
      unsigned VAR_4, size_t VAR_5, size_t VAR_6)
{
   menu_ctx_list_t VAR_7;
   size_t VAR_8;
   const char *VAR_9 = ((void*)0);
   menu_file_list_cbs_t *VAR_10 = ((void*)0);
   if (!VAR_1 || !VAR_3)
      return;

   FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

   FUNC_7(&VAR_9, ((void*)0), ((void*)0), ((void*)0), ((void*)0));

   VAR_8 = VAR_1->size - 1;

   VAR_7.list = VAR_1;
   VAR_7.path = VAR_2;
   VAR_7.fullpath = ((void*)0);

   if (!FUNC_10(VAR_9))
      VAR_7.fullpath = FUNC_9(VAR_9);

   VAR_7.label = VAR_3;
   VAR_7.idx = VAR_8;
   VAR_7.entry_type = VAR_4;

   FUNC_6(&VAR_7);

   if (VAR_7.fullpath)
      FUNC_4(VAR_7.fullpath);

   FUNC_2(VAR_1, VAR_8);
   VAR_10 = (menu_file_list_cbs_t*)
      FUNC_0(1, sizeof(menu_file_list_cbs_t));

   if (!VAR_10)
      return;

   FUNC_3(VAR_1, VAR_8, VAR_10);

   VAR_10->enum_idx = VAR_0;
   VAR_10->setting = FUNC_8(VAR_3);

   FUNC_5(VAR_1, VAR_10, VAR_2, VAR_3, VAR_4, VAR_8);
}
