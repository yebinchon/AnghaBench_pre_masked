
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct cfil_info {TYPE_1__* cfi_hash_entry; } ;
struct TYPE_2__ {scalar_t__ cfentry_lastused; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct cfil_info*,char*) ;

bool
FUNC_1(struct cfil_info *VAR_1, int VAR_2, u_int32_t VAR_3)
{
 if (VAR_1 && VAR_1->cfi_hash_entry &&
  (VAR_3 - VAR_1->cfi_hash_entry->cfentry_lastused >= (u_int32_t)VAR_2)) {



  return 1;
 }
 return 0;
}
