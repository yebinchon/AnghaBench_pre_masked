
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u16 ;
struct TYPE_3__ {int SlotNumber; int EnclosureLogicalID; } ;
typedef TYPE_1__ Mpi2BootDeviceEnclosureSlot_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline int
FUNC_2(u64 VAR_0, u16 VAR_1,
    Mpi2BootDeviceEnclosureSlot_t *VAR_2)
{
 return (VAR_0 == FUNC_1(VAR_2->
     EnclosureLogicalID) && VAR_1 == FUNC_0(VAR_2->
     SlotNumber)) ? 1 : 0;
}
