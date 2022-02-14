
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vm_map_t ;
struct TYPE_4__ {int nentries; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;



int
FUNC_0(
 vm_map_t VAR_0)
{
 return(VAR_0->hdr.nentries);
}
