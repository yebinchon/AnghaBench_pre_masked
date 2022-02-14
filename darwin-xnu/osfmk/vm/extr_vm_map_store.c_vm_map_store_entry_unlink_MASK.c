
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef TYPE_2__* vm_map_entry_t ;
struct TYPE_13__ {scalar_t__ vme_start; struct TYPE_13__* vme_prev; } ;
struct TYPE_12__ {scalar_t__ holelistenabled; int hdr; TYPE_2__* first_free; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*,int ) ;

void
FUNC_5( vm_map_t VAR_2, vm_map_entry_t VAR_3)
{
 vm_map_t VAR_4;
 vm_map_entry_t VAR_5 = ((void*)0);
 vm_map_entry_t VAR_6 = ((void*)0);
 VAR_4 = (VAR_2);
 VAR_5 = (VAR_3);

 if (VAR_2->holelistenabled == VAR_0) {
  if (VAR_5->vme_start <= VAR_4->first_free->vme_start){
   VAR_6 = VAR_5->vme_prev;
  } else {
   VAR_6 = VAR_4->first_free;
  }
 }
 FUNC_0(&VAR_4->hdr, VAR_5);
 FUNC_4( VAR_2, VAR_3, VAR_1);
 FUNC_1(VAR_4, VAR_6);





}
