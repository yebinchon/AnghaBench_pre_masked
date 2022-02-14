
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {int rst; } ;
union cvmx_pip_sft_rst {void* u64; TYPE_8__ s; } ;
struct TYPE_9__ {scalar_t__ ptr; } ;
union cvmx_ipd_wqe_ptr_valid {TYPE_1__ s; void* u64; } ;
struct TYPE_14__ {int cena; int raddr; int max_cnts; int wraddr; int praddr; scalar_t__ ptr; } ;
union cvmx_ipd_pwp_ptr_fifo_ctl {void* u64; TYPE_6__ s; } ;
struct TYPE_13__ {int wqe_pcnt; int pfif_cnt; int pkt_pcnt; scalar_t__ pktv_cnt; scalar_t__ wqev_cnt; } ;
union cvmx_ipd_ptr_count {TYPE_5__ s; void* u64; } ;
struct TYPE_11__ {int max_pkt; int cena; int raddr; scalar_t__ ptr; } ;
union cvmx_ipd_prc_port_ptr_fifo_ctl {void* u64; TYPE_3__ s; } ;
struct TYPE_12__ {int cena; int raddr; int praddr; int max_pkt; scalar_t__ ptr; } ;
union cvmx_ipd_prc_hold_ptr_fifo_ctl {void* u64; TYPE_4__ s; } ;
struct TYPE_10__ {int ptr; } ;
union cvmx_ipd_pkt_ptr_valid {TYPE_2__ s; void* u64; } ;
struct TYPE_15__ {int reset; scalar_t__ no_wptr; } ;
union cvmx_ipd_ctl_status {void* u64; TYPE_7__ s; } ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,void*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static inline void FUNC_6(void)
{

 if (!FUNC_0(VAR_10)
     && !FUNC_0(VAR_11)) {
  int VAR_13 = 0;
  union cvmx_ipd_ptr_count VAR_14;
  VAR_14.u64 = FUNC_3(VAR_6);


  if (FUNC_5(VAR_12)) {
   union cvmx_ipd_ctl_status VAR_15;
   VAR_15.u64 = FUNC_3(VAR_2);
   if (VAR_15.s.no_wptr)
    VAR_13 = 1;
  }


  if (VAR_14.s.wqev_cnt) {
   union cvmx_ipd_wqe_ptr_valid VAR_16;
   VAR_16.u64 =
       FUNC_3(VAR_8);
   if (VAR_13)
    FUNC_1(FUNC_2
           ((uint64_t) VAR_16.s.
            ptr << 7), VAR_0,
           0);
   else
    FUNC_1(FUNC_2
           ((uint64_t) VAR_16.s.
            ptr << 7), VAR_1, 0);
  }


  if (VAR_14.s.wqe_pcnt) {
   int VAR_17;
   union cvmx_ipd_pwp_ptr_fifo_ctl VAR_18;
   VAR_18.u64 =
       FUNC_3(VAR_7);
   for (VAR_17 = 0; VAR_17 < VAR_14.s.wqe_pcnt; VAR_17++) {
    VAR_18.s.cena = 0;
    VAR_18.s.raddr =
        VAR_18.s.max_cnts +
        (VAR_18.s.wraddr +
         VAR_17) % VAR_18.s.max_cnts;
    FUNC_4(VAR_7,
            VAR_18.u64);
    VAR_18.u64 =
        FUNC_3(VAR_7);
    if (VAR_13)
     FUNC_1(FUNC_2
            ((uint64_t)
             VAR_18.s.
             ptr << 7),
            VAR_0, 0);
    else
     FUNC_1(FUNC_2
            ((uint64_t)
             VAR_18.s.
             ptr << 7),
            VAR_1, 0);
   }
   VAR_18.s.cena = 1;
   FUNC_4(VAR_7,
           VAR_18.u64);
  }


  if (VAR_14.s.pktv_cnt) {
   union cvmx_ipd_pkt_ptr_valid VAR_19;
   VAR_19.u64 =
       FUNC_3(VAR_3);
   FUNC_1(FUNC_2
          (VAR_19.s.ptr << 7),
          VAR_0, 0);
  }


  if (1) {
   int VAR_20;
   union cvmx_ipd_prc_port_ptr_fifo_ctl
       VAR_21;
   VAR_21.u64 =
       FUNC_3(VAR_5);

   for (VAR_20 = 0; VAR_20 < VAR_21.s.max_pkt;
        VAR_20++) {
    VAR_21.s.cena = 0;
    VAR_21.s.raddr =
        VAR_20 % VAR_21.s.max_pkt;
    FUNC_4(VAR_5,
            VAR_21.u64);
    VAR_21.u64 =
        FUNC_3
        (VAR_5);
    FUNC_1(FUNC_2
           ((uint64_t)
            VAR_21.s.
            ptr << 7), VAR_0,
           0);
   }
   VAR_21.s.cena = 1;
   FUNC_4(VAR_5,
           VAR_21.u64);
  }


  if (VAR_14.s.pfif_cnt) {
   int VAR_22;
   union cvmx_ipd_prc_hold_ptr_fifo_ctl
       VAR_23;

   VAR_23.u64 =
       FUNC_3(VAR_4);

   for (VAR_22 = 0; VAR_22 < VAR_14.s.pfif_cnt; VAR_22++) {
    VAR_23.s.cena = 0;
    VAR_23.s.raddr =
        (VAR_23.s.praddr +
         VAR_22) % VAR_23.s.max_pkt;
    FUNC_4(VAR_4,
            VAR_23.u64);
    VAR_23.u64 =
        FUNC_3
        (VAR_4);
    FUNC_1(FUNC_2
           ((uint64_t)
            VAR_23.s.
            ptr << 7), VAR_0,
           0);
   }
   VAR_23.s.cena = 1;
   FUNC_4(VAR_4,
           VAR_23.u64);
  }


  if (VAR_14.s.pkt_pcnt) {
   int VAR_24;
   union cvmx_ipd_pwp_ptr_fifo_ctl VAR_25;
   VAR_25.u64 =
       FUNC_3(VAR_7);

   for (VAR_24 = 0; VAR_24 < VAR_14.s.pkt_pcnt; VAR_24++) {
    VAR_25.s.cena = 0;
    VAR_25.s.raddr =
        (VAR_25.s.praddr +
         VAR_24) % VAR_25.s.max_cnts;
    FUNC_4(VAR_7,
            VAR_25.u64);
    VAR_25.u64 =
        FUNC_3(VAR_7);
    FUNC_1(FUNC_2
           ((uint64_t) VAR_25.
            s.ptr << 7),
           VAR_0, 0);
   }
   VAR_25.s.cena = 1;
   FUNC_4(VAR_7,
           VAR_25.u64);
  }


  {
   union cvmx_ipd_ctl_status VAR_26;
   VAR_26.u64 = FUNC_3(VAR_2);
   VAR_26.s.reset = 1;
   FUNC_4(VAR_2, VAR_26.u64);
  }


  {
   union cvmx_pip_sft_rst VAR_27;
   VAR_27.u64 = FUNC_3(VAR_9);
   VAR_27.s.rst = 1;
   FUNC_4(VAR_9, VAR_27.u64);
  }
 }
}
