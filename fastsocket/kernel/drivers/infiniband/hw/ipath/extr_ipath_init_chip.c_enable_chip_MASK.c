
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ipath_devdata {int ipath_rcvctrl; int ipath_sendctrl; int ipath_pioupd_thresh; int ipath_r_portenable_shift; int ipath_r_intravail_shift; int ipath_flags; unsigned long long ipath_r_tailupd_shift; int ipath_rhdrhead_intr_off; int ipath_pioavregs; int * ipath_pioavailshadow; int * ipath_pioavailregs_dma; TYPE_2__** ipath_pd; TYPE_1__* ipath_kregs; int ipath_sendctrl_lock; } ;
typedef int __le64 ;
struct TYPE_4__ {int port_head; } ;
struct TYPE_3__ {int kr_rcvctrl; int kr_scratch; int kr_sendctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ipath_devdata*,int ) ;
 int FUNC_2 (struct ipath_devdata*,int ,int ) ;
 int VAR_7 ;
 int FUNC_3 (struct ipath_devdata*,int ,int) ;
 int FUNC_4 (struct ipath_devdata*,int ,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_8(struct ipath_devdata *VAR_11, int VAR_12)
{
 u32 VAR_13;
 u64 VAR_14;
 unsigned long VAR_15;
 int VAR_16;

 if (!VAR_12)
  FUNC_0(&VAR_7);

 FUNC_3(VAR_11, VAR_11->ipath_kregs->kr_rcvctrl,
    VAR_11->ipath_rcvctrl);

 FUNC_6(&VAR_11->ipath_sendctrl_lock, VAR_15);

 VAR_11->ipath_sendctrl = VAR_1 |
  VAR_0;





 if (VAR_11->ipath_pioupd_thresh)
  VAR_11->ipath_sendctrl |= VAR_11->ipath_pioupd_thresh
   << VAR_2;
 FUNC_3(VAR_11, VAR_11->ipath_kregs->kr_sendctrl, VAR_11->ipath_sendctrl);
 FUNC_1(VAR_11, VAR_11->ipath_kregs->kr_scratch);
 FUNC_7(&VAR_11->ipath_sendctrl_lock, VAR_15);





 VAR_14 = 1ULL;
 VAR_11->ipath_rcvctrl |= (VAR_14 << VAR_11->ipath_r_portenable_shift) |
  (VAR_14 << VAR_11->ipath_r_intravail_shift);
 if (!(VAR_11->ipath_flags & VAR_4))
  VAR_11->ipath_rcvctrl |= (1ULL << VAR_11->ipath_r_tailupd_shift);

 FUNC_3(VAR_11, VAR_11->ipath_kregs->kr_rcvctrl,
    VAR_11->ipath_rcvctrl);





 VAR_11->ipath_flags |= VAR_3;





 VAR_13 = FUNC_2(VAR_11, VAR_9, 0);
 FUNC_4(VAR_11, VAR_8, VAR_13, 0);


 FUNC_4(VAR_11, VAR_10,
    VAR_11->ipath_rhdrhead_intr_off |
    VAR_11->ipath_pd[0]->port_head, 0);







 for (VAR_16 = 0; VAR_16 < VAR_11->ipath_pioavregs; VAR_16++) {
  __le64 VAR_17;




  if (VAR_16 > 3 && (VAR_11->ipath_flags & VAR_6))
   VAR_17 = VAR_11->ipath_pioavailregs_dma[VAR_16 ^ 1];
  else
   VAR_17 = VAR_11->ipath_pioavailregs_dma[VAR_16];





  VAR_11->ipath_pioavailshadow[VAR_16] = FUNC_5(VAR_17);
 }

 VAR_11->ipath_flags |= VAR_5;
}
