
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipr_resource_entry {int ata_class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





__attribute__((used)) static void FUNC_0(struct ipr_resource_entry *VAR_3, unsigned int VAR_4)
{
 switch(VAR_4) {
 case 129:
 case 131:
  VAR_3->ata_class = VAR_0;
  break;
 case 128:
 case 130:
  VAR_3->ata_class = VAR_1;
  break;
 default:
  VAR_3->ata_class = VAR_2;
  break;
 };
}
