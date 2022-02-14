
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ipath_devdata {int ipath_flags; int ipath_hwerrmask; TYPE_1__* ipath_kregs; TYPE_2__* pcidev; scalar_t__ ipath_ht_slave_off; } ;
typedef int ipath_err_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int kr_hwerrmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct ipath_devdata*,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__,int*) ;
 int FUNC_4 (char*,int,char*,char*,char*,unsigned long long) ;
 int FUNC_5 (char*,char*,size_t) ;

__attribute__((used)) static void FUNC_6(struct ipath_devdata *VAR_8, ipath_err_t VAR_9,
     char *VAR_10, size_t VAR_11)
{
 char VAR_12[64];
 ipath_err_t VAR_13 = VAR_9 &
  (VAR_4 | VAR_5);

 if (VAR_8->ipath_flags & VAR_0)
  VAR_13 &= ~VAR_6;

 if (VAR_8->ipath_flags & VAR_1)
  VAR_13 &= ~VAR_7;




 if (VAR_13) {
  u16 VAR_14, VAR_15;
  FUNC_4(VAR_12, sizeof VAR_12,
    "[HT%s lane %s CRC (%llx); powercycle to completely clear]",
    !(VAR_13 & VAR_5) ?
    "0 (A)" : (!(VAR_13 & VAR_4)
        ? "1 (B)" : "0+1 (A+B)"),
    !(VAR_13 & VAR_3) ? "0"
    : (!(VAR_13 & VAR_2) ? "1" :
       "0+1"), (unsigned long long) VAR_13);
  FUNC_5(VAR_10, VAR_12, VAR_11);






  if (FUNC_3(VAR_8->pcidev,
      VAR_8->ipath_ht_slave_off + 0x4,
      &VAR_14))
   FUNC_0(&VAR_8->pcidev->dev, "Couldn't read "
     "linkctrl0 of slave/primary "
     "config block\n");
  else if (!(VAR_14 & 1 << 6))

   FUNC_1("HT linkctrl0 0x%x%s%s\n", VAR_14,
      ((VAR_14 >> 8) & 7) ? " CRC" : "",
      ((VAR_14 >> 4) & 1) ? "linkfail" :
      "");
  if (FUNC_3(VAR_8->pcidev,
      VAR_8->ipath_ht_slave_off + 0x8,
      &VAR_15))
   FUNC_0(&VAR_8->pcidev->dev, "Couldn't read "
     "linkctrl1 of slave/primary "
     "config block\n");
  else if (!(VAR_15 & 1 << 6))

   FUNC_1("HT linkctrl1 0x%x%s%s\n", VAR_15,
      ((VAR_15 >> 8) & 7) ? " CRC" : "",
      ((VAR_15 >> 4) & 1) ? "linkfail" :
      "");


  VAR_8->ipath_hwerrmask &= ~VAR_13;
  FUNC_2(VAR_8, VAR_8->ipath_kregs->kr_hwerrmask,
     VAR_8->ipath_hwerrmask);
  FUNC_1("HT crc errs: %s\n", VAR_10);
 } else
  FUNC_1("ignoring HT crc errors 0x%llx, "
     "not in use\n", (unsigned long long)
     (VAR_9 & (VAR_4 |
         VAR_5)));
}
