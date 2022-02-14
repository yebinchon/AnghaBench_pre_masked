
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {unsigned char number; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 unsigned char VAR_9 ;
 unsigned char FUNC_2 (unsigned int) ;
 unsigned char FUNC_3 (unsigned int) ;

__attribute__((used)) static int FUNC_4(unsigned char VAR_10,
 struct pci_bus *VAR_11, unsigned int VAR_12, int VAR_13, u32 * VAR_14)
{
 unsigned char VAR_15 = VAR_11->number;
 u32 VAR_16;


 FUNC_1(VAR_8,
    (VAR_6 | VAR_7));

 FUNC_1(VAR_0,
    ((VAR_15 << VAR_1) |
     (FUNC_3(VAR_12) << VAR_2) |
     (FUNC_2(VAR_12) << VAR_3) |
     ((VAR_13 / 4) << VAR_4)));


 if (VAR_10 == VAR_9)
  FUNC_1(VAR_5, *VAR_14);
 else
  FUNC_0(VAR_5, *VAR_14);


 FUNC_0(VAR_8, VAR_16);
 if (VAR_16 & (VAR_6 | VAR_7)) {



  FUNC_1(VAR_8,
     (VAR_6 | VAR_7));

  return -1;
 }

 return 0;
}
