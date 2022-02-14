
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sis_chipset {int * info; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,int) ;
 int FUNC_4 (struct pci_dev*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_9, struct sis_chipset *VAR_10)
{
 u16 VAR_11;
 u8 VAR_12;

 if (VAR_10->info == &VAR_5) {
  FUNC_2(VAR_9, 0x50, &VAR_11);
  if (VAR_11 & 0x08)
   FUNC_4(VAR_9, 0x50, VAR_11 & ~0x08);
  FUNC_2(VAR_9, 0x52, &VAR_11);
  if (VAR_11 & 0x08)
   FUNC_4(VAR_9, 0x52, VAR_11 & ~0x08);
  return;
 }

 if (VAR_10->info == &VAR_6 || VAR_10->info == &VAR_3) {

  FUNC_3(VAR_9, VAR_1, 0x80);

  FUNC_1(VAR_9, 0x49, &VAR_12);
  if (!(VAR_12 & 0x01))
   FUNC_3(VAR_9, 0x49, VAR_12 | 0x01);
  return;
 }

 if (VAR_10->info == &VAR_8 || VAR_10->info == &VAR_4) {

  FUNC_3(VAR_9, VAR_1, 0x80);

  FUNC_1(VAR_9, 0x52, &VAR_12);
  if (!(VAR_12 & 0x04))
   FUNC_3(VAR_9, 0x52, VAR_12 | 0x04);
  return;
 }

 if (VAR_10->info == &VAR_7) {
  FUNC_1(VAR_9, VAR_0, &VAR_12);
  if (( VAR_12 & 0x0F ) != 0x00)
   FUNC_3(VAR_9, VAR_0, VAR_12 & 0xF0);

 }

 if (VAR_10->info == &VAR_2 || VAR_10->info == &VAR_7) {


  FUNC_1(VAR_9, 0x52, &VAR_12);
  if (!(VAR_12 & 0x08))
   FUNC_3(VAR_9, 0x52, VAR_12|0x08);
  return;
 }

 FUNC_0();
}
