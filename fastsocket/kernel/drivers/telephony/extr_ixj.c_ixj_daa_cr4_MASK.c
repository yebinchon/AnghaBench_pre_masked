
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_18__ {int high; char low; } ;
struct TYPE_12__ {int AGX; int AGR_Z; } ;
struct TYPE_13__ {char reg; TYPE_1__ bitreg; } ;
struct TYPE_14__ {TYPE_2__ cr4; } ;
struct TYPE_15__ {TYPE_3__ SOP; } ;
struct TYPE_16__ {TYPE_4__ SOP_REGS; } ;
struct TYPE_17__ {int daa_mode; TYPE_5__ m_DAAShadowRegs; } ;
typedef TYPE_6__ IXJ ;
typedef TYPE_7__ BYTES ;


 int FUNC_0 (TYPE_6__*) ;




 int FUNC_1 (TYPE_7__*,TYPE_6__*) ;

__attribute__((used)) static int FUNC_2(IXJ *VAR_0, char VAR_1)
{
 BYTES VAR_2;

 switch (VAR_0->daa_mode) {
 case 128:
  VAR_2.high = 0x14;
  break;
 case 129:
  VAR_2.high = 0x54;
  break;
 case 131:
  VAR_2.high = 0x94;
  break;
 case 130:
  VAR_2.high = 0xD4;
  break;
 }

 VAR_0->m_DAAShadowRegs.SOP_REGS.SOP.cr4.reg = VAR_1;

 switch (VAR_0->m_DAAShadowRegs.SOP_REGS.SOP.cr4.bitreg.AGX) {
 case 0:
  VAR_0->m_DAAShadowRegs.SOP_REGS.SOP.cr4.bitreg.AGR_Z = 0;
  break;
 case 1:
  VAR_0->m_DAAShadowRegs.SOP_REGS.SOP.cr4.bitreg.AGR_Z = 2;
  break;
 case 2:
  VAR_0->m_DAAShadowRegs.SOP_REGS.SOP.cr4.bitreg.AGR_Z = 1;
  break;
 case 3:
  VAR_0->m_DAAShadowRegs.SOP_REGS.SOP.cr4.bitreg.AGR_Z = 3;
  break;
 }

 VAR_2.low = VAR_0->m_DAAShadowRegs.SOP_REGS.SOP.cr4.reg;

 if (!FUNC_1(&VAR_2, VAR_0))
  return 0;

 if (!FUNC_0(VAR_0))
  return 0;

 return 1;
}
