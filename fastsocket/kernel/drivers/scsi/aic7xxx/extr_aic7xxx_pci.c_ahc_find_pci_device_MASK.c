
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;
typedef size_t u_int ;
struct ahc_pci_identity {int full_id; int id_mask; int * name; } ;
typedef int ahc_dev_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 size_t VAR_4 ;
 struct ahc_pci_identity* VAR_5 ;
 int FUNC_4 (int ,int ,int) ;

const struct ahc_pci_identity *
FUNC_5(ahc_dev_softc_t VAR_6)
{
 uint64_t VAR_7;
 uint16_t VAR_8;
 uint16_t VAR_9;
 uint16_t VAR_10;
 uint16_t VAR_11;
 const struct ahc_pci_identity *VAR_12;
 u_int VAR_13;

 VAR_9 = FUNC_4(VAR_6, VAR_1, 2);
 VAR_8 = FUNC_4(VAR_6, VAR_0, 2);
 VAR_11 = FUNC_4(VAR_6, VAR_3, 2);
 VAR_10 = FUNC_4(VAR_6, VAR_2, 2);
 VAR_7 = FUNC_2(VAR_8, VAR_9, VAR_10, VAR_11);
 if (FUNC_3(VAR_6) > 0
  && FUNC_1(VAR_9, VAR_8, VAR_11, VAR_10)
  && FUNC_0(VAR_10) == 0)
  return (((void*)0));

 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  VAR_12 = &VAR_5[VAR_13];
  if (VAR_12->full_id == (VAR_7 & VAR_12->id_mask)) {

   if (VAR_12->name == ((void*)0))
    return (((void*)0));
   return (VAR_12);
  }
 }
 return (((void*)0));
}
