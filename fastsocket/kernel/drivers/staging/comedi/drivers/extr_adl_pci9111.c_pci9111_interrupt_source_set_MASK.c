
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;
typedef enum pci9111_ISC1_sources { ____Placeholder_pci9111_ISC1_sources } pci9111_ISC1_sources ;
typedef enum pci9111_ISC0_sources { ____Placeholder_pci9111_ISC0_sources } pci9111_ISC0_sources ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_4,
      enum pci9111_ISC0_sources VAR_5,
      enum pci9111_ISC1_sources VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0() & 0x04;

 if (VAR_5 == VAR_3)
  VAR_7 |= VAR_0;

 if (VAR_6 == VAR_2)
  VAR_7 |= VAR_1;

 FUNC_1(VAR_7);
}
