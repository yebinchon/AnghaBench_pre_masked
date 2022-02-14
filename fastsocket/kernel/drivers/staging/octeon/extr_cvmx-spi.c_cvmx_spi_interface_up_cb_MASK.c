
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int inf_en; } ;
union cvmx_stxx_com_ctl {void* u64; TYPE_2__ s; } ;
struct TYPE_6__ {int inf_en; } ;
union cvmx_srxx_com_ctl {void* u64; TYPE_1__ s; } ;
struct TYPE_10__ {int cnt; } ;
union cvmx_gmxx_rxx_jabber {void* u64; TYPE_5__ s; } ;
struct TYPE_8__ {int len; } ;
union cvmx_gmxx_rxx_frm_min {void* u64; TYPE_3__ s; } ;
struct TYPE_9__ {int len; } ;
union cvmx_gmxx_rxx_frm_max {void* u64; TYPE_4__ s; } ;
typedef int cvmx_spi_mode_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int ,void*) ;

int FUNC_8(int VAR_2, cvmx_spi_mode_t VAR_3)
{
 union cvmx_gmxx_rxx_frm_min VAR_4;
 union cvmx_gmxx_rxx_frm_max VAR_5;
 union cvmx_gmxx_rxx_jabber VAR_6;

 if (VAR_3 & VAR_0) {
  union cvmx_srxx_com_ctl VAR_7;
  VAR_7.u64 = FUNC_6(FUNC_3(VAR_2));
  VAR_7.s.inf_en = 1;
  FUNC_7(FUNC_3(VAR_2), VAR_7.u64);
  FUNC_5("SPI%d: Rx is now up\n", VAR_2);
 }

 if (VAR_3 & VAR_1) {
  union cvmx_stxx_com_ctl VAR_8;
  VAR_8.u64 = FUNC_6(FUNC_4(VAR_2));
  VAR_8.s.inf_en = 1;
  FUNC_7(FUNC_4(VAR_2), VAR_8.u64);
  FUNC_5("SPI%d: Tx is now up\n", VAR_2);
 }

 VAR_4.u64 = 0;
 VAR_4.s.len = 64;
 FUNC_7(FUNC_1(0, VAR_2),
         VAR_4.u64);
 VAR_5.u64 = 0;
 VAR_5.s.len = 64 * 1024 - 4;
 FUNC_7(FUNC_0(0, VAR_2),
         VAR_5.u64);
 VAR_6.u64 = 0;
 VAR_6.s.cnt = 64 * 1024 - 4;
 FUNC_7(FUNC_2(0, VAR_2), VAR_6.u64);

 return 0;
}
