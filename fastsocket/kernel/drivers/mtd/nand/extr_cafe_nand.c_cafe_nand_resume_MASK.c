
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pci_dev {int dummy; } ;
struct mtd_info {struct cafe_priv* priv; } ;
struct cafe_priv {int dmaaddr; } ;


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
 int FUNC_0 (struct cafe_priv*,int ) ;
 int FUNC_1 (struct cafe_priv*,int,int ) ;
 struct mtd_info* FUNC_2 (struct pci_dev*) ;
 int* VAR_10 ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_11)
{
 uint32_t VAR_12;
 struct mtd_info *VAR_13 = FUNC_2(VAR_11);
 struct cafe_priv *VAR_14 = VAR_13->priv;


 FUNC_1(VAR_14, 1, VAR_6);
 FUNC_1(VAR_14, 0, VAR_6);
 FUNC_1(VAR_14, 0xffffffff, VAR_5);


 FUNC_1(VAR_14, VAR_10[0], VAR_7);
 FUNC_1(VAR_14, VAR_10[1], VAR_8);
 FUNC_1(VAR_14, VAR_10[2], VAR_9);


 VAR_12 = FUNC_0(VAR_14, VAR_0);
 VAR_12 &= 0xffffeff0;
 VAR_12 |= 0x00007000;
 FUNC_1(VAR_14, VAR_12 | 0x05, VAR_0);
 FUNC_1(VAR_14, VAR_12 | 0x0a, VAR_0);
 FUNC_1(VAR_14, 0, VAR_4);
 FUNC_1(VAR_14, 0x7006, VAR_0);
 FUNC_1(VAR_14, 0x700a, VAR_0);


 FUNC_1(VAR_14, VAR_14->dmaaddr & 0xffffffff, VAR_2);
 if (sizeof(VAR_14->dmaaddr) > 4)

  FUNC_1(VAR_14, (VAR_14->dmaaddr >> 16) >> 16, VAR_3);
 else
  FUNC_1(VAR_14, 0, VAR_3);


 FUNC_1(VAR_14, 0x80000007, VAR_1);
 return 0;
}
