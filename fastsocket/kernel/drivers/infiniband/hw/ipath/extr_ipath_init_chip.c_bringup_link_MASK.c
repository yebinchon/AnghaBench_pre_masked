
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct ipath_devdata {int ipath_control; int ipath_ibmaxlen; int ibcc_mpl_shift; int ipath_ibcctrl; int (* ipath_f_bringup_serdes ) (struct ipath_devdata*) ;TYPE_2__* ipath_kregs; TYPE_1__* pcidev; int ipath_flags; } ;
struct TYPE_4__ {int kr_control; int kr_scratch; int kr_ibcctrl; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,char*,unsigned long long) ;
 int FUNC_2 (struct ipath_devdata*,int ) ;
 int FUNC_3 (struct ipath_devdata*,int ,int) ;
 int FUNC_4 (struct ipath_devdata*) ;

__attribute__((used)) static int FUNC_5(struct ipath_devdata *VAR_10)
{
 u64 VAR_11, VAR_12;
 int VAR_13 = 0;


 VAR_10->ipath_control &= ~VAR_0;
 FUNC_3(VAR_10, VAR_10->ipath_kregs->kr_control,
    VAR_10->ipath_control);





 VAR_11 = (VAR_10->ipath_ibmaxlen >> 2) + 1;
 VAR_12 = VAR_11 << VAR_10->ibcc_mpl_shift;


 VAR_12 |= 0x5ULL << VAR_3;





 VAR_12 |= 0x3ULL << VAR_2;

 VAR_12 |= 0xfULL << VAR_7;

 VAR_12 |= 4ULL << VAR_1;

 VAR_12 |= 0xfULL << VAR_6;

 VAR_10->ipath_ibcctrl = VAR_12;







 VAR_12 |= VAR_4 <<
  VAR_5;
 VAR_10->ipath_flags |= VAR_8;
 FUNC_1(VAR_9, "Writing 0x%llx to ibcctrl\n",
     (unsigned long long) VAR_12);
 FUNC_3(VAR_10, VAR_10->ipath_kregs->kr_ibcctrl, VAR_12);


 VAR_11 = FUNC_2(VAR_10, VAR_10->ipath_kregs->kr_scratch);

 VAR_13 = VAR_10->ipath_f_bringup_serdes(VAR_10);

 if (VAR_13)
  FUNC_0(&VAR_10->pcidev->dev, "Could not initialize SerDes, "
    "not usable\n");
 else {

  VAR_10->ipath_control |= VAR_0;
  FUNC_3(VAR_10, VAR_10->ipath_kregs->kr_control,
     VAR_10->ipath_control);
 }

 return VAR_13;
}
