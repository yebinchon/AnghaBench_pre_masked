
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vm_map_address_t ;
typedef int uint64_t ;
typedef int tt_entry_t ;
typedef TYPE_1__* pmap_t ;
struct TYPE_6__ {int* tte; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (char*,TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int* FUNC_2 (TYPE_1__*,scalar_t__) ;
 size_t FUNC_3 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static inline tt_entry_t *
FUNC_4(pmap_t VAR_6,
  vm_map_address_t VAR_7)
{



 tt_entry_t *VAR_8;
 tt_entry_t VAR_9;

 VAR_8 = FUNC_2(VAR_6, VAR_7);
 VAR_9 = *VAR_8;




 if ((VAR_9 & (VAR_2 | VAR_4)) != (VAR_3 | VAR_4))
  return (VAR_5);

 VAR_8 = &((tt_entry_t*) FUNC_1(VAR_9 & VAR_0))[FUNC_3(VAR_6, VAR_7)];
 return ((tt_entry_t *)VAR_8);

}
