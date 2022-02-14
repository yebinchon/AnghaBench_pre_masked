
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hg2cc; int hg2fld; int undat; int uneop; int unsop; int bad_term; int bad_seq; int rem_fault; int loc_fault; int pause_drp; int ovrerr; int skperr; int rcverr; int jabber; int carext; int niberr; int alnerr; int maxerr; int minerr; } ;
union cvmx_gmxx_rxx_int_en {scalar_t__ u64; TYPE_1__ s; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__) ;

void FUNC_5(int VAR_7, int VAR_8)
{
 union cvmx_gmxx_rxx_int_en VAR_9;
 FUNC_4(FUNC_1(VAR_7, VAR_8),
         FUNC_3(FUNC_1(VAR_7, VAR_8)));
 VAR_9.u64 = 0;
 if (FUNC_2(VAR_5)) {

  VAR_9.s.hg2cc = 1;
  VAR_9.s.hg2fld = 1;
  VAR_9.s.undat = 1;
  VAR_9.s.uneop = 1;
  VAR_9.s.unsop = 1;
  VAR_9.s.bad_term = 1;
  VAR_9.s.bad_seq = 1;
  VAR_9.s.rem_fault = 1;
  VAR_9.s.loc_fault = 1;
  VAR_9.s.pause_drp = 1;






  VAR_9.s.ovrerr = 1;

  VAR_9.s.skperr = 1;
  VAR_9.s.rcverr = 1;


  VAR_9.s.jabber = 1;

  VAR_9.s.carext = 1;

 }
 if (FUNC_2(VAR_0)) {
  VAR_9.s.ovrerr = 1;
  VAR_9.s.niberr = 1;
  VAR_9.s.skperr = 1;
  VAR_9.s.rcverr = 1;

  VAR_9.s.alnerr = 1;

  VAR_9.s.jabber = 1;
  VAR_9.s.maxerr = 1;
  VAR_9.s.carext = 1;
  VAR_9.s.minerr = 1;
 }
 if (FUNC_2(VAR_3)) {

  VAR_9.s.pause_drp = 1;
  VAR_9.s.ovrerr = 1;
  VAR_9.s.niberr = 1;
  VAR_9.s.skperr = 1;
  VAR_9.s.rcverr = 1;

  VAR_9.s.alnerr = 1;

  VAR_9.s.jabber = 1;

  VAR_9.s.carext = 1;

 }
 if (FUNC_2(VAR_2)) {
  VAR_9.s.ovrerr = 1;
  VAR_9.s.niberr = 1;
  VAR_9.s.skperr = 1;
  VAR_9.s.rcverr = 1;

  VAR_9.s.alnerr = 1;

  VAR_9.s.jabber = 1;
  VAR_9.s.maxerr = 1;
  VAR_9.s.carext = 1;
  VAR_9.s.minerr = 1;
 }
 if (FUNC_2(VAR_1)) {
  VAR_9.s.ovrerr = 1;
  VAR_9.s.niberr = 1;
  VAR_9.s.skperr = 1;
  VAR_9.s.rcverr = 1;

  VAR_9.s.alnerr = 1;

  VAR_9.s.jabber = 1;
  VAR_9.s.maxerr = 1;
  VAR_9.s.carext = 1;
  VAR_9.s.minerr = 1;
 }
 if (FUNC_2(VAR_6)) {

  VAR_9.s.pause_drp = 1;
  VAR_9.s.ovrerr = 1;
  VAR_9.s.niberr = 1;
  VAR_9.s.skperr = 1;
  VAR_9.s.rcverr = 1;

  VAR_9.s.alnerr = 1;

  VAR_9.s.jabber = 1;
  VAR_9.s.maxerr = 1;
  VAR_9.s.carext = 1;
  VAR_9.s.minerr = 1;
 }
 if (FUNC_2(VAR_4)) {

  VAR_9.s.hg2cc = 1;
  VAR_9.s.hg2fld = 1;
  VAR_9.s.undat = 1;
  VAR_9.s.uneop = 1;
  VAR_9.s.unsop = 1;
  VAR_9.s.bad_term = 1;
  VAR_9.s.bad_seq = 0;
  VAR_9.s.rem_fault = 1;
  VAR_9.s.loc_fault = 0;
  VAR_9.s.pause_drp = 1;






  VAR_9.s.ovrerr = 1;

  VAR_9.s.skperr = 1;
  VAR_9.s.rcverr = 1;


  VAR_9.s.jabber = 1;

  VAR_9.s.carext = 1;

 }
 FUNC_4(FUNC_0(VAR_7, VAR_8), VAR_9.u64);
}
