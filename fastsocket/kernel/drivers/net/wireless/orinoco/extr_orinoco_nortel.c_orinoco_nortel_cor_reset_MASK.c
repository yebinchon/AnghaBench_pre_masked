
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {struct orinoco_pci_card* card; } ;
struct orinoco_pci_card {scalar_t__ bridge_io; scalar_t__ attr_io; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct orinoco_private *VAR_2)
{
 struct orinoco_pci_card *VAR_3 = VAR_2->card;


 FUNC_1(8, VAR_3->bridge_io + 2);
 FUNC_0(VAR_3->attr_io + VAR_0);
 FUNC_1(0x80, VAR_3->attr_io + VAR_0);
 FUNC_2(1);


 FUNC_1(0, VAR_3->attr_io + VAR_0);
 FUNC_1(0, VAR_3->attr_io + VAR_0);
 FUNC_2(1);


 FUNC_1(VAR_1, VAR_3->attr_io + VAR_0);
 FUNC_1(VAR_1, VAR_3->attr_io + VAR_0);
 FUNC_2(1);

 FUNC_1(0x228, VAR_3->bridge_io + 2);

 return 0;
}
