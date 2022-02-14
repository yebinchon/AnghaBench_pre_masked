
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
typedef TYPE_3__* vm_ghost_t ;
struct TYPE_16__ {int pcs_updated_phantom_state; } ;
struct TYPE_15__ {int vm_phantom_cache_found_ghost; } ;
struct TYPE_14__ {int g_pages_held; } ;
struct TYPE_13__ {scalar_t__ phantom_isssd; } ;
struct TYPE_12__ {size_t vmp_offset; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int,int *) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 int* VAR_3 ;
 TYPE_9__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_7 ;
 TYPE_7__ VAR_8 ;
 TYPE_3__* FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ VAR_9 ;

void
FUNC_5(vm_page_t VAR_10)
{
 int VAR_11;
 vm_ghost_t VAR_12;
 vm_object_t VAR_13;

 VAR_13 = FUNC_2(VAR_10);

 FUNC_0(&VAR_7, VAR_0);
 FUNC_3(VAR_13);

 if (VAR_9 == 0)
  return;

 VAR_11 = VAR_3[(VAR_10->vmp_offset >> VAR_1) & VAR_2];

 if ( (VAR_12 = FUNC_4(VAR_10, VAR_11)) ) {

  VAR_12->g_pages_held &= ~VAR_11;

  VAR_4.pcs_updated_phantom_state++;
  VAR_8.vm_phantom_cache_found_ghost++;

  if (VAR_13->phantom_isssd)
   FUNC_1(1, &VAR_6);
  else
   FUNC_1(1, &VAR_5);
 }
}
