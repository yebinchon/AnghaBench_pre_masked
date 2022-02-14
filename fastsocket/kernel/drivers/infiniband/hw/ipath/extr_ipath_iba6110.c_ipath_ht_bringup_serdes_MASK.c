
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ipath_devdata {int ipath_rx_pol_inv; TYPE_1__* ipath_kregs; } ;
struct TYPE_2__ {int kr_xgxsconfig; int kr_serdesstatus; int kr_serdesconfig1; int kr_serdesconfig0; int kr_scratch; int kr_hwerrclear; int kr_hwerrstatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,unsigned long long,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ipath_devdata*,int ) ;
 int FUNC_3 (struct ipath_devdata*,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct ipath_devdata *VAR_8)
{
 u64 VAR_9, VAR_10;
 int VAR_11 = 0, VAR_12 = 0;

 FUNC_1("Trying to bringup serdes\n");

 if (FUNC_2(VAR_8, VAR_8->ipath_kregs->kr_hwerrstatus) &
     VAR_0)
 {
  FUNC_1("At start, serdes PLL failed bit set in "
     "hwerrstatus, clearing and continuing\n");
  FUNC_3(VAR_8, VAR_8->ipath_kregs->kr_hwerrclear,
     VAR_0);
 }

 VAR_9 = FUNC_2(VAR_8, VAR_8->ipath_kregs->kr_serdesconfig0);
 VAR_10 = FUNC_2(VAR_8, VAR_8->ipath_kregs->kr_serdesconfig1);

 FUNC_0(VAR_7, "Initial serdes status is config0=%llx "
     "config1=%llx, sstatus=%llx xgxs %llx\n",
     (unsigned long long) VAR_9, (unsigned long long) VAR_10,
     (unsigned long long)
     FUNC_2(VAR_8, VAR_8->ipath_kregs->kr_serdesstatus),
     (unsigned long long)
     FUNC_2(VAR_8, VAR_8->ipath_kregs->kr_xgxsconfig));


 VAR_9 |= VAR_2

  ;
 FUNC_3(VAR_8, VAR_8->ipath_kregs->kr_serdesconfig0, VAR_9);
 FUNC_4(15);

 if (VAR_9 & VAR_2) {
  u64 VAR_13 = VAR_9 &= ~VAR_2;

  VAR_13 |= VAR_1 |
   VAR_3;
  FUNC_0(VAR_7, "Clearing serdes PLL reset (writing "
      "%llx)\n", (unsigned long long) VAR_13);
  FUNC_3(VAR_8, VAR_8->ipath_kregs->kr_serdesconfig0,
     VAR_13);



  VAR_9 = FUNC_2(VAR_8, VAR_8->ipath_kregs->kr_scratch);




  FUNC_4(15);
  VAR_9 = VAR_13;
 }

 if (VAR_9 & (VAR_2 |
     VAR_1 |
     VAR_3)) {
  VAR_9 &= ~(VAR_2 |
    VAR_1 |
    VAR_3);

  FUNC_3(VAR_8, VAR_8->ipath_kregs->kr_serdesconfig0,
     VAR_9);
 }

 VAR_9 = FUNC_2(VAR_8, VAR_8->ipath_kregs->kr_xgxsconfig);
 if (VAR_9 & VAR_4) {

  VAR_9 &= ~VAR_4;
  VAR_12 = 1;
 }
 if (((VAR_9 >> VAR_6) &
      VAR_5) != VAR_8->ipath_rx_pol_inv ) {

  VAR_9 &= ~(VAR_5 <<
           VAR_6);
  VAR_9 |= VAR_8->ipath_rx_pol_inv <<
   VAR_6;
  VAR_12 = 1;
 }
 if (VAR_12)
  FUNC_3(VAR_8, VAR_8->ipath_kregs->kr_xgxsconfig, VAR_9);

 VAR_9 = FUNC_2(VAR_8, VAR_8->ipath_kregs->kr_serdesconfig0);


 VAR_10 &= ~0x0ffffffff00ULL;

 VAR_10 |= 0x00000000000ULL;

 VAR_10 |= 0x0cccc000000ULL;
 FUNC_3(VAR_8, VAR_8->ipath_kregs->kr_serdesconfig1, VAR_10);

 FUNC_0(VAR_7, "After setup: serdes status is config0=%llx "
     "config1=%llx, sstatus=%llx xgxs %llx\n",
     (unsigned long long) VAR_9, (unsigned long long) VAR_10,
     (unsigned long long)
     FUNC_2(VAR_8, VAR_8->ipath_kregs->kr_serdesstatus),
     (unsigned long long)
     FUNC_2(VAR_8, VAR_8->ipath_kregs->kr_xgxsconfig));

 return VAR_11;
}
