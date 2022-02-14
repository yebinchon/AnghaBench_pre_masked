
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct pci_bus {int number; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct pci_bus *VAR_3, unsigned int VAR_4, int VAR_5,
 int VAR_6, u32 VAR_7)
{
 uint32_t VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_10 = VAR_3->number;
 VAR_9 = FUNC_1(VAR_4);
 VAR_11 = FUNC_0(VAR_4);

 VAR_8 = (VAR_10 << 16) | (VAR_9 << 11) | (VAR_11 << 8) |
  (VAR_5 & 0xfc) | 0x80000000;


 FUNC_3(VAR_8, VAR_1);


 switch (VAR_6) {
 case 1:
  FUNC_2(VAR_7, VAR_2 + (~VAR_5 & 0x3));
  break;

 case 2:
  FUNC_4(VAR_7, VAR_2 + (~VAR_5 & 0x2));
  break;

 case 4:
  FUNC_3(VAR_7, VAR_2);
  break;
 }

 return VAR_0;
}
