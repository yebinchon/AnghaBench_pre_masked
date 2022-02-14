
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_19__ {int pkts; } ;
union cvmx_pip_stat_inb_pktsx {TYPE_12__ s; void* u64; } ;
struct TYPE_20__ {int octs; } ;
union cvmx_pip_stat_inb_octsx {TYPE_13__ s; void* u64; } ;
struct TYPE_21__ {int errs; } ;
union cvmx_pip_stat_inb_errsx {TYPE_14__ s; void* u64; } ;
struct TYPE_23__ {int rdclr; } ;
union cvmx_pip_stat_ctl {scalar_t__ u64; TYPE_1__ s; } ;
struct TYPE_18__ {int jabber; int oversz; } ;
union cvmx_pip_stat9_prtx {TYPE_11__ s; void* u64; } ;
struct TYPE_17__ {int frag; int undersz; } ;
union cvmx_pip_stat8_prtx {TYPE_10__ s; void* u64; } ;
struct TYPE_31__ {int fcs; int h1519; } ;
union cvmx_pip_stat7_prtx {TYPE_9__ s; void* u64; } ;
struct TYPE_30__ {int h1024to1518; int h512to1023; } ;
union cvmx_pip_stat6_prtx {TYPE_8__ s; void* u64; } ;
struct TYPE_29__ {int h256to511; int h128to255; } ;
union cvmx_pip_stat5_prtx {TYPE_7__ s; void* u64; } ;
struct TYPE_28__ {int h65to127; int h64; } ;
union cvmx_pip_stat4_prtx {TYPE_6__ s; void* u64; } ;
struct TYPE_27__ {int bcst; int mcst; } ;
union cvmx_pip_stat3_prtx {TYPE_5__ s; void* u64; } ;
struct TYPE_26__ {int pkts; int raw; } ;
union cvmx_pip_stat2_prtx {TYPE_4__ s; void* u64; } ;
struct TYPE_25__ {scalar_t__ octs; } ;
union cvmx_pip_stat1_prtx {TYPE_3__ s; void* u64; } ;
struct TYPE_24__ {int drp_pkts; scalar_t__ drp_octs; } ;
union cvmx_pip_stat0_prtx {TYPE_2__ s; void* u64; } ;
typedef int uint64_t ;
struct TYPE_22__ {int dropped_packets; int packets; int inb_packets; scalar_t__ dropped_octets; scalar_t__ octets; int inb_octets; int inb_errors; int oversize_crc_packets; int oversize_packets; int runt_crc_packets; int runt_packets; int fcs_align_err_packets; int len_1519_max_packets; int len_1024_1518_packets; int len_512_1023_packets; int len_256_511_packets; int len_128_255_packets; int len_65_127_packets; int len_64_packets; int broadcast_packets; int multicast_packets; int pci_raw_packets; } ;
typedef TYPE_15__ cvmx_pip_port_status_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_0 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 () ;
 void* FUNC_14 (int ) ;
 int FUNC_15 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_16(uint64_t VAR_1, uint64_t VAR_2,
         cvmx_pip_port_status_t *VAR_3)
{
 union cvmx_pip_stat_ctl VAR_4;
 union cvmx_pip_stat0_prtx VAR_5;
 union cvmx_pip_stat1_prtx VAR_6;
 union cvmx_pip_stat2_prtx VAR_7;
 union cvmx_pip_stat3_prtx VAR_8;
 union cvmx_pip_stat4_prtx VAR_9;
 union cvmx_pip_stat5_prtx VAR_10;
 union cvmx_pip_stat6_prtx VAR_11;
 union cvmx_pip_stat7_prtx VAR_12;
 union cvmx_pip_stat8_prtx VAR_13;
 union cvmx_pip_stat9_prtx VAR_14;
 union cvmx_pip_stat_inb_pktsx VAR_15;
 union cvmx_pip_stat_inb_octsx VAR_16;
 union cvmx_pip_stat_inb_errsx VAR_17;

 VAR_4.u64 = 0;
 VAR_4.s.rdclr = VAR_2;
 FUNC_15(VAR_0, VAR_4.u64);

 VAR_5 = FUNC_14(FUNC_0(VAR_1));
 VAR_6 = FUNC_14(FUNC_1(VAR_1));
 VAR_7 = FUNC_14(FUNC_2(VAR_1));
 VAR_8 = FUNC_14(FUNC_3(VAR_1));
 VAR_9 = FUNC_14(FUNC_4(VAR_1));
 VAR_10 = FUNC_14(FUNC_5(VAR_1));
 VAR_11 = FUNC_14(FUNC_6(VAR_1));
 VAR_12 = FUNC_14(FUNC_7(VAR_1));
 VAR_13 = FUNC_14(FUNC_8(VAR_1));
 VAR_14 = FUNC_14(FUNC_9(VAR_1));
 VAR_15.u64 =
     FUNC_14(FUNC_12(VAR_1));
 VAR_16.u64 =
     FUNC_14(FUNC_11(VAR_1));
 VAR_17.u64 =
     FUNC_14(FUNC_10(VAR_1));

 VAR_3->dropped_octets = VAR_5;
 VAR_3->dropped_packets = VAR_5;
 VAR_3->octets = VAR_6;
 VAR_3->pci_raw_packets = VAR_7;
 VAR_3->packets = VAR_7;
 VAR_3->multicast_packets = VAR_8;
 VAR_3->broadcast_packets = VAR_8;
 VAR_3->len_64_packets = VAR_9;
 VAR_3->len_65_127_packets = VAR_9;
 VAR_3->len_128_255_packets = VAR_10;
 VAR_3->len_256_511_packets = VAR_10;
 VAR_3->len_512_1023_packets = VAR_11;
 VAR_3->len_1024_1518_packets = VAR_11;
 VAR_3->len_1519_max_packets = VAR_12;
 VAR_3->fcs_align_err_packets = VAR_12;
 VAR_3->runt_packets = VAR_13;
 VAR_3->runt_crc_packets = VAR_13;
 VAR_3->oversize_packets = VAR_14;
 VAR_3->oversize_crc_packets = VAR_14;
 VAR_3->inb_packets = VAR_15.s.pkts;
 VAR_3->inb_octets = VAR_16.s.octs;
 VAR_3->inb_errors = VAR_17.s.errs;

 if (FUNC_13()) {




  if (VAR_3->inb_packets > VAR_3->packets)
   VAR_3->dropped_packets =
       VAR_3->inb_packets - VAR_3->packets;
  else
   VAR_3->dropped_packets = 0;
  if (VAR_3->inb_octets - VAR_3->inb_packets * 4 >
      VAR_3->octets)
   VAR_3->dropped_octets =
       VAR_3->inb_octets - VAR_3->inb_packets * 4 -
       VAR_3->octets;
  else
   VAR_3->dropped_octets = 0;
 }
}
