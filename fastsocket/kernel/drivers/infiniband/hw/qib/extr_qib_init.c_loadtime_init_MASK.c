
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long data; int function; } ;
struct qib_devdata {int revision; TYPE_1__ intrchk_timer; int eep_lock; int eep_st_lock; int qib_diag_trans_lock; int uctxt_lock; int sendctrl_lock; int pioavail_lock; int boardversion; int pcidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct qib_devdata*) ;
 int FUNC_1 (struct qib_devdata*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct qib_devdata*,char*,int,int,unsigned long long) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (struct qib_devdata*) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_8(struct qib_devdata *VAR_7)
{
 int VAR_8 = 0;

 if (((VAR_7->revision >> VAR_4) &
      VAR_3) != VAR_1) {
  FUNC_4(VAR_7,
   "Driver only handles version %d, chip swversion is %d (%llx), failng\n",
   VAR_1,
   (int)(VAR_7->revision >>
    VAR_4) &
    VAR_3,
   (unsigned long long) VAR_7->revision);
  VAR_8 = -VAR_0;
  goto done;
 }

 if (VAR_7->revision & VAR_2)
  FUNC_5(VAR_7->pcidev, "%s", VAR_7->boardversion);

 FUNC_7(&VAR_7->pioavail_lock);
 FUNC_7(&VAR_7->sendctrl_lock);
 FUNC_7(&VAR_7->uctxt_lock);
 FUNC_7(&VAR_7->qib_diag_trans_lock);
 FUNC_7(&VAR_7->eep_st_lock);
 FUNC_3(&VAR_7->eep_lock);

 if (VAR_5)
  goto done;

 VAR_8 = FUNC_0(VAR_7);
 FUNC_1(VAR_7);

 FUNC_6(VAR_7);


 FUNC_2(&VAR_7->intrchk_timer);
 VAR_7->intrchk_timer.function = VAR_6;
 VAR_7->intrchk_timer.data = (unsigned long) VAR_7;

done:
 return VAR_8;
}
