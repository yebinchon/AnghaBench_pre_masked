
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* fourk_pager_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_8__ {scalar_t__ mo_control; } ;
struct TYPE_9__ {int ref_count; TYPE_1__ fourk_pgr_hdr; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;

void
FUNC_7(
 fourk_pager_t VAR_8,
 boolean_t VAR_9)
{
 boolean_t VAR_10;
 int VAR_11;

 if (! VAR_9) {
  FUNC_4(&VAR_7);
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





  FUNC_0(VAR_8);

  FUNC_5(&VAR_7);
  FUNC_1(VAR_8);
 } else if (VAR_8->ref_count == 0) {





  FUNC_5(&VAR_7);
  if (VAR_8->fourk_pgr_hdr.mo_control != VAR_2) {
   FUNC_6(VAR_8->fourk_pgr_hdr.mo_control);
   VAR_8->fourk_pgr_hdr.mo_control = VAR_2;
  }
  FUNC_3(VAR_8, sizeof (*VAR_8));
  VAR_8 = VAR_1;
 } else {

  FUNC_5(&VAR_7);
 }

 if (VAR_10) {
  FUNC_2();
 }

}
