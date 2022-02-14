
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u_long ;
struct TYPE_9__ {void* t_pri; void* t_neg; } ;
struct TYPE_8__ {scalar_t__ s2u; scalar_t__ s2l; void* fm_st3l; void* fm_st3u; void* fm_st2l; void* fm_st2u; void* fm_st1l; void* fm_st1u; int mdr3init; scalar_t__ frselreg_init; scalar_t__ func_addr; int group_addr; int rx_mode; int nsa_mode; } ;
struct TYPE_7__ {scalar_t__ mac_r_restart_counter; scalar_t__ mac_nobuf_counter; } ;
struct TYPE_10__ {TYPE_4__ mac_pa; scalar_t__ mac_ring_is_up; TYPE_3__ fp; TYPE_2__ mac_ct; } ;
struct TYPE_6__ {scalar_t__ sas; } ;
struct s_smc {TYPE_5__ hw; TYPE_1__ s; } ;
typedef void* HW_PTR ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct s_smc*) ;
 int FUNC_2 (struct s_smc*,int) ;
 int FUNC_3 (struct s_smc*) ;
 int FUNC_4 (struct s_smc*) ;

int FUNC_5(struct s_smc *VAR_11)
{
 VAR_11->hw.fp.nsa_mode = VAR_8 ;
 VAR_11->hw.fp.rx_mode = VAR_6 ;
 VAR_11->hw.fp.group_addr = VAR_10 ;
 VAR_11->hw.fp.func_addr = 0 ;
 VAR_11->hw.fp.frselreg_init = 0 ;

 FUNC_1(VAR_11) ;
 if (VAR_11->s.sas == VAR_9)
  VAR_11->hw.fp.mdr3init |= VAR_7 ;

 VAR_11->hw.mac_ct.mac_nobuf_counter = 0 ;
 VAR_11->hw.mac_ct.mac_r_restart_counter = 0 ;

 VAR_11->hw.fp.fm_st1u = (HW_PTR) FUNC_0(VAR_1) ;
 VAR_11->hw.fp.fm_st1l = (HW_PTR) FUNC_0(VAR_0) ;
 VAR_11->hw.fp.fm_st2u = (HW_PTR) FUNC_0(VAR_3) ;
 VAR_11->hw.fp.fm_st2l = (HW_PTR) FUNC_0(VAR_2) ;
 VAR_11->hw.fp.fm_st3u = (HW_PTR) FUNC_0(VAR_5) ;
 VAR_11->hw.fp.fm_st3l = (HW_PTR) FUNC_0(VAR_4) ;

 VAR_11->hw.fp.s2l = VAR_11->hw.fp.s2u = 0 ;
 VAR_11->hw.mac_ring_is_up = 0 ;

 FUNC_3(VAR_11) ;


 VAR_11->hw.mac_pa.t_neg = (u_long)0 ;
 VAR_11->hw.mac_pa.t_pri = (u_long)0 ;


 FUNC_4(VAR_11) ;

 return(FUNC_2(VAR_11,1)) ;

}
