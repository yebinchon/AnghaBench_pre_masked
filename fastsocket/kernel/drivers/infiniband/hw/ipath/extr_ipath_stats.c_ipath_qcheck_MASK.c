
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct ipath_portdata {scalar_t__ port_hdrqfull; int port_head; int port_port; } ;
struct ipath_devdata {scalar_t__ ipath_p0_hdrqfull; scalar_t__ ipath_last_tidfull; scalar_t__ ipath_lastport0rcv_cnt; int ipath_rhdrhead_intr_off; struct ipath_portdata** ipath_pd; } ;
struct TYPE_2__ {scalar_t__ sps_etidfull; scalar_t__ sps_hdrqfull; scalar_t__ sps_port0pkts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int,unsigned long long) ;
 int FUNC_1 (char*,char*) ;
 int VAR_3 ;
 int FUNC_2 (struct ipath_portdata*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (struct ipath_devdata*,int ,int,int ) ;
 size_t FUNC_4 (char*,int,char*,char*,...) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_5(struct ipath_devdata *VAR_6)
{
 static u64 VAR_7;
 struct ipath_portdata *VAR_8 = VAR_6->ipath_pd[0];
 size_t VAR_9 = 0;
 char VAR_10[128];
 u32 VAR_11;

 *VAR_10 = 0;
 if (VAR_8->port_hdrqfull != VAR_6->ipath_p0_hdrqfull) {
  VAR_9 = FUNC_4(VAR_10, sizeof VAR_10, "port 0 hdrqfull %u",
    VAR_8->port_hdrqfull -
    VAR_6->ipath_p0_hdrqfull);
  VAR_6->ipath_p0_hdrqfull = VAR_8->port_hdrqfull;
 }
 if (VAR_4.sps_etidfull != VAR_6->ipath_last_tidfull) {
  VAR_9 += FUNC_4(VAR_10 + VAR_9, sizeof VAR_10 - VAR_9,
     "%srcvegrfull %llu",
     VAR_9 ? ", " : "",
     (unsigned long long)
     (VAR_4.sps_etidfull -
      VAR_6->ipath_last_tidfull));
  VAR_6->ipath_last_tidfull = VAR_4.sps_etidfull;
 }
 if ((VAR_3 & (VAR_2 | VAR_1)) &&
     VAR_4.sps_hdrqfull != VAR_7) {
  VAR_9 += FUNC_4(VAR_10 + VAR_9, sizeof VAR_10 - VAR_9,
     "%shdrqfull %llu (all ports)",
     VAR_9 ? ", " : "",
     (unsigned long long)
     (VAR_4.sps_hdrqfull -
      VAR_7));
  VAR_7 = VAR_4.sps_hdrqfull;
 }
 if (VAR_9)
  FUNC_1("%s\n", VAR_10);

 VAR_11 = FUNC_2(VAR_8);
 if (VAR_8->port_head != VAR_11) {
  if (VAR_6->ipath_lastport0rcv_cnt ==
      VAR_4.sps_port0pkts) {
   FUNC_0(VAR_0, "missing rcv interrupts? "
       "port0 hd=%x tl=%x; port0pkts %llx; write"
       " hd (w/intr)\n",
       VAR_8->port_head, VAR_11,
       (unsigned long long)
       VAR_4.sps_port0pkts);
   FUNC_3(VAR_6, VAR_5, VAR_11 |
    VAR_6->ipath_rhdrhead_intr_off, VAR_8->port_port);
  }
  VAR_6->ipath_lastport0rcv_cnt = VAR_4.sps_port0pkts;
 }
}
