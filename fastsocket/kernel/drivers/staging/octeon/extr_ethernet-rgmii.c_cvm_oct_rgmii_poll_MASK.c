
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int port_bit; } ;
union cvmx_ipd_sub_port_fcs {void* u64; TYPE_3__ s; } ;
struct TYPE_8__ {scalar_t__ pcterr; } ;
union cvmx_gmxx_rxx_int_reg {void* u64; TYPE_1__ s; } ;
struct TYPE_9__ {int pre_chk; } ;
union cvmx_gmxx_rxx_frm_ctl {void* u64; TYPE_2__ s; } ;
struct octeon_ethernet {unsigned long long port; scalar_t__ link_info; int queue; } ;
struct net_device {int name; } ;
struct TYPE_11__ {int speed; scalar_t__ full_duplex; scalar_t__ link_up; } ;
struct TYPE_12__ {scalar_t__ u64; TYPE_4__ s; } ;
typedef TYPE_5__ cvmx_helper_link_info_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (unsigned long long) ;
 int FUNC_4 (unsigned long long) ;
 scalar_t__ VAR_1 ;
 TYPE_5__ FUNC_5 (unsigned long long) ;
 TYPE_5__ FUNC_6 (unsigned long long) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ,void*) ;
 int VAR_2 ;
 struct octeon_ethernet* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_15(struct net_device *VAR_3)
{
 struct octeon_ethernet *VAR_4 = FUNC_9(VAR_3);
 unsigned long VAR_5;
 cvmx_helper_link_info_t VAR_6;





 FUNC_13(&VAR_2, VAR_5);

 VAR_6 = FUNC_6(VAR_4->port);
 if (VAR_6.u64 == VAR_4->link_info) {





  if (VAR_1 && (VAR_6.s.speed == 10)) {





   int VAR_7 = FUNC_4(VAR_4->port);
   int VAR_8 = FUNC_3(VAR_4->port);
   union cvmx_gmxx_rxx_int_reg VAR_9;
   VAR_9.u64 =
       FUNC_7(FUNC_1
       (VAR_8, VAR_7));
   if (VAR_9.s.pcterr) {
    union cvmx_gmxx_rxx_frm_ctl VAR_10;
    union cvmx_ipd_sub_port_fcs VAR_11;


    VAR_10.u64 =
        FUNC_7(FUNC_0
        (VAR_8, VAR_7));
    VAR_10.s.pre_chk = 0;
    FUNC_8(FUNC_0
            (VAR_8, VAR_7),
            VAR_10.u64);


    VAR_11.u64 =
        FUNC_7(VAR_0);
    VAR_11.s.port_bit &=
        0xffffffffull ^ (1ull << VAR_4->port);
    FUNC_8(VAR_0,
            VAR_11.u64);


    FUNC_8(FUNC_1
            (VAR_8, VAR_7),
            VAR_9.u64);
    FUNC_2("%s: Using 10Mbps with software "
        "preamble removal\n",
         VAR_3->name);
   }
  }
  FUNC_14(&VAR_2, VAR_5);
  return;
 }





 if (VAR_1) {

  union cvmx_gmxx_rxx_frm_ctl VAR_12;
  union cvmx_ipd_sub_port_fcs VAR_13;
  union cvmx_gmxx_rxx_int_reg VAR_14;
  int VAR_15 = FUNC_4(VAR_4->port);
  int VAR_16 = FUNC_3(VAR_4->port);


  VAR_12.u64 =
      FUNC_7(FUNC_0(VAR_16, VAR_15));
  VAR_12.s.pre_chk = 1;
  FUNC_8(FUNC_0(VAR_16, VAR_15),
          VAR_12.u64);

  VAR_13.u64 = FUNC_7(VAR_0);
  VAR_13.s.port_bit |= 1ull << VAR_4->port;
  FUNC_8(VAR_0, VAR_13.u64);

  VAR_14.u64 =
      FUNC_7(FUNC_1(VAR_16, VAR_15));
  FUNC_8(FUNC_1(VAR_16, VAR_15),
          VAR_14.u64);
 }

 VAR_6 = FUNC_5(VAR_4->port);
 VAR_4->link_info = VAR_6.u64;
 FUNC_14(&VAR_2, VAR_5);


 if (VAR_6.s.link_up) {

  if (!FUNC_11(VAR_3))
   FUNC_12(VAR_3);
  if (VAR_4->queue != -1)
   FUNC_2
       ("%s: %u Mbps %s duplex, port %2d, queue %2d\n",
        VAR_3->name, VAR_6.s.speed,
        (VAR_6.s.full_duplex) ? "Full" : "Half",
        VAR_4->port, VAR_4->queue);
  else
   FUNC_2("%s: %u Mbps %s duplex, port %2d, POW\n",
       VAR_3->name, VAR_6.s.speed,
       (VAR_6.s.full_duplex) ? "Full" : "Half",
       VAR_4->port);
 } else {

  if (FUNC_11(VAR_3))
   FUNC_10(VAR_3);
  FUNC_2("%s: Link down\n", VAR_3->name);
 }
}
