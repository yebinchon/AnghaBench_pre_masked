
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* end; scalar_t__ item; } ;
typedef TYPE_1__ kcdata_iter_t ;
typedef scalar_t__ kcdata_item_t ;



__attribute__((used)) static inline
kcdata_iter_t FUNC_0(void *VAR_0) {
 kcdata_iter_t VAR_1;
 VAR_1.item = (kcdata_item_t) VAR_0;
 VAR_1.end = (void*) (uintptr_t) ~0;
 return VAR_1;
}
