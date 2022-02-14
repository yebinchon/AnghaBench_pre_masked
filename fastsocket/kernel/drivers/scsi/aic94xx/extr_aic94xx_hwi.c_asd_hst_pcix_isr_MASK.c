
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct asd_ha_struct {int pcidev; } ;


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
 int FUNC_0 (struct asd_ha_struct*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct asd_ha_struct *VAR_11)
{
 u16 VAR_12;
 u32 VAR_13;
 u32 VAR_14;

 FUNC_4(VAR_11->pcidev, VAR_2, &VAR_12);
 FUNC_3(VAR_11->pcidev, VAR_1, &VAR_13);
 FUNC_3(VAR_11->pcidev, VAR_0, &VAR_14);

 if (VAR_12 & VAR_3)
  FUNC_1("parity error for %s\n", FUNC_2(VAR_11->pcidev));
 else if (VAR_12 & VAR_5)
  FUNC_1("master abort for %s\n", FUNC_2(VAR_11->pcidev));
 else if (VAR_12 & VAR_6)
  FUNC_1("target abort for %s\n", FUNC_2(VAR_11->pcidev));
 else if (VAR_12 & VAR_4)
  FUNC_1("data parity for %s\n", FUNC_2(VAR_11->pcidev));
 else if (VAR_13 & VAR_7) {
  FUNC_1("received split completion error for %s\n",
      FUNC_2(VAR_11->pcidev));
  FUNC_5(VAR_11->pcidev,VAR_1,VAR_13);

  return;
 } else if (VAR_13 & VAR_10) {
  FUNC_1("unexpected split completion for %s\n",
      FUNC_2(VAR_11->pcidev));
  FUNC_5(VAR_11->pcidev,VAR_1,VAR_13);

  return;
 } else if (VAR_13 & VAR_8)
  FUNC_1("split completion discarded for %s\n",
      FUNC_2(VAR_11->pcidev));
 else if (VAR_14 & VAR_9)
  FUNC_1("uncorrectable ECC error for %s\n",
      FUNC_2(VAR_11->pcidev));
 FUNC_0(VAR_11);
}
