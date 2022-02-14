
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sym_hcb {int features; int mmio_ba; int scripta_ba; int scriptb_ba; int hcb_ba; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,...) ;
 char* FUNC_3 (struct sym_hcb*) ;

void FUNC_4(struct sym_hcb *VAR_9, u32 *VAR_10, int VAR_11)
{
 u32 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 u32 *VAR_17, *VAR_18;
 int VAR_19;

 VAR_18 = VAR_10;
 VAR_17 = VAR_10 + VAR_11/4;

 while (VAR_18 < VAR_17) {

  VAR_12 = *VAR_18;







  if (VAR_12 == 0) {
   FUNC_2 ("%s: ERROR0 IN SCRIPT at %d.\n",
    FUNC_3(VAR_9), (int) (VAR_18-VAR_10));
   ++VAR_18;
   continue;
  };





  if (VAR_12 == VAR_7) {
   *VAR_18++ = 0;
   continue;
  }

  if (VAR_0 & VAR_1)
   FUNC_2 ("%d:  <%x>\n", (int) (VAR_18-VAR_10),
    (unsigned)VAR_12);




  switch (VAR_12 >> 28) {
  case 0xf:



   VAR_19 = 0;
   break;
  case 0xe:



   VAR_19 = 1;
   break;
  case 0xc:



   VAR_19 = 2;
   VAR_15 = VAR_18[1];
   VAR_16 = VAR_18[2];
   if ((VAR_15 ^ VAR_16) & 3) {
    FUNC_2 ("%s: ERROR1 IN SCRIPT at %d.\n",
     FUNC_3(VAR_9), (int) (VAR_18-VAR_10));
   }




   if ((VAR_12 & VAR_8) &&
       !(VAR_9->features & VAR_2)) {
    VAR_12 = (VAR_12 & ~VAR_8);
   }
   break;
  case 0x0:



   if (!(VAR_9->features & VAR_3))
    VAR_12 = (VAR_12 | VAR_4);
   VAR_19 = 1;
   break;
  case 0x1:



   if (!(VAR_9->features & VAR_3))
    VAR_12 = (VAR_12 | VAR_4);
   VAR_19 = 0;
   break;
  case 0x8:




   if (VAR_12 & 0x00800000)
    VAR_19 = 0;
   else if ((VAR_12 & 0xf8400000) == 0x80400000)
    VAR_19 = 2;
   else
    VAR_19 = 1;
   break;
  case 0x4:
  case 0x5:
  case 0x6:
  case 0x7:
   VAR_19 = 1;
   break;
  default:
   VAR_19 = 0;
   break;
  };




  *VAR_18++ = FUNC_0(VAR_12);





  if (!VAR_19) {
   *VAR_18 = FUNC_0(*VAR_18);
   ++VAR_18;
   continue;
  }




  while (VAR_19--) {
   VAR_14 = *VAR_18;

   switch (VAR_14 & VAR_6) {
   case 129:
    VAR_13 = (VAR_14 & ~VAR_6) + VAR_9->mmio_ba;
    break;
   case 131:
    VAR_13 = (VAR_14 & ~VAR_6) + VAR_9->scripta_ba;
    break;
   case 130:
    VAR_13 = (VAR_14 & ~VAR_6) + VAR_9->scriptb_ba;
    break;
   case 128:
    VAR_13 = (VAR_14 & ~VAR_6) + VAR_9->hcb_ba;
    break;
   case 0:





    if (VAR_14 == 0) {
     VAR_13 = VAR_14;
     break;
    }

   default:
    VAR_13 = 0;
    FUNC_1("sym_fw_bind_script: "
          "weird relocation %x\n", VAR_14);
    break;
   }

   *VAR_18++ = FUNC_0(VAR_13);
  }
 };
}
