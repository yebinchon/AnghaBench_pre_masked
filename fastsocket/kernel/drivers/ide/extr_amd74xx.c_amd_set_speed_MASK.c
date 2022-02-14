
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;
struct ide_timing {int udma; int recover; int active; int rec8b; int act8b; int setup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int* VAR_4 ;
 int FUNC_0 (struct pci_dev*) ;
 size_t FUNC_1 (int ,int,int) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_5, u8 VAR_6, u8 VAR_7,
     struct ide_timing *VAR_8)
{
 u8 VAR_9 = 0, VAR_10 = FUNC_0(VAR_5);

 FUNC_2(VAR_5, VAR_1 + VAR_10, &VAR_9);
 VAR_9 = (VAR_9 & ~(3 << ((3 - VAR_6) << 1))) | ((FUNC_1(VAR_8->setup, 1, 4) - 1) << ((3 - VAR_6) << 1));
 FUNC_3(VAR_5, VAR_1 + VAR_10, VAR_9);

 FUNC_3(VAR_5, VAR_0 + VAR_10 + (1 - (VAR_6 >> 1)),
  ((FUNC_1(VAR_8->act8b, 1, 16) - 1) << 4) | (FUNC_1(VAR_8->rec8b, 1, 16) - 1));

 FUNC_3(VAR_5, VAR_2 + VAR_10 + (3 - VAR_6),
  ((FUNC_1(VAR_8->active, 1, 16) - 1) << 4) | (FUNC_1(VAR_8->recover, 1, 16) - 1));

 switch (VAR_7) {
 case 131: VAR_9 = VAR_8->udma ? (0xc0 | (FUNC_1(VAR_8->udma, 2, 5) - 2)) : 0x03; break;
 case 130: VAR_9 = VAR_8->udma ? (0xc0 | VAR_4[FUNC_1(VAR_8->udma, 2, 10)]) : 0x03; break;
 case 129: VAR_9 = VAR_8->udma ? (0xc0 | VAR_4[FUNC_1(VAR_8->udma, 1, 10)]) : 0x03; break;
 case 128: VAR_9 = VAR_8->udma ? (0xc0 | VAR_4[FUNC_1(VAR_8->udma, 1, 15)]) : 0x03; break;
 default: return;
 }

 FUNC_3(VAR_5, VAR_3 + VAR_10 + (3 - VAR_6), VAR_9);
}
