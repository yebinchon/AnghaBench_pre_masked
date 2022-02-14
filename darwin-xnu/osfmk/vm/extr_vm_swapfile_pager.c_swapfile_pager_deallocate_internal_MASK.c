
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* swapfile_pager_t ;
typedef int boolean_t ;
struct TYPE_8__ {scalar_t__ mo_control; } ;
struct TYPE_9__ {int ref_count; TYPE_1__ swp_pgr_hdr; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*) ;

void
FUNC_6(
 swapfile_pager_t VAR_3,
 boolean_t VAR_4)
{
 if (! VAR_4) {
  FUNC_1(&VAR_2);
 }


 VAR_3->ref_count--;

 if (VAR_3->ref_count == 1) {





  FUNC_4(VAR_3);

  FUNC_2(&VAR_2);
  FUNC_5(VAR_3);
 } else if (VAR_3->ref_count == 0) {





  FUNC_2(&VAR_2);
  if (VAR_3->swp_pgr_hdr.mo_control != VAR_0) {
   FUNC_3(VAR_3->swp_pgr_hdr.mo_control);
   VAR_3->swp_pgr_hdr.mo_control = VAR_0;
  }
  FUNC_0(VAR_3, sizeof (*VAR_3));
  VAR_3 = VAR_1;
 } else {

  FUNC_2(&VAR_2);
 }


}
