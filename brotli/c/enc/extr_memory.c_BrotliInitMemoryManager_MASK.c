
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int brotli_free_func ;
typedef scalar_t__ brotli_alloc_func ;
struct TYPE_3__ {scalar_t__ new_freed; scalar_t__ new_allocated; scalar_t__ perm_allocated; int is_oom; void* opaque; int free_func; scalar_t__ alloc_func; } ;
typedef TYPE_1__ MemoryManager ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

void FUNC_0(
    MemoryManager* VAR_3, brotli_alloc_func VAR_4, brotli_free_func VAR_5,
    void* VAR_6) {
  if (!VAR_4) {
    VAR_3->alloc_func = VAR_1;
    VAR_3->free_func = VAR_2;
    VAR_3->opaque = 0;
  } else {
    VAR_3->alloc_func = VAR_4;
    VAR_3->free_func = VAR_5;
    VAR_3->opaque = VAR_6;
  }

  VAR_3->is_oom = VAR_0;
  VAR_3->perm_allocated = 0;
  VAR_3->new_allocated = 0;
  VAR_3->new_freed = 0;

}
