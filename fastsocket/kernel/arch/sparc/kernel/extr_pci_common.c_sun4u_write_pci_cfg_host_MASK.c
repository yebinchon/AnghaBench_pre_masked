
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct pci_pbm_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int *,int) ;
 int* FUNC_3 (struct pci_pbm_info*,unsigned char,unsigned int,int) ;

__attribute__((used)) static int FUNC_4(struct pci_pbm_info *VAR_1,
        unsigned char VAR_2, unsigned int VAR_3,
        int VAR_4, int VAR_5, u32 VAR_6)
{
 u32 *VAR_7;

 VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
 if (!VAR_7)
  return VAR_0;

 switch (VAR_5) {
 case 1:
  if (VAR_4 < 8) {
   unsigned long VAR_8 = (unsigned long) VAR_7;
   u16 VAR_9;

   VAR_8 &= ~1;
   FUNC_0((u16 *)VAR_8, &VAR_9);
   if (VAR_4 & 1) {
    VAR_9 &= 0x00ff;
    VAR_9 |= VAR_6 << 8;
   } else {
    VAR_9 &= 0xff00;
    VAR_9 |= VAR_6;
   }
   FUNC_1((u16 *)VAR_8, VAR_9);
  } else
   FUNC_2((u8 *)VAR_7, VAR_6);
  break;
 case 2:
  if (VAR_4 < 8) {
   FUNC_1((u16 *)VAR_7, VAR_6);
  } else {
   FUNC_2((u8 *)VAR_7, VAR_6 & 0xff);
   FUNC_2(((u8 *)VAR_7) + 1, VAR_6 >> 8);
  }
  break;
 case 4:
  FUNC_4(VAR_1, VAR_2, VAR_3,
      VAR_4, 2, VAR_6 & 0xffff);
  FUNC_4(VAR_1, VAR_2, VAR_3,
      VAR_4 + 2, 2, VAR_6 >> 16);
  break;
 }
 return VAR_0;
}
