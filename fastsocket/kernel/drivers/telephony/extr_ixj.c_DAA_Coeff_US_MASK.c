
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_47__ TYPE_9__ ;
typedef struct TYPE_46__ TYPE_8__ ;
typedef struct TYPE_45__ TYPE_7__ ;
typedef struct TYPE_44__ TYPE_6__ ;
typedef struct TYPE_43__ TYPE_5__ ;
typedef struct TYPE_42__ TYPE_4__ ;
typedef struct TYPE_41__ TYPE_3__ ;
typedef struct TYPE_40__ TYPE_2__ ;
typedef struct TYPE_39__ TYPE_23__ ;
typedef struct TYPE_38__ TYPE_22__ ;
typedef struct TYPE_37__ TYPE_21__ ;
typedef struct TYPE_36__ TYPE_20__ ;
typedef struct TYPE_35__ TYPE_1__ ;
typedef struct TYPE_34__ TYPE_19__ ;
typedef struct TYPE_33__ TYPE_18__ ;
typedef struct TYPE_32__ TYPE_17__ ;
typedef struct TYPE_31__ TYPE_16__ ;
typedef struct TYPE_30__ TYPE_15__ ;
typedef struct TYPE_29__ TYPE_14__ ;
typedef struct TYPE_28__ TYPE_13__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


struct TYPE_45__ {int reg; } ;
struct TYPE_44__ {int reg; } ;
struct TYPE_43__ {int reg; } ;
struct TYPE_42__ {int reg; } ;
struct TYPE_41__ {int reg; } ;
struct TYPE_46__ {TYPE_7__ cr4; TYPE_6__ cr3; TYPE_5__ cr2; TYPE_4__ cr1; TYPE_3__ cr0; } ;
struct TYPE_47__ {TYPE_8__ SOP; } ;
struct TYPE_35__ {scalar_t__* CallerID; } ;
struct TYPE_40__ {TYPE_1__ CAO; } ;
struct TYPE_36__ {int* IMFilterCoeff_1; int* IMFilterCoeff_2; int* FRXFilterCoeff; int* FRRFilterCoeff; int* AXFilterCoeff; int* ARFilterCoeff; int* THFilterCoeff_1; int* THFilterCoeff_2; int* THFilterCoeff_3; int* RingerImpendance_1; int* RingerImpendance_2; int* LevelmeteringRinging; int* CallerID1stTone; int* CallerID2ndTone; int* Tone1Coeff; int* Tone2Coeff; } ;
struct TYPE_37__ {TYPE_20__ COP; } ;
struct TYPE_32__ {int reg; } ;
struct TYPE_30__ {int reg; } ;
struct TYPE_29__ {int reg; } ;
struct TYPE_28__ {int reg; } ;
struct TYPE_27__ {int reg; } ;
struct TYPE_26__ {int reg; } ;
struct TYPE_33__ {TYPE_17__ xr7; TYPE_15__ xr5; TYPE_14__ xr4; TYPE_13__ xr3; TYPE_12__ xr2; TYPE_11__ xr1; } ;
struct TYPE_34__ {TYPE_18__ XOP; } ;
struct TYPE_31__ {int reg; } ;
struct TYPE_25__ {int reg; } ;
struct TYPE_38__ {TYPE_21__ COP_REGS; TYPE_19__ XOP_REGS; TYPE_16__ XOP_xr6_W; TYPE_10__ XOP_xr0_W; TYPE_9__ SOP_REGS; TYPE_2__ CAO_REGS; } ;
struct TYPE_39__ {TYPE_22__ m_DAAShadowRegs; int daa_country; } ;
typedef TYPE_23__ IXJ ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(IXJ *VAR_2)
{
 int VAR_3;

 VAR_2->daa_country = VAR_1;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2->m_DAAShadowRegs.CAO_REGS.CAO.CallerID[VAR_3] = 0;
 }


 VAR_2->m_DAAShadowRegs.COP_REGS.COP.IMFilterCoeff_1[7] = 0x03;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.IMFilterCoeff_1[6] = 0x4B;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.IMFilterCoeff_1[5] = 0x5D;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.IMFilterCoeff_1[4] = 0xCD;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.IMFilterCoeff_1[3] = 0x24;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.IMFilterCoeff_1[2] = 0xC5;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.IMFilterCoeff_1[1] = 0xA0;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.IMFilterCoeff_1[0] = 0x00;

 VAR_2->m_DAAShadowRegs.COP_REGS.COP.IMFilterCoeff_2[7] = 0x71;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.IMFilterCoeff_2[6] = 0x1A;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.IMFilterCoeff_2[5] = 0x00;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.IMFilterCoeff_2[4] = 0x0A;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.IMFilterCoeff_2[3] = 0xB5;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.IMFilterCoeff_2[2] = 0x33;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.IMFilterCoeff_2[1] = 0xE0;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.IMFilterCoeff_2[0] = 0x08;

 VAR_2->m_DAAShadowRegs.COP_REGS.COP.FRXFilterCoeff[7] = 0x05;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.FRXFilterCoeff[6] = 0xA3;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.FRXFilterCoeff[5] = 0x72;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.FRXFilterCoeff[4] = 0x34;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.FRXFilterCoeff[3] = 0x3F;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.FRXFilterCoeff[2] = 0x3B;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.FRXFilterCoeff[1] = 0x30;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.FRXFilterCoeff[0] = 0x08;

 VAR_2->m_DAAShadowRegs.COP_REGS.COP.FRRFilterCoeff[7] = 0x05;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.FRRFilterCoeff[6] = 0x87;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.FRRFilterCoeff[5] = 0xF9;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.FRRFilterCoeff[4] = 0x3E;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.FRRFilterCoeff[3] = 0x32;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.FRRFilterCoeff[2] = 0xDA;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.FRRFilterCoeff[1] = 0xB0;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.FRRFilterCoeff[0] = 0x08;

 VAR_2->m_DAAShadowRegs.COP_REGS.COP.AXFilterCoeff[3] = 0x41;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.AXFilterCoeff[2] = 0xB5;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.AXFilterCoeff[1] = 0xDD;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.AXFilterCoeff[0] = 0xCA;

 VAR_2->m_DAAShadowRegs.COP_REGS.COP.ARFilterCoeff[3] = 0x25;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.ARFilterCoeff[2] = 0xC7;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.ARFilterCoeff[1] = 0x10;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.ARFilterCoeff[0] = 0xD6;

 VAR_2->m_DAAShadowRegs.COP_REGS.COP.THFilterCoeff_1[7] = 0x00;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.THFilterCoeff_1[6] = 0x42;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.THFilterCoeff_1[5] = 0x48;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.THFilterCoeff_1[4] = 0x81;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.THFilterCoeff_1[3] = 0xA5;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.THFilterCoeff_1[2] = 0x80;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.THFilterCoeff_1[1] = 0x00;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.THFilterCoeff_1[0] = 0x98;

 VAR_2->m_DAAShadowRegs.COP_REGS.COP.THFilterCoeff_2[7] = 0x02;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.THFilterCoeff_2[6] = 0xA2;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.THFilterCoeff_2[5] = 0x2B;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.THFilterCoeff_2[4] = 0xB0;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.THFilterCoeff_2[3] = 0xE8;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.THFilterCoeff_2[2] = 0xAB;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.THFilterCoeff_2[1] = 0x81;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.THFilterCoeff_2[0] = 0xCC;

 VAR_2->m_DAAShadowRegs.COP_REGS.COP.THFilterCoeff_3[7] = 0x00;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.THFilterCoeff_3[6] = 0x88;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.THFilterCoeff_3[5] = 0xD2;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.THFilterCoeff_3[4] = 0x24;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.THFilterCoeff_3[3] = 0xBA;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.THFilterCoeff_3[2] = 0xA9;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.THFilterCoeff_3[1] = 0x3B;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.THFilterCoeff_3[0] = 0xA6;



 VAR_2->m_DAAShadowRegs.COP_REGS.COP.RingerImpendance_1[7] = 0x1B;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.RingerImpendance_1[6] = 0x3C;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.RingerImpendance_1[5] = 0x93;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.RingerImpendance_1[4] = 0x3A;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.RingerImpendance_1[3] = 0x22;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.RingerImpendance_1[2] = 0x12;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.RingerImpendance_1[1] = 0xA3;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.RingerImpendance_1[0] = 0x23;

 VAR_2->m_DAAShadowRegs.COP_REGS.COP.RingerImpendance_2[7] = 0x12;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.RingerImpendance_2[6] = 0xA2;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.RingerImpendance_2[5] = 0xA6;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.RingerImpendance_2[4] = 0xBA;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.RingerImpendance_2[3] = 0x22;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.RingerImpendance_2[2] = 0x7A;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.RingerImpendance_2[1] = 0x0A;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.RingerImpendance_2[0] = 0xD5;


 VAR_2->m_DAAShadowRegs.COP_REGS.COP.LevelmeteringRinging[3] = 0xAA;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.LevelmeteringRinging[2] = 0x35;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.LevelmeteringRinging[1] = 0x0F;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.LevelmeteringRinging[0] = 0x8E;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.CallerID1stTone[7] = 0xCA;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.CallerID1stTone[6] = 0x0E;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.CallerID1stTone[5] = 0xCA;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.CallerID1stTone[4] = 0x09;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.CallerID1stTone[3] = 0x99;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.CallerID1stTone[2] = 0x99;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.CallerID1stTone[1] = 0x99;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.CallerID1stTone[0] = 0x99;

 VAR_2->m_DAAShadowRegs.COP_REGS.COP.CallerID2ndTone[7] = 0xFD;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.CallerID2ndTone[6] = 0xB5;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.CallerID2ndTone[5] = 0xBA;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.CallerID2ndTone[4] = 0x07;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.CallerID2ndTone[3] = 0xDA;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.CallerID2ndTone[2] = 0x00;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.CallerID2ndTone[1] = 0x00;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.CallerID2ndTone[0] = 0x00;



 VAR_2->m_DAAShadowRegs.SOP_REGS.SOP.cr0.reg = 0xFF;

 VAR_2->m_DAAShadowRegs.SOP_REGS.SOP.cr1.reg = 0x05;

 VAR_2->m_DAAShadowRegs.SOP_REGS.SOP.cr2.reg = 0x04;

 VAR_2->m_DAAShadowRegs.SOP_REGS.SOP.cr3.reg = 0x00;

 VAR_2->m_DAAShadowRegs.SOP_REGS.SOP.cr4.reg = 0x02;







 VAR_2->m_DAAShadowRegs.XOP_xr0_W.reg = 0x02;


 VAR_2->m_DAAShadowRegs.XOP_REGS.XOP.xr1.reg = 0x3C;

 VAR_2->m_DAAShadowRegs.XOP_REGS.XOP.xr2.reg = 0x7D;

 VAR_2->m_DAAShadowRegs.XOP_REGS.XOP.xr3.reg = 0x3B;


 VAR_2->m_DAAShadowRegs.XOP_REGS.XOP.xr4.reg = 0x00;

 VAR_2->m_DAAShadowRegs.XOP_REGS.XOP.xr5.reg = 0x22;

 VAR_2->m_DAAShadowRegs.XOP_xr6_W.reg = 0x00;

 VAR_2->m_DAAShadowRegs.XOP_REGS.XOP.xr7.reg = 0x40;






 VAR_2->m_DAAShadowRegs.COP_REGS.COP.Tone1Coeff[3] = 0x11;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.Tone1Coeff[2] = 0xB3;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.Tone1Coeff[1] = 0x5A;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.Tone1Coeff[0] = 0x2C;




 VAR_2->m_DAAShadowRegs.COP_REGS.COP.Tone2Coeff[3] = 0x32;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.Tone2Coeff[2] = 0x32;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.Tone2Coeff[1] = 0x52;
 VAR_2->m_DAAShadowRegs.COP_REGS.COP.Tone2Coeff[0] = 0xB3;
}
