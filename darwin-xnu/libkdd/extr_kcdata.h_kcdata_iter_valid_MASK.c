
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kcdata_item {int dummy; } ;
struct TYPE_5__ {scalar_t__ end; TYPE_1__* item; } ;
typedef TYPE_2__ kcdata_iter_t ;
struct TYPE_4__ {uintptr_t size; } ;



__attribute__((used)) static inline
int FUNC_0(kcdata_iter_t VAR_0) {
 return
  ( (uintptr_t)VAR_0.item + sizeof(struct kcdata_item) <= (uintptr_t)VAR_0.end ) &&
  ( (uintptr_t)VAR_0.item + sizeof(struct kcdata_item) + VAR_0.item->size <= (uintptr_t)VAR_0.end);
}
