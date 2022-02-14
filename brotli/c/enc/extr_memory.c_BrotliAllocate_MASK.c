
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int opaque; void* (* alloc_func ) (int ,size_t) ;} ;
typedef TYPE_1__ MemoryManager ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,size_t) ;

void* FUNC_2(MemoryManager* VAR_1, size_t VAR_2) {
  void* VAR_3 = VAR_1->alloc_func(VAR_1->opaque, VAR_2);
  if (!VAR_3) FUNC_0(VAR_0);
  return VAR_3;
}
