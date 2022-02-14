
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ lnk_st; } ;
union cvmx_pcsx_mrx_status_reg {TYPE_3__ s; void* u64; } ;
struct TYPE_10__ {scalar_t__ loopbck1; } ;
union cvmx_pcsx_mrx_control_reg {TYPE_1__ s; void* u64; } ;
struct TYPE_11__ {scalar_t__ mac_phy; scalar_t__ mode; } ;
union cvmx_pcsx_miscx_ctl_reg {TYPE_2__ s; void* u64; } ;
struct TYPE_13__ {int dup; int link_ok; int spd; scalar_t__ an_cpt; } ;
union cvmx_pcsx_anx_results_reg {TYPE_4__ s; void* u64; } ;
struct TYPE_14__ {int link_up; int full_duplex; int speed; } ;
struct TYPE_15__ {TYPE_5__ s; scalar_t__ u64; } ;
typedef TYPE_6__ cvmx_helper_link_info_t ;
struct TYPE_16__ {scalar_t__ board_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 TYPE_6__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 void* FUNC_8 (int ) ;
 TYPE_7__* FUNC_9 () ;

cvmx_helper_link_info_t FUNC_10(int VAR_1)
{
 cvmx_helper_link_info_t VAR_2;
 union cvmx_pcsx_miscx_ctl_reg VAR_3;
 int VAR_4 = FUNC_7(VAR_1);
 int VAR_5 = FUNC_6(VAR_1);
 union cvmx_pcsx_mrx_control_reg VAR_6;

 VAR_2.u64 = 0;

 if (FUNC_9()->board_type == VAR_0) {

  VAR_2.s.link_up = 1;
  VAR_2.s.full_duplex = 1;
  VAR_2.s.speed = 1000;
  return VAR_2;
 }

 VAR_6.u64 =
     FUNC_8(FUNC_2(VAR_5, VAR_4));
 if (VAR_6.s.loopbck1) {

  VAR_2.s.link_up = 1;
  VAR_2.s.full_duplex = 1;
  VAR_2.s.speed = 1000;
  return VAR_2;
 }

 VAR_3.u64 =
     FUNC_8(FUNC_1(VAR_5, VAR_4));
 if (VAR_3.s.mode) {


 } else {
  union cvmx_pcsx_miscx_ctl_reg VAR_7;
  VAR_7.u64 =
      FUNC_8(FUNC_1(VAR_5, VAR_4));
  if (VAR_7.s.mac_phy) {

   union cvmx_pcsx_mrx_status_reg VAR_8;
   union cvmx_pcsx_anx_results_reg VAR_9;





   VAR_8.u64 =
       FUNC_8(FUNC_3
       (VAR_5, VAR_4));
   if (VAR_8.s.lnk_st == 0) {
    if (FUNC_5
        (VAR_4, VAR_5) != 0)
     return VAR_2;
   }


   VAR_9.u64 =
       FUNC_8(FUNC_0
       (VAR_5, VAR_4));
   if (VAR_9.s.an_cpt) {




    VAR_2.s.full_duplex =
        VAR_9.s.dup;
    VAR_2.s.link_up =
        VAR_9.s.link_ok;
    switch (VAR_9.s.spd) {
    case 0:
     VAR_2.s.speed = 10;
     break;
    case 1:
     VAR_2.s.speed = 100;
     break;
    case 2:
     VAR_2.s.speed = 1000;
     break;
    default:
     VAR_2.s.speed = 0;
     VAR_2.s.link_up = 0;
     break;
    }
   } else {




    VAR_2.s.speed = 0;
    VAR_2.s.link_up = 0;
   }
  } else {

   VAR_2 = FUNC_4(VAR_1);
  }
 }
 return VAR_2;
}
