
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int * memory_object_t ;
typedef int memory_object_size_t ;
struct TYPE_15__ {int vo_size; scalar_t__ paging_offset; scalar_t__ pager_created; int pager_initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int **) ;
 TYPE_1__* VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,TYPE_1__*,TYPE_1__*,...) ;
 int FUNC_4 (char*,TYPE_1__*,int ,int) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int *,TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ,int ) ;
 int FUNC_10 (TYPE_1__*) ;

void
FUNC_11(
 vm_object_t VAR_7)
{
 memory_object_t VAR_8;
 vm_object_t VAR_9 = VAR_5;

 FUNC_0(VAR_7 != VAR_6);





 FUNC_7(VAR_7);
 if (VAR_7->pager_created) {




  while (!VAR_7->pager_initialized) {
   FUNC_9(VAR_7,
            VAR_4,
            VAR_2);
  }
  FUNC_8(VAR_7);
  return;
 }

 if ((uint32_t) (VAR_7->vo_size/VAR_1) !=
     (VAR_7->vo_size/VAR_1)) {







  FUNC_8(VAR_7);
  return;
 }






 VAR_7->pager_created = VAR_3;
 VAR_7->paging_offset = 0;

 FUNC_10(VAR_7);
 {

  FUNC_0((uint32_t) (VAR_7->vo_size/VAR_1) ==
         (VAR_7->vo_size/VAR_1));
  (void) FUNC_1(
   (memory_object_size_t) VAR_7->vo_size,
   &VAR_8);
  if (VAR_8 == ((void*)0)) {
   FUNC_3("vm_object_compressor_pager_create(): "
         "no pager for object %p size 0x%llx\n",
         VAR_7, (uint64_t) VAR_7->vo_size);
  }
       }







 VAR_9 = FUNC_6(VAR_8,
        VAR_7,
        VAR_7->vo_size,
        VAR_0);
 if (VAR_9 != VAR_7) {
  FUNC_3("vm_object_compressor_pager_create: mismatch (pager: %p, pager_object: %p, orig_object: %p, orig_object size: 0x%llx)\n", VAR_8, VAR_9, VAR_7, (uint64_t) VAR_7->vo_size);
 }




 FUNC_2(VAR_8);

 FUNC_5(VAR_7);




 FUNC_8(VAR_7);
}
