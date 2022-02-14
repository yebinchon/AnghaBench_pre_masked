
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int v; } ;
struct TYPE_3__ {int emu_status; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static u32 FUNC_2(void)
{
 if (*(VAR_1-1) == 0x000f)
  FUNC_1(VAR_0, "ssp dummy PM assign %08x @ %04x", VAR_5.v, FUNC_0());
 VAR_6->emu_status &= ~(VAR_3|VAR_2);
 return VAR_4;
}
