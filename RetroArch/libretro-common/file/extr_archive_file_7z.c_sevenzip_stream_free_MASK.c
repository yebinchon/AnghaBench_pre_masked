
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int file; } ;
struct sevenzip_context_t {TYPE_1__ archiveStream; int allocImp; int db; TYPE_2__* handle; int * output; } ;
struct TYPE_4__ {int * data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
   struct sevenzip_context_t *VAR_1 = (struct sevenzip_context_t*)VAR_0;

   if (!VAR_1)
      return;

   if (VAR_1->output)
   {
      FUNC_1(&VAR_1->allocImp, VAR_1->output);
      VAR_1->output = ((void*)0);
      VAR_1->handle->data = ((void*)0);
   }

   FUNC_2(&VAR_1->db, &VAR_1->allocImp);
   FUNC_0(&VAR_1->archiveStream.file);
}
