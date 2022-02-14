
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
typedef int dword ;
typedef int byte ;


 int FUNC_0 (struct pci_dev*,int,unsigned char) ;
 int FUNC_1 (struct pci_dev*,int,unsigned int) ;
 int FUNC_2 (struct pci_dev*,int,unsigned short) ;

void FUNC_3(byte VAR_0, byte VAR_1, int VAR_2, void *VAR_3, int VAR_4,
       void *VAR_5)
{
 struct pci_dev *VAR_6 = (struct pci_dev *) VAR_5;

 switch (VAR_4) {
 case 1:
  FUNC_0(VAR_6, VAR_2,
          *(unsigned char *) VAR_3);
  break;
 case 2:
  FUNC_2(VAR_6, VAR_2,
          *(unsigned short *) VAR_3);
  break;
 case 4:
  FUNC_1(VAR_6, VAR_2,
           *(unsigned int *) VAR_3);
  break;

 default:
  if (!(VAR_4 % 4) && !(VAR_4 & 0x03)) {
   dword *VAR_7 = (dword *) VAR_3;
   VAR_4 /= 4;

   while (VAR_4--) {
    FUNC_1(VAR_6, VAR_2,
             *(unsigned int *)
             VAR_7++);
   }
  } else {
   byte *VAR_8 = (byte *) VAR_3;

   while (VAR_4--) {
    FUNC_0(VAR_6, VAR_2,
            *(unsigned char *)
            VAR_8++);
   }
  }
 }
}
