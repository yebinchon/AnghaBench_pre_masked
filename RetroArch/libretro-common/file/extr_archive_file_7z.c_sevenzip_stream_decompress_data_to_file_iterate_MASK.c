
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s; } ;
struct sevenzip_context_t {scalar_t__ output; TYPE_2__* handle; int allocTempImp; int allocImp; int block_index; int index; TYPE_1__ lookStream; int db; } ;
struct TYPE_4__ {scalar_t__ data; } ;
typedef scalar_t__ SRes ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int ,int *,scalar_t__*,size_t*,size_t*,size_t*,int *,int *) ;

__attribute__((used)) static int FUNC_1(void *VAR_2)
{
   struct sevenzip_context_t *VAR_3 =
         (struct sevenzip_context_t*)VAR_2;

   SRes VAR_4 = VAR_0;
   size_t VAR_5 = 0;
   size_t VAR_6 = 0;
   size_t VAR_7 = 0;

   VAR_4 = FUNC_0(&VAR_3->db,
         &VAR_3->lookStream.s, VAR_3->index,
         &VAR_3->block_index, &VAR_3->output,
         &VAR_5, &VAR_6, &VAR_7,
         &VAR_3->allocImp, &VAR_3->allocTempImp);

   if (VAR_4 != VAR_1)
      return 0;

   if (VAR_3->handle)
      VAR_3->handle->data = VAR_3->output + VAR_6;

   return 1;
}
