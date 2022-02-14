
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {TYPE_1__* item; } ;
typedef TYPE_2__ kcdata_iter_t ;
struct TYPE_4__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline uint32_t
FUNC_0(kcdata_iter_t VAR_2)
{
 if ((VAR_2.item->type & ~0xfu) == VAR_1)
  return VAR_0;
 else
  return VAR_2.item->type;
}
