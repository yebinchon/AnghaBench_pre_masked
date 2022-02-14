
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ipath_devdata {int ipath_ht_slave_off; TYPE_1__* pcidev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int,int*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_5(struct ipath_devdata *VAR_1)
{
 u8 VAR_2, VAR_3, VAR_4;

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
  VAR_3 = VAR_1->ipath_ht_slave_off + VAR_4 * 4 + 0xd;
  if (FUNC_3(VAR_1->pcidev, VAR_3, &VAR_2))
   FUNC_0(&VAR_1->pcidev->dev, "Couldn't read "
     "linkerror%d of HT slave/primary block\n",
     VAR_4);
  else if (VAR_2 & 0xf0) {
   FUNC_1(VAR_0, "HT linkerr%d bits 0x%x set, "
       "clearing\n", VAR_2 >> 4, VAR_4);




   if (FUNC_4(VAR_1->pcidev, VAR_3,
        VAR_2))
    FUNC_2("Failed write to clear HT "
       "linkerror%d\n", VAR_4);
   if (FUNC_3(VAR_1->pcidev, VAR_3,
       &VAR_2))
    FUNC_0(&VAR_1->pcidev->dev,
      "Couldn't reread linkerror%d of "
      "HT slave/primary block\n", VAR_4);
   else if (VAR_2 & 0xf0)
    FUNC_0(&VAR_1->pcidev->dev,
      "HT linkerror%d bits 0x%x "
      "couldn't be cleared\n",
      VAR_4, VAR_2 >> 4);
  }
 }
}
