
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vm_map_t ;
typedef int kern_return_t ;
struct TYPE_4__ {scalar_t__ nentries; int page_shift; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;

kern_return_t
FUNC_0(
 vm_map_t VAR_2,
 int VAR_3)
{
 if (VAR_2->hdr.nentries != 0) {

  return VAR_0;
 }

 VAR_2->hdr.page_shift = VAR_3;

 return VAR_1;
}
