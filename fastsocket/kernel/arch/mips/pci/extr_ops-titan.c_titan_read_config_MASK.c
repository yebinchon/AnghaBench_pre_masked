
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
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_3, unsigned int VAR_4, int VAR_5,
 int VAR_6, u32 * VAR_7)
{
 uint32_t VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_11 = VAR_3->number;
 VAR_10 = FUNC_1(VAR_4);
 VAR_12 = FUNC_0(VAR_4);

 VAR_8 = (VAR_11 << 16) | (VAR_10 << 11) | (VAR_12 << 8) |
           (VAR_5 & 0xfc) | 0x80000000;



 FUNC_3(VAR_8, VAR_1);
 VAR_9 = FUNC_2(VAR_2) >> ((VAR_5 & 3) << 3);

 switch (VAR_6) {
 case 1:
  VAR_9 &= 0xff;
 case 2:
  VAR_9 &= 0xffff;
 }
 *VAR_7 = VAR_9;

 return VAR_0;
}
