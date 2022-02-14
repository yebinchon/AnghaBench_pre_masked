
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {TYPE_1__* item; } ;
typedef TYPE_2__ kcdata_iter_t ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline
uint32_t FUNC_0(kcdata_iter_t VAR_1) {
 return (VAR_1.item->flags) & VAR_0;
}
