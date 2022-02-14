
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
typedef int u16 ;
struct wb35_reg {void* BB60; void* BB5C; void* BB58; void* BB54; void* BB50; void* BB4C; void* BB48; void* BB3C; void* BB30; void* BB2C; void* BB0C; void* M98_MacControl; void* M88_MacControl; void* M84_MacControl; void* M80_MacControl; void* M7C_MacControl; void* M78_ERPInformation; void* M74_MacControl; void* M70_MacControl; void* M68_MacControl; void* M60_MacControl; void* M4C_MacStatus; void* M48_MacControl; void* M44_MacControl; void* M40_MacControl; void* M38_MacControl; void* M2C_MacControl; void* M28_MacControl; void* M24_MacControl; void* M08_MulticastAddress2; void* M04_MulticastAddress1; void* M00_MacControl; void* D00_DmaControl; void* U1BC_LEDConfigure; void* U1B0; } ;
struct hw_data {struct wb35_reg reg; } ;



void
FUNC_0(struct hw_data * VAR_0, u16 VAR_1, u32 VAR_2)
{
 struct wb35_reg *VAR_3 = &VAR_0->reg;
 switch (VAR_1) {
 case 0x3b0: VAR_3->U1B0 = VAR_2; break;
 case 0x3bc: VAR_3->U1BC_LEDConfigure = VAR_2; break;
 case 0x400: VAR_3->D00_DmaControl = VAR_2; break;
 case 0x800: VAR_3->M00_MacControl = VAR_2; break;
 case 0x804: VAR_3->M04_MulticastAddress1 = VAR_2; break;
 case 0x808: VAR_3->M08_MulticastAddress2 = VAR_2; break;
 case 0x824: VAR_3->M24_MacControl = VAR_2; break;
 case 0x828: VAR_3->M28_MacControl = VAR_2; break;
 case 0x82c: VAR_3->M2C_MacControl = VAR_2; break;
 case 0x838: VAR_3->M38_MacControl = VAR_2; break;
 case 0x840: VAR_3->M40_MacControl = VAR_2; break;
 case 0x844: VAR_3->M44_MacControl = VAR_2; break;
 case 0x848: VAR_3->M48_MacControl = VAR_2; break;
 case 0x84c: VAR_3->M4C_MacStatus = VAR_2; break;
 case 0x860: VAR_3->M60_MacControl = VAR_2; break;
 case 0x868: VAR_3->M68_MacControl = VAR_2; break;
 case 0x870: VAR_3->M70_MacControl = VAR_2; break;
 case 0x874: VAR_3->M74_MacControl = VAR_2; break;
 case 0x878: VAR_3->M78_ERPInformation = VAR_2; break;
 case 0x87C: VAR_3->M7C_MacControl = VAR_2; break;
 case 0x880: VAR_3->M80_MacControl = VAR_2; break;
 case 0x884: VAR_3->M84_MacControl = VAR_2; break;
 case 0x888: VAR_3->M88_MacControl = VAR_2; break;
 case 0x898: VAR_3->M98_MacControl = VAR_2; break;
 case 0x100c: VAR_3->BB0C = VAR_2; break;
 case 0x102c: VAR_3->BB2C = VAR_2; break;
 case 0x1030: VAR_3->BB30 = VAR_2; break;
 case 0x103c: VAR_3->BB3C = VAR_2; break;
 case 0x1048: VAR_3->BB48 = VAR_2; break;
 case 0x104c: VAR_3->BB4C = VAR_2; break;
 case 0x1050: VAR_3->BB50 = VAR_2; break;
 case 0x1054: VAR_3->BB54 = VAR_2; break;
 case 0x1058: VAR_3->BB58 = VAR_2; break;
 case 0x105c: VAR_3->BB5C = VAR_2; break;
 case 0x1060: VAR_3->BB60 = VAR_2; break;
 }
}
