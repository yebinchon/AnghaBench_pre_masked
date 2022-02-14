
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_address_t ;
struct cs_blob {int csb_mem_kaddr; } ;



vm_address_t
FUNC_0(struct cs_blob *VAR_0)
{
    return VAR_0->csb_mem_kaddr;
}
