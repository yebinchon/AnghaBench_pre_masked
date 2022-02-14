
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int ahd_dev_softc_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int,int ) ;

void
FUNC_4(ahd_dev_softc_t VAR_0, int VAR_1, uint32_t VAR_2, int VAR_3)
{
 switch (VAR_3) {
 case 1:
  FUNC_1(VAR_0, VAR_1, VAR_2);
  break;
 case 2:
  FUNC_3(VAR_0, VAR_1, VAR_2);
  break;
 case 4:
  FUNC_2(VAR_0, VAR_1, VAR_2);
  break;
 default:
  FUNC_0("ahd_pci_write_config: Write size too big");

 }
}
