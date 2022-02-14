
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_7__ {void* all; } ;
struct TYPE_8__ {void* PC; void* PR; void* MACL; void* MACH; void* VBR; void* GBR; TYPE_1__ SR; void** R; } ;
typedef TYPE_2__ sh2regs_struct ;
struct TYPE_9__ {int debugsh; } ;
typedef TYPE_3__ YuiSh ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2( YuiSh *VAR_0, int VAR_1, u32 VAR_2 ) {


  sh2regs_struct VAR_3;
  FUNC_0(VAR_0->debugsh, &VAR_3);

  if ( VAR_1 < 16 ) VAR_3.R[VAR_1] = VAR_2;
  switch ( VAR_1 ) {
  case 16: VAR_3.SR.all = VAR_2; break;
  case 17: VAR_3.GBR = VAR_2; break;
  case 18: VAR_3.VBR = VAR_2; break;
  case 19: VAR_3.MACH = VAR_2; break;
  case 20: VAR_3.MACL = VAR_2; break;
  case 21: VAR_3.PR = VAR_2; break;
  case 22: VAR_3.PC = VAR_2; break;
  }

  FUNC_1(VAR_0->debugsh, &VAR_3);
}
