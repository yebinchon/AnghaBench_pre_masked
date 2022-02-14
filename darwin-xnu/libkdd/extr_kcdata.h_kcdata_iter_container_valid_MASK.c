
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {TYPE_1__* item; } ;
typedef TYPE_2__ kcdata_iter_t ;
struct TYPE_6__ {int size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__) ;
 scalar_t__ FUNC_1 (TYPE_2__) ;

__attribute__((used)) static inline
int FUNC_2(kcdata_iter_t VAR_1) {
 return
  FUNC_1(VAR_1) &&
  FUNC_0(VAR_1) == VAR_0 &&
  VAR_1.item->size >= sizeof(uint32_t);
}
