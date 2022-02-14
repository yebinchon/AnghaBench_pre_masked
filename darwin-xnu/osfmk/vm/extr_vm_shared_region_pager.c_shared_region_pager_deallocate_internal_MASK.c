
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* shared_region_pager_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_8__ {scalar_t__ mo_control; } ;
struct TYPE_9__ {int ref_count; TYPE_1__ sc_pgr_hdr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 () ;

void
FUNC_7(
 shared_region_pager_t VAR_8,
 boolean_t VAR_9)
{
 boolean_t VAR_10;
 int VAR_11;

 if (! VAR_9) {
  FUNC_1(&VAR_7);
 }

 VAR_11 = (VAR_5 -
     VAR_6);
 if (VAR_11 > VAR_4) {

  VAR_10 = VAR_3;
 } else {
  VAR_10 = VAR_0;
 }


 VAR_8->ref_count--;

 if (VAR_8->ref_count == 1) {





  FUNC_4(VAR_8);

  FUNC_2(&VAR_7);
  FUNC_5(VAR_8);
 } else if (VAR_8->ref_count == 0) {





  FUNC_2(&VAR_7);
  if (VAR_8->sc_pgr_hdr.mo_control != VAR_1) {
   FUNC_3(VAR_8->sc_pgr_hdr.mo_control);
   VAR_8->sc_pgr_hdr.mo_control = VAR_1;
  }
  FUNC_0(VAR_8, sizeof (*VAR_8));
  VAR_8 = VAR_2;
 } else {

  FUNC_2(&VAR_7);
 }

 if (VAR_10) {
  FUNC_6();
 }

}
