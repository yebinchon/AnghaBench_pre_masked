
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_map_address_t ;
typedef int tt_entry_t ;
typedef TYPE_1__* pmap_t ;
struct TYPE_4__ {int * tte; } ;


 int FUNC_0 (char*) ;
 size_t FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static inline tt_entry_t *
FUNC_2(pmap_t VAR_0,
  vm_map_address_t VAR_1)
{






 return (&VAR_0->tte[FUNC_1(VAR_0, VAR_1)]);

}
