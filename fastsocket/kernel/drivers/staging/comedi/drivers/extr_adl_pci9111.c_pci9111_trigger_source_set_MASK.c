
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;
typedef enum pci9111_trigger_sources { ____Placeholder_pci9111_trigger_sources } pci9111_trigger_sources ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 () ;
 int FUNC_1 (int) ;



__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_4,
           enum pci9111_trigger_sources VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0() & 0x09;

 switch (VAR_5) {
 case 129:
  VAR_6 |= VAR_1 | VAR_2;
  break;

 case 128:
  VAR_6 |= VAR_1 | VAR_3;
  break;

 case 130:
  VAR_6 |= VAR_0;
  break;
 }

 FUNC_1(VAR_6);
}
