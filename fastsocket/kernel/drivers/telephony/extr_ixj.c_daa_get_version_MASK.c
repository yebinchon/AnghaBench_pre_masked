
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int high; int low; } ;
struct TYPE_10__ {int reg; } ;
struct TYPE_11__ {TYPE_1__ cr5; } ;
struct TYPE_12__ {TYPE_2__ SOP; } ;
struct TYPE_13__ {TYPE_3__ SOP_REGS; } ;
struct TYPE_14__ {TYPE_4__ m_DAAShadowRegs; scalar_t__ XILINXbase; } ;
typedef TYPE_5__ IXJ ;
typedef TYPE_6__ BYTES ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*) ;
 void* FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (char*,int,int) ;

__attribute__((used)) static char FUNC_5(IXJ *VAR_4)
{
 BYTES VAR_5;

 if (!FUNC_1(VAR_4))
  return 0;

 VAR_5.high = 0x35;
 VAR_5.low = 0x00;
 FUNC_3(VAR_5.high, VAR_4->XILINXbase + 0x03);
 FUNC_3(VAR_5.low, VAR_4->XILINXbase + 0x02);

 if (!FUNC_0(VAR_4, VAR_1))
  return 0;

 VAR_5.high = FUNC_2(VAR_4->XILINXbase + 0x03);
 VAR_5.low = FUNC_2(VAR_4->XILINXbase + 0x02);
 if (VAR_5.low != VAR_0) {
  if (VAR_3 & 0x0001)
   FUNC_4("DAA Get Version Cannot read DAA ID Byte high = %d low = %d\n", VAR_5.high, VAR_5.low);
  return 0;
 }
 if (!FUNC_0(VAR_4, VAR_1))
  return 0;

 if (!FUNC_0(VAR_4, VAR_2))
  return 0;

 VAR_5.high = FUNC_2(VAR_4->XILINXbase + 0x03);
 VAR_5.low = FUNC_2(VAR_4->XILINXbase + 0x02);
 if (VAR_3 & 0x0002)
  FUNC_4("DAA CR5 Byte high = 0x%x low = 0x%x\n", VAR_5.high, VAR_5.low);
 VAR_4->m_DAAShadowRegs.SOP_REGS.SOP.cr5.reg = VAR_5.high;
 return VAR_5.high;
}
