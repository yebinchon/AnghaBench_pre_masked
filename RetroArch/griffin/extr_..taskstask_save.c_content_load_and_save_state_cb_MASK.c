
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int retro_task_t ;
struct TYPE_2__ {size_t undo_size; int autosave; void* undo_data; int path; } ;
typedef TYPE_1__ load_task_data_t ;


 int FUNC_0 (int *,void*,void*,char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,void*,size_t,int) ;

__attribute__((used)) static void FUNC_4(retro_task_t *VAR_0,
      void *VAR_1,
      void *VAR_2, const char *VAR_3)
{
   load_task_data_t *VAR_4 = (load_task_data_t*)VAR_1;
   char *VAR_5 = FUNC_2(VAR_4->path);
   void *VAR_6 = VAR_4->undo_data;
   size_t VAR_7 = VAR_4->undo_size;
   bool VAR_8 = VAR_4->autosave;

   FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);

   FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8);

   FUNC_1(VAR_5);
}
