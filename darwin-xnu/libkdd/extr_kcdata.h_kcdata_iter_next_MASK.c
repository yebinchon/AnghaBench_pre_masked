
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kcdata_item {int dummy; } ;
struct TYPE_5__ {TYPE_2__* item; } ;
typedef TYPE_1__ kcdata_iter_t ;
typedef TYPE_2__* kcdata_item_t ;
struct TYPE_6__ {scalar_t__ size; } ;



__attribute__((used)) static inline
kcdata_iter_t FUNC_0(kcdata_iter_t VAR_0) {
 VAR_0.item = (kcdata_item_t) (((uintptr_t)VAR_0.item) + sizeof(struct kcdata_item) + (VAR_0.item->size));
 return VAR_0;
}
