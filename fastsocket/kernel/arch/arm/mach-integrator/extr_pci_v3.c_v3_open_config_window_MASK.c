
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {unsigned int number; } ;


 int FUNC_0 () ;
 unsigned long VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,unsigned int) ;

__attribute__((used)) static unsigned long FUNC_6(struct pci_bus *VAR_11,
        unsigned int VAR_12, int VAR_13)
{
 unsigned int VAR_14, VAR_15, VAR_16;

 VAR_16 = VAR_11->number;




 if (VAR_13 > 255)
  FUNC_0();
 if (VAR_16 > 255)
  FUNC_0();
 if (VAR_12 > 255)
  FUNC_0();

 if (VAR_16 == 0) {
  int VAR_17 = FUNC_2(VAR_12);
  VAR_14 = FUNC_1(VAR_12) << 8;
  VAR_15 = VAR_10;

  if (VAR_17 > 12)



   VAR_15 |= 1 << (VAR_17 - 5);
  else



   VAR_14 |= 1 << (VAR_17 + 11);
 } else {
  VAR_15 = VAR_10 | VAR_9;
  VAR_14 = (VAR_16 << 16) | (VAR_12 << 8);
 }






 FUNC_4(VAR_3, FUNC_3(VAR_2) |
   VAR_6 | VAR_7);




 FUNC_4(VAR_4, FUNC_3(VAR_1) |
   VAR_5 | VAR_7);
 FUNC_5(VAR_8, VAR_15);

 return VAR_0 + VAR_14 + VAR_13;
}
