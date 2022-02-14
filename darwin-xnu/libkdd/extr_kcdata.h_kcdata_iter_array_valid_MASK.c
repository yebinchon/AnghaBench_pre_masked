
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {TYPE_1__* item; } ;
typedef TYPE_2__ kcdata_iter_t ;
struct TYPE_8__ {int size; scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__) ;
 int FUNC_1 (TYPE_2__) ;
 scalar_t__ FUNC_2 (TYPE_2__) ;
 int FUNC_3 (TYPE_2__) ;

__attribute__((used)) static inline
int FUNC_4(kcdata_iter_t VAR_1) {
 if (!FUNC_3(VAR_1))
  return 0;
 if (FUNC_2(VAR_1) != VAR_0)
  return 0;
    if (FUNC_0(VAR_1) == 0)
  return VAR_1.item->size == 0;
 if (VAR_1.item->type == VAR_0) {
  uint32_t VAR_2 = FUNC_1(VAR_1);
  if (VAR_2 == 0)
   return 0;

  return
   FUNC_0(VAR_1) <= VAR_1.item->size / VAR_2 &&
   VAR_1.item->size % FUNC_0(VAR_1) < 16;
 } else {
  return
   (VAR_1.item->type & 0xf) <= VAR_1.item->size &&
   FUNC_0(VAR_1) <= VAR_1.item->size - (VAR_1.item->type & 0xf) &&
   (VAR_1.item->size - (VAR_1.item->type & 0xf)) % FUNC_0(VAR_1) == 0;
 }
}
