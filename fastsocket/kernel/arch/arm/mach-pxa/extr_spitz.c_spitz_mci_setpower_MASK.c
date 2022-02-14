
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxamci_platform_data {int ocr_mask; } ;
struct device {struct pxamci_platform_data* platform_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_1, unsigned int VAR_2)
{
 struct pxamci_platform_data* VAR_3 = VAR_1->platform_data;

 if (( 1 << VAR_2) & VAR_3->ocr_mask)
  FUNC_0(VAR_0, 0x0004);
 else
  FUNC_0(VAR_0, 0x0000);
}
