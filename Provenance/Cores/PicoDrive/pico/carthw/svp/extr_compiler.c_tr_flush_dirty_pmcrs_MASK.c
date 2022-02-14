
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int v; } ;
struct TYPE_4__ {int emu_status; int* pmac_read; int* pmac_write; TYPE_1__ pmc; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,int) ;
 int* VAR_6 ;
 TYPE_2__ VAR_7 ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(void)
{
 u32 VAR_8, VAR_9 = (u32)-1;
 if (!(VAR_5 & 0x3ff80000)) return;

 if (VAR_5 & VAR_1) {
  VAR_9 = VAR_7.pmc.v;
  FUNC_2(1, VAR_9);
  FUNC_0(1,7,0x400+VAR_2*4);

  if (VAR_7.emu_status & (VAR_4|VAR_3)) {
   FUNC_1(VAR_0, "!! SSP_PMC_SET|SSP_PMC_HAVE_ADDR set on flush\n");
   FUNC_3();
  }
 }
 for (VAR_8 = 0; VAR_8 < 5; VAR_8++)
 {
  if (VAR_5 & (1 << (20+VAR_8))) {
   if (VAR_9 != VAR_7.pmac_read[VAR_8]) {
    VAR_9 = VAR_7.pmac_read[VAR_8];
    FUNC_2(1, VAR_9);
   }
   FUNC_0(1,7,0x454+VAR_8*4);
  }
  if (VAR_5 & (1 << (25+VAR_8))) {
   if (VAR_9 != VAR_7.pmac_write[VAR_8]) {
    VAR_9 = VAR_7.pmac_write[VAR_8];
    FUNC_2(1, VAR_9);
   }
   FUNC_0(1,7,0x46c+VAR_8*4);
  }
 }
 VAR_5 &= ~0x3ff80000;
 VAR_6[1] = -1;
}
