
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int ahd_dev_softc_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,int,int *) ;

uint32_t
FUNC_4(ahd_dev_softc_t VAR_0, int VAR_1, int VAR_2)
{
 switch (VAR_2) {
 case 1:
 {
  uint8_t VAR_3;

  FUNC_1(VAR_0, VAR_1, &VAR_3);
  return (VAR_3);
 }
 case 2:
 {
  uint16_t VAR_4;
  FUNC_3(VAR_0, VAR_1, &VAR_4);
  return (VAR_4);
 }
 case 4:
 {
  uint32_t VAR_5;
  FUNC_2(VAR_0, VAR_1, &VAR_5);
  return (VAR_5);
 }
 default:
  FUNC_0("ahd_pci_read_config: Read size too big");

  return (0);
 }
}
