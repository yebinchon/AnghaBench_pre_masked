
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ql_adapter {int wol; TYPE_1__* ndev; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct ql_adapter*,int ,TYPE_1__*,char*,...) ;
 int FUNC_1 (struct ql_adapter*,int ,TYPE_1__*,char*,int ) ;
 int FUNC_2 (struct ql_adapter*,int ) ;
 int FUNC_3 (struct ql_adapter*,int) ;

int FUNC_4(struct ql_adapter *VAR_13)
{
 int VAR_14 = 0;
 u32 VAR_15 = VAR_1;
 if (VAR_13->wol & (VAR_4 | VAR_7 | VAR_9 | VAR_10 |
   VAR_8 | VAR_5)) {
  FUNC_0(VAR_13, VAR_12, VAR_13->ndev,
     "Unsupported WOL paramter. qdev->wol = 0x%x.\n",
     VAR_13->wol);
  return -VAR_0;
 }

 if (VAR_13->wol & VAR_6) {
  VAR_14 = FUNC_3(VAR_13, 1);
  if (VAR_14) {
   FUNC_0(VAR_13, VAR_12, VAR_13->ndev,
      "Failed to set magic packet on %s.\n",
      VAR_13->ndev->name);
   return VAR_14;
  } else
   FUNC_1(VAR_13, VAR_11, VAR_13->ndev,
       "Enabled magic packet successfully on %s.\n",
       VAR_13->ndev->name);

  VAR_15 |= VAR_2;
 }

 if (VAR_13->wol) {
  VAR_15 |= VAR_3;
  VAR_14 = FUNC_2(VAR_13, VAR_15);
  FUNC_0(VAR_13, VAR_11, VAR_13->ndev,
     "WOL %s (wol code 0x%x) on %s\n",
     (VAR_14 == 0) ? "Sucessfully set" : "Failed",
     VAR_15, VAR_13->ndev->name);
 }

 return VAR_14;
}
