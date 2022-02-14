
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int video_info_t ;
struct string_list {size_t size; TYPE_2__* elems; } ;
struct TYPE_8__ {scalar_t__ video_hard_sync; } ;
struct TYPE_10__ {TYPE_1__ bools; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_11__ {scalar_t__ core_context_in_use; scalar_t__ renderchain_data; void* have_sync; void* support_unpack_row_length; void* have_es2_compat; void* have_mipmap; void* have_full_npot_support; } ;
typedef TYPE_4__ gl_t ;
typedef int gl2_renderchain_data_t ;
struct TYPE_9__ {char const* data; } ;
typedef scalar_t__ GLint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 TYPE_3__* FUNC_2 () ;
 int FUNC_3 (TYPE_4__*,int *,char const*,int const*) ;
 int FUNC_4 (int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (struct string_list*) ;
 struct string_list* FUNC_9 (char const*,char*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;

__attribute__((used)) static bool FUNC_12(gl_t *VAR_8, const char *VAR_9, const video_info_t *VAR_10)
{
   settings_t *VAR_11 = FUNC_2();
   VAR_8->have_full_npot_support = FUNC_7(VAR_2);
   VAR_8->have_mipmap = FUNC_7(VAR_3);
   VAR_8->have_es2_compat = FUNC_7(VAR_1);
   VAR_8->support_unpack_row_length = FUNC_7(VAR_5);
   VAR_8->have_sync = FUNC_7(VAR_4);

   if (VAR_8->have_sync && VAR_11->bools.video_hard_sync)
      FUNC_0("[GL]: Using ARB_sync to reduce latency.\n");

   FUNC_11();

   FUNC_3(VAR_8,
         (gl2_renderchain_data_t*)VAR_8->renderchain_data,
         VAR_9, VAR_10);
   return 1;
}
