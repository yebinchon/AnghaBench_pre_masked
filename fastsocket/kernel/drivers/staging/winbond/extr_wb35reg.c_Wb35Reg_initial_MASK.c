
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct wb35_reg {int EEPROMPhyType; int EEPROMRegion; int EP0VM_spin_lock; } ;
struct hw_data {scalar_t__ phy_type; int PowerIndexFromEEPROM; int VCO_trim; int Scan_Interval; scalar_t__ SurpriseRemove; scalar_t__ SoftwareSet; int PermanentMacAddress; int CurrentMacAddress; struct wb35_reg reg; } ;


 int FUNC_0 (struct hw_data*) ;
 int FUNC_1 (struct hw_data*) ;
 int VAR_0 ;
 int FUNC_2 (struct hw_data*) ;
 int FUNC_3 (struct hw_data*) ;
 int VAR_1 ;
 int FUNC_4 (struct hw_data*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (struct hw_data*) ;
 int FUNC_6 (struct hw_data*) ;
 int FUNC_7 (struct hw_data*,int,int*) ;
 int FUNC_8 (struct hw_data*,int,int) ;
 int FUNC_9 (struct hw_data*) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int *) ;

unsigned char FUNC_12(struct hw_data * VAR_14)
{
 struct wb35_reg *VAR_15=&VAR_14->reg;
 u32 VAR_16;
 u32 VAR_17, VAR_18, VAR_19, VAR_20;


 FUNC_11( &VAR_15->EP0VM_spin_lock );


 FUNC_8( VAR_14, 0x03b4, 0x080d0000 );
 FUNC_7( VAR_14, 0x03b4, &VAR_16 );


 VAR_15->EEPROMPhyType = (u8)( VAR_16 & 0xff );




 if (VAR_15->EEPROMPhyType != VAR_5) {
  if( (VAR_15->EEPROMPhyType == VAR_6) ||
   (VAR_15->EEPROMPhyType == VAR_7) ||
   (VAR_15->EEPROMPhyType == VAR_8) ||
   (VAR_15->EEPROMPhyType == VAR_9) ||
   (VAR_15->EEPROMPhyType == VAR_10) ||
   (VAR_15->EEPROMPhyType == VAR_2) ||
   (VAR_15->EEPROMPhyType == VAR_3) ||
   (VAR_15->EEPROMPhyType == VAR_4) ||
   (VAR_15->EEPROMPhyType == VAR_11) ||
   (VAR_15->EEPROMPhyType == VAR_12))
   VAR_14->phy_type = VAR_15->EEPROMPhyType;
 }


 FUNC_6( VAR_14 );


 FUNC_5( VAR_14 );


 FUNC_8( VAR_14, 0x03b4, 0x08200000 );
 FUNC_7( VAR_14, 0x03b4, &VAR_18 );


 FUNC_8( VAR_14, 0x03b4, 0x08210000 );
 FUNC_7( VAR_14, 0x03b4, &VAR_17 );


 FUNC_8( VAR_14, 0x03b4, 0x08100000 );
 FUNC_7( VAR_14, 0x03b4, &VAR_19 );


 FUNC_8( VAR_14, 0x03b4, 0x081d0000 );
 FUNC_7( VAR_14, 0x03b4, &VAR_20 );


 FUNC_10( VAR_14->CurrentMacAddress, VAR_14->PermanentMacAddress, VAR_0 );


 VAR_14->SoftwareSet = (u16)(VAR_17 & 0xffff);
 VAR_19 &= 0x000000ff;
 VAR_14->PowerIndexFromEEPROM = (u8)VAR_19;
 VAR_14->VCO_trim = (u8)VAR_18 & 0xff;
 if (VAR_14->VCO_trim == 0xff)
  VAR_14->VCO_trim = 0x28;

 VAR_15->EEPROMRegion = (u8)(VAR_20>>8);
 if( VAR_15->EEPROMRegion<1 || VAR_15->EEPROMRegion>6 )
  VAR_15->EEPROMRegion = VAR_1;


 FUNC_2( VAR_14 );


 VAR_14->Scan_Interval = (u8)(VAR_20 & 0xff) * 10;
 if ((VAR_14->Scan_Interval == 2550) || (VAR_14->Scan_Interval < 10))
  VAR_14->Scan_Interval = VAR_13;


 FUNC_4(VAR_14);

 FUNC_0(VAR_14);

 FUNC_9(VAR_14);

 FUNC_3(VAR_14);
 FUNC_1(VAR_14);

 if (VAR_14->SurpriseRemove)
  return 0;
 else
  return 1;
}
