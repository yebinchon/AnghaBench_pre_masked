
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_26__ {int reg; } ;
struct TYPE_25__ {int reg; } ;
struct TYPE_24__ {int reg; } ;
struct TYPE_23__ {int reg; } ;
struct TYPE_22__ {int reg; } ;
struct TYPE_21__ {int reg; } ;
struct TYPE_27__ {TYPE_6__ cr0; TYPE_5__ cr1; TYPE_4__ cr2; TYPE_3__ cr3; TYPE_2__ cr4; TYPE_1__ cr5; } ;
struct TYPE_28__ {TYPE_7__ SOP; } ;
struct TYPE_29__ {TYPE_8__ SOP_REGS; } ;
struct TYPE_20__ {int high; int low; } ;
struct TYPE_19__ {int daa_mode; TYPE_9__ m_DAAShadowRegs; scalar_t__ XILINXbase; } ;
struct TYPE_17__ {int high; } ;
struct TYPE_18__ {TYPE_10__ bytes; int word; } ;
typedef TYPE_11__ IXJ_WORD ;
typedef TYPE_12__ IXJ ;
typedef TYPE_13__ BYTES ;


 int VAR_0 ;
 int FUNC_0 (TYPE_12__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_12__*) ;




 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (char*,int,int) ;

__attribute__((used)) static char FUNC_6(IXJ *VAR_4, int VAR_5)
{
 IXJ_WORD VAR_6;
 BYTES VAR_7;

 if (!FUNC_1(VAR_4))
  return 0;

 switch (VAR_4->daa_mode) {
 case 128:
  VAR_7.high = 0x30 + VAR_5;
  break;
 case 129:
  VAR_7.high = 0x70 + VAR_5;
  break;
 case 131:
  VAR_7.high = 0xB0 + VAR_5;
  break;
 case 130:
 default:
  VAR_7.high = 0xF0 + VAR_5;
  break;
 }

 VAR_7.low = 0x00;

 FUNC_4(VAR_7.high, VAR_4->XILINXbase + 0x03);
 FUNC_4(VAR_7.low, VAR_4->XILINXbase + 0x02);

 if (!FUNC_0(VAR_4, VAR_1))
  return 0;

 VAR_7.high = FUNC_2(VAR_4->XILINXbase + 0x03);
 VAR_7.low = FUNC_2(VAR_4->XILINXbase + 0x02);
 if (VAR_7.low != VAR_0) {
  if (VAR_3 & 0x0001)
   FUNC_5("Cannot read DAA ID Byte high = %d low = %d\n", VAR_7.high, VAR_7.low);
  return 0;
 }
 if (!FUNC_0(VAR_4, VAR_1))
  return 0;
 if (!FUNC_0(VAR_4, VAR_2))
  return 0;

 VAR_6.word = FUNC_3(VAR_4->XILINXbase + 0x02);

 switch(VAR_5){
  case 5:
   VAR_4->m_DAAShadowRegs.SOP_REGS.SOP.cr5.reg = VAR_6.bytes.high;
   break;
  case 4:
   VAR_4->m_DAAShadowRegs.SOP_REGS.SOP.cr4.reg = VAR_6.bytes.high;
   break;
  case 3:
   VAR_4->m_DAAShadowRegs.SOP_REGS.SOP.cr3.reg = VAR_6.bytes.high;
   break;
  case 2:
   VAR_4->m_DAAShadowRegs.SOP_REGS.SOP.cr2.reg = VAR_6.bytes.high;
   break;
  case 1:
   VAR_4->m_DAAShadowRegs.SOP_REGS.SOP.cr1.reg = VAR_6.bytes.high;
   break;
  case 0:
   VAR_4->m_DAAShadowRegs.SOP_REGS.SOP.cr0.reg = VAR_6.bytes.high;
   break;
  default:
   return 0;
 }
 return 1;
}
