
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


union string_list_elem_attr {int i; } ;
struct video_shader {int feedback_pass; unsigned int passes; TYPE_8__* pass; int path; } ;
struct string_list {int dummy; } ;
struct TYPE_12__ {int video_shader_watch_files; } ;
struct TYPE_14__ {TYPE_1__ bools; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_15__ {int path; } ;
typedef TYPE_4__ config_file_t ;
struct TYPE_13__ {int path; } ;
struct TYPE_16__ {TYPE_2__ source; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_4__*,char*,int*) ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (TYPE_4__*,char*,unsigned int*) ;
 int * VAR_5 ;
 int FUNC_5 (struct string_list*,int,int **) ;
 int FUNC_6 (struct video_shader*,int ,int) ;
 int FUNC_7 (struct string_list*,int ,union string_list_elem_attr) ;
 int FUNC_8 (struct string_list*) ;
 struct string_list* FUNC_9 () ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (TYPE_4__*,TYPE_8__*,unsigned int) ;
 int FUNC_12 (TYPE_4__*,struct video_shader*) ;

bool FUNC_13(config_file_t *VAR_6,
      struct video_shader *VAR_7)
{
   unsigned VAR_8;
   union string_list_elem_attr VAR_9;
   unsigned VAR_10 = 0;
   settings_t *VAR_11 = FUNC_3();
   struct string_list *VAR_12 = ((void*)0);
   bool VAR_13 = VAR_11->bools.video_shader_watch_files;

   FUNC_6(VAR_7, 0, sizeof(*VAR_7));

   if (!FUNC_4(VAR_6, "shaders", &VAR_10))
   {
      FUNC_1("Cannot find \"shaders\" param.\n");
      return 0;
   }

   if (!VAR_10)
   {
      FUNC_1("Need to define at least 1 shader.\n");
      return 0;
   }

   if (!FUNC_2(VAR_6, "feedback_pass",
            &VAR_7->feedback_pass))
      VAR_7->feedback_pass = -1;

   VAR_7->passes = FUNC_0(VAR_10, VAR_0);
   VAR_9.i = 0;

   FUNC_10(VAR_7->path, VAR_6->path, sizeof(VAR_7->path));

   if (VAR_13)
   {
      if (VAR_5)
         FUNC_5(((void*)0),
               0, &VAR_5);

      VAR_5 = ((void*)0);
      VAR_12 = FUNC_9();
      FUNC_7(VAR_12, VAR_6->path, VAR_9);
   }

   for (VAR_8 = 0; VAR_8 < VAR_7->passes; VAR_8++)
   {
      if (!FUNC_11(VAR_6, &VAR_7->pass[VAR_8], VAR_8))
      {
         if (VAR_12)
         {
            FUNC_8(VAR_12);
            VAR_12 = ((void*)0);
         }
         return 0;
      }

      if (VAR_13 && VAR_12)
         FUNC_7(VAR_12,
               VAR_7->pass[VAR_8].source.path, VAR_9);
   }

   if (VAR_13)
   {
      int VAR_14 = VAR_3 |
                  VAR_4 |
                  VAR_2 |
                  VAR_1;

      FUNC_5(VAR_12,
            VAR_14, &VAR_5);
      if (VAR_12)
         FUNC_8(VAR_12);
   }

   if (!FUNC_12(VAR_6, VAR_7))
      return 0;

   return 1;
}
