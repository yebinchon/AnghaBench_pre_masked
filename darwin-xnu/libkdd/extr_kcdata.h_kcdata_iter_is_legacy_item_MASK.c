
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {TYPE_1__* item; } ;
typedef TYPE_2__ kcdata_iter_t ;
struct TYPE_4__ {scalar_t__ size; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline int
FUNC_1(kcdata_iter_t VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4 = VAR_3 + FUNC_0(VAR_3);
 return (VAR_2.item->size == VAR_4 &&
  (VAR_2.item->flags & (VAR_1 | VAR_0)) == 0);

}
