
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vm_map_entry_t ;
typedef TYPE_3__* vm_map_copy_t ;
struct TYPE_8__ {int hdr; } ;
struct TYPE_7__ {int nentries; } ;
struct TYPE_9__ {TYPE_2__ c_u; TYPE_1__ cpy_hdr; } ;


 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_2 (int *) ;

void
FUNC_3( vm_map_copy_t VAR_0,vm_map_entry_t VAR_1)
{
 int VAR_2 = VAR_0->cpy_hdr.nentries;
 FUNC_0(VAR_0, VAR_1, VAR_2);





}
