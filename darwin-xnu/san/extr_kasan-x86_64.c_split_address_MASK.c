
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
struct TYPE_3__ {int pml4; int pdpt; int pd; int pt; } ;
typedef TYPE_1__ split_addr_t ;



__attribute__((used)) static split_addr_t
FUNC_0(vm_offset_t VAR_0)
{
 split_addr_t VAR_1;

 VAR_1.pml4 = (VAR_0 >> 39) & 0x1ff;
 VAR_1.pdpt = (VAR_0 >> 30) & 0x1ff;
 VAR_1.pd = (VAR_0 >> 21) & 0x1ff;
 VAR_1.pt = (VAR_0 >> 12) & 0x1ff;


 return VAR_1;
}
