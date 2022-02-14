
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* shared_region_pager_t ;
struct TYPE_4__ {int mo_control; } ;
struct TYPE_5__ {int is_ready; scalar_t__ backing_object; TYPE_1__ sc_pgr_hdr; int is_mapped; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__) ;

void
FUNC_3(
 shared_region_pager_t VAR_1)
{
 FUNC_0(VAR_1->is_ready);
 FUNC_0(!VAR_1->is_mapped);

 if (VAR_1->backing_object != VAR_0) {
  FUNC_2(VAR_1->backing_object);
  VAR_1->backing_object = VAR_0;
 }

 FUNC_1(VAR_1->sc_pgr_hdr.mo_control, 0);
}
