
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ipath_user_info {int spu_rcvhdrsize; } ;
struct ipath_portdata {int port_port; int port_piocnt; int port_pio_base; int port_lastrcvhdrqtail; int port_wait; int port_flag; scalar_t__ port_subport_cnt; scalar_t__ port_rcvhdrtail_kvaddr; int port_hdrqfull; int port_hdrqfull_poll; scalar_t__ port_urgent_poll; scalar_t__ port_urgent; scalar_t__ port_tidcursor; scalar_t__ port_piobufs; struct ipath_devdata* port_dd; } ;
struct ipath_devdata {int ipath_ports_extrabuf; int ipath_pbufsport; int ipath_palign; unsigned long long ipath_rcvctrl; int ipath_flags; unsigned long long ipath_r_tailupd_shift; TYPE_1__* ipath_kregs; scalar_t__ ipath_r_portenable_shift; scalar_t__ ipath_piobufbase; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int kr_rcvctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*,int,int ,...) ;
 int FUNC_2 (struct ipath_devdata*,int,int,int ) ;
 int FUNC_3 (struct ipath_portdata*) ;
 int FUNC_4 (struct ipath_devdata*,struct ipath_portdata*) ;
 int FUNC_5 (struct ipath_portdata*) ;
 int FUNC_6 (struct ipath_devdata*,int ,int) ;
 int FUNC_7 (struct ipath_devdata*,int ) ;
 int FUNC_8 (struct ipath_devdata*,int ,unsigned long long) ;
 int FUNC_9 (struct ipath_devdata*,int ,int ,int) ;
 struct ipath_portdata* FUNC_10 (struct file*) ;
 int FUNC_11 (scalar_t__,unsigned long long*) ;
 scalar_t__ FUNC_12 (struct file*) ;
 int FUNC_13 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct file *VAR_5,
         const struct ipath_user_info *VAR_6)
{
 int VAR_7;
 struct ipath_portdata *VAR_8 = FUNC_10(VAR_5);
 struct ipath_devdata *VAR_9;
 u32 VAR_10;


 if (FUNC_12(VAR_5)) {
  VAR_7 = FUNC_14(VAR_8->port_wait,
   !FUNC_13(VAR_1, &VAR_8->port_flag));
  goto done;
 }

 VAR_9 = VAR_8->port_dd;

 if (VAR_6->spu_rcvhdrsize) {
  VAR_7 = FUNC_7(VAR_9, VAR_6->spu_rcvhdrsize);
  if (VAR_7)
   goto done;
 }




 if (VAR_8->port_port <= VAR_9->ipath_ports_extrabuf)
  VAR_8->port_piocnt = VAR_9->ipath_pbufsport + 1;
 else
  VAR_8->port_piocnt = VAR_9->ipath_pbufsport;


 if (VAR_8->port_port <= VAR_9->ipath_ports_extrabuf)
  VAR_8->port_pio_base = (VAR_9->ipath_pbufsport + 1)
   * (VAR_8->port_port - 1);
 else
  VAR_8->port_pio_base = VAR_9->ipath_ports_extrabuf +
   VAR_9->ipath_pbufsport * (VAR_8->port_port - 1);
 VAR_8->port_piobufs = VAR_9->ipath_piobufbase +
  VAR_8->port_pio_base * VAR_9->ipath_palign;
 FUNC_1(VAR_2, "piobuf base for port %u is 0x%x, piocnt %u,"
  " first pio %u\n", VAR_8->port_port, VAR_8->port_piobufs,
  VAR_8->port_piocnt, VAR_8->port_pio_base);
 FUNC_2(VAR_9, VAR_8->port_pio_base, VAR_8->port_piocnt, 0);







 VAR_7 = FUNC_4(VAR_9, VAR_8);
 if (!VAR_7)
  VAR_7 = FUNC_5(VAR_8);
 if (VAR_7)
  goto done;






 VAR_10 = FUNC_6(VAR_9, VAR_4, VAR_8->port_port);
 FUNC_9(VAR_9, VAR_3, VAR_10, VAR_8->port_port);
 VAR_8->port_lastrcvhdrqtail = -1;
 FUNC_1(VAR_2, "Wrote port%d egrhead %x from tail regs\n",
  VAR_8->port_port, VAR_10);
 VAR_8->port_tidcursor = 0;


 VAR_8->port_urgent = 0;
 VAR_8->port_urgent_poll = 0;
 VAR_8->port_hdrqfull_poll = VAR_8->port_hdrqfull;
 FUNC_11(VAR_9->ipath_r_portenable_shift + VAR_8->port_port,
  &VAR_9->ipath_rcvctrl);
 if (!(VAR_9->ipath_flags & VAR_0)) {
  if (VAR_8->port_rcvhdrtail_kvaddr)
   FUNC_3(VAR_8);
  FUNC_8(VAR_9, VAR_9->ipath_kregs->kr_rcvctrl,
   VAR_9->ipath_rcvctrl &
   ~(1ULL << VAR_9->ipath_r_tailupd_shift));
 }
 FUNC_8(VAR_9, VAR_9->ipath_kregs->kr_rcvctrl,
    VAR_9->ipath_rcvctrl);

 if (VAR_8->port_subport_cnt) {
  FUNC_0(VAR_1, &VAR_8->port_flag);
  FUNC_15(&VAR_8->port_wait);
 }
done:
 return VAR_7;
}
