
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct wb35_reg {int M00_MacControl; int M24_MacControl; int M2C_MacControl; int M38_MacControl; int M3C_MacControl; int M40_MacControl; int M44_MacControl; int M48_MacControl; int M4C_MacStatus; int M60_MacControl; int M68_MacControl; int M98_MacControl; } ;
struct hw_data {int cwmin; int cwmax; int AID; int slot_time_select; int BeaconPeriod; int ProbeDelay; scalar_t__ bssid; struct wb35_reg reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct hw_data*,int,int) ;

void FUNC_1( struct hw_data * VAR_19 )
{
 struct wb35_reg *VAR_20 = &VAR_19->reg;
 u32 VAR_21;
 u32 VAR_22[11];
 u16 VAR_23;
 VAR_20->M00_MacControl = 0x80000000;



 VAR_20->M24_MacControl = 0x08040042;
 VAR_22[0] = VAR_20->M24_MacControl;

 VAR_22[1] = 0;


 VAR_19->cwmin = VAR_4;
 VAR_19->cwmax = VAR_3;
 VAR_20->M2C_MacControl = VAR_4 << 10;
 VAR_20->M2C_MacControl |= VAR_3;
 VAR_22[2] = VAR_20->M2C_MacControl;


 VAR_22[3] = *(u32 *)VAR_19->bssid;


 VAR_19->AID = VAR_0;
 VAR_21 = *(u16 *)(VAR_19->bssid+4);
 VAR_21 |= VAR_0 << 16;
 VAR_22[4] = VAR_21;


 VAR_20->M38_MacControl = (VAR_15<<8) | (VAR_8 << 4) | VAR_16;
 VAR_22[5] = VAR_20->M38_MacControl;


 VAR_21 = (VAR_12 << 26) | (VAR_7 << 16) | (VAR_5 << 8) | (VAR_17 << 4) | VAR_11 ;
 VAR_20->M3C_MacControl = VAR_21;
 VAR_22[6] = VAR_21;


 VAR_19->slot_time_select = VAR_18;
 VAR_21 = (VAR_1 << 16) | VAR_18;
 VAR_20->M40_MacControl = VAR_21;
 VAR_22[7] = VAR_21;


 VAR_21 = VAR_10 << 10;
 VAR_20->M44_MacControl = VAR_21;
 VAR_22[8] = VAR_21;


 VAR_19->BeaconPeriod = VAR_2;
 VAR_19->ProbeDelay = VAR_13;
 VAR_21 = (VAR_2 << 16) | VAR_13;
 VAR_20->M48_MacControl = VAR_21;
 VAR_22[9] = VAR_21;


 VAR_20->M4C_MacStatus = (VAR_14 << 30) | (VAR_9 << 28) | (VAR_6 << 24);
 VAR_22[10] = VAR_20->M4C_MacStatus;



 for( VAR_23=0; VAR_23<11; VAR_23++ )
  FUNC_0( VAR_19, 0x0824 + VAR_23*4, VAR_22[VAR_23] );


 FUNC_0( VAR_19, 0x0860, 0x12481248 );
 VAR_20->M60_MacControl = 0x12481248;


 FUNC_0( VAR_19, 0x0868, 0x00050900 );
 VAR_20->M68_MacControl = 0x00050900;


 FUNC_0( VAR_19, 0x0898, 0xffff8888 );
 VAR_20->M98_MacControl = 0xffff8888;
}
