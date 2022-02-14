
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {TYPE_1__* item; } ;
typedef TYPE_2__ kcdata_iter_t ;
struct TYPE_6__ {int type; int size; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__) ;
 int FUNC_1 (TYPE_2__) ;

__attribute__((used)) static inline
uint32_t FUNC_2(kcdata_iter_t VAR_1) {
 if (VAR_1.item->type == VAR_0)
  return FUNC_1(VAR_1);
 if (FUNC_0(VAR_1) == 0)
  return 0;
 return (VAR_1.item->size - (VAR_1.item->type & 0xf)) / FUNC_0(VAR_1);
}
