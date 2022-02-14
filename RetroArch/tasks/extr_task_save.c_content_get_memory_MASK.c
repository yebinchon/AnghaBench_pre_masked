
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ram_type {int type; int path; } ;
struct TYPE_9__ {scalar_t__ size; int data; int id; } ;
typedef TYPE_3__ retro_ctx_memory_info_t ;
struct TYPE_10__ {TYPE_2__* elems; } ;
struct TYPE_7__ {int i; } ;
struct TYPE_8__ {int data; TYPE_1__ attr; } ;


 int FUNC_0 (TYPE_3__*) ;
 TYPE_4__* VAR_0 ;

__attribute__((used)) static bool FUNC_1(retro_ctx_memory_info_t *VAR_1,
      struct ram_type *VAR_2, unsigned VAR_3)
{
   VAR_2->type = VAR_0->elems[VAR_3].attr.i;
   VAR_2->path = VAR_0->elems[VAR_3].data;

   VAR_1->id = VAR_2->type;

   FUNC_0(VAR_1);

   if (!VAR_1->data || VAR_1->size == 0)
      return 0;

   return 1;
}
