
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_func {int device; int status; } ;
struct controller {int slot_device_offset; int speed; int crit_sect; scalar_t__ hpc_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct controller*,int) ;
 int FUNC_1 (struct controller*,int) ;
 int FUNC_2 (struct controller*,struct pci_func*) ;
 int FUNC_3 (struct controller*,struct pci_func*) ;
 int FUNC_4 (struct controller*,int) ;
 int FUNC_5 (struct controller*,int) ;
 int FUNC_6 (struct controller*,int) ;
 int FUNC_7 (struct controller*,int) ;
 int FUNC_8 (struct controller*,int) ;
 scalar_t__ FUNC_9 (struct controller*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (struct controller*) ;
 scalar_t__ FUNC_16 (struct controller*,int,int) ;
 int FUNC_17 (struct controller*,int) ;
 int FUNC_18 (struct controller*,int) ;
 int FUNC_19 (struct controller*) ;
 int FUNC_20 (int,scalar_t__) ;

__attribute__((used)) static u32 FUNC_21(struct pci_func *VAR_7, struct controller *VAR_8)
{
 u8 VAR_9;
 u8 VAR_10;
 u8 VAR_11;
 u32 VAR_12 = 0;

 VAR_9 = VAR_7->device - VAR_8->slot_device_offset;




 if (FUNC_14(VAR_8->hpc_reg + VAR_3) & (0x01L << VAR_9))
  VAR_12 = VAR_2;



 else if (FUNC_9 (VAR_8, VAR_9))
  VAR_12 = VAR_0;
 else {
  FUNC_11(&VAR_8->crit_sect);


  FUNC_5 (VAR_8, VAR_9);

  FUNC_15(VAR_8);


  FUNC_19 (VAR_8);



  VAR_10 = FUNC_13(VAR_8->hpc_reg + VAR_5);
  FUNC_20(0x00, VAR_8->hpc_reg + VAR_5);
  FUNC_20(VAR_10, VAR_8->hpc_reg + VAR_5);

  FUNC_15(VAR_8);


  FUNC_19 (VAR_8);

  VAR_11 = FUNC_6(VAR_8, VAR_9);
  if (VAR_8->speed != VAR_11)
   if (FUNC_16(VAR_8, VAR_11, VAR_9))
    VAR_12 = VAR_6;


  FUNC_4 (VAR_8, VAR_9);

  FUNC_15(VAR_8);


  FUNC_19 (VAR_8);

  FUNC_12(&VAR_8->crit_sect);

  if (VAR_12)
   return VAR_12;

  FUNC_11(&VAR_8->crit_sect);

  FUNC_18 (VAR_8, VAR_9);
  FUNC_7 (VAR_8, VAR_9);

  FUNC_0 (VAR_8, VAR_9);

  FUNC_15(VAR_8);


  FUNC_19 (VAR_8);

  FUNC_12(&VAR_8->crit_sect);


  FUNC_10(1*VAR_1);


  if (VAR_7->status == 0xFF) {

   VAR_12 = VAR_4;
   VAR_7->status = 0;
  } else
   VAR_12 = FUNC_3(VAR_8, VAR_7);

  if (!VAR_12) {


   VAR_12 = FUNC_2(VAR_8, VAR_7);
   FUNC_11(&VAR_8->crit_sect);

   FUNC_1 (VAR_8, VAR_9);
   FUNC_8 (VAR_8, VAR_9);
   FUNC_17 (VAR_8, VAR_9);

   FUNC_15(VAR_8);


   FUNC_19 (VAR_8);

   FUNC_12(&VAR_8->crit_sect);

   if (VAR_12)
    return VAR_12;
   else
    return 1;

  } else {







   FUNC_11(&VAR_8->crit_sect);

   FUNC_1 (VAR_8, VAR_9);
   FUNC_8 (VAR_8, VAR_9);
   FUNC_17 (VAR_8, VAR_9);

   FUNC_15(VAR_8);


   FUNC_19 (VAR_8);

   FUNC_12(&VAR_8->crit_sect);
  }

 }
 return VAR_12;

}
