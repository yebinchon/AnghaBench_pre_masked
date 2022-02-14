
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int SoftBusRatio; unsigned int SoftBusRatio4; unsigned int SoftVID; int EnableSoftVID; int EnableSoftBusRatio; scalar_t__ RevisionKey; scalar_t__ RevisionID; } ;
union msr_longhaul {int val; TYPE_2__ bits; } ;
typedef int u32 ;
struct TYPE_4__ {int address; } ;
struct TYPE_6__ {TYPE_1__ xpm_timer_block; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(int VAR_4, unsigned int VAR_5,
     unsigned int VAR_6)
{
 union msr_longhaul VAR_7;
 u32 VAR_8;

 FUNC_4(VAR_0, VAR_7.val);

 if (!VAR_3)
  VAR_7.bits.RevisionKey = VAR_7.bits.RevisionID;
 else
  VAR_7.bits.RevisionKey = 0;
 VAR_7.bits.SoftBusRatio = VAR_5 & 0xf;
 VAR_7.bits.SoftBusRatio4 = (VAR_5 & 0x10) >> 4;

 if (VAR_2)
  VAR_7.bits.SoftVID = (VAR_5 >> 8) & 0x1f;

 FUNC_5();

 if (VAR_2 && VAR_6) {
  VAR_7.bits.EnableSoftVID = 1;
  FUNC_6(VAR_0, VAR_7.val);

  if (!VAR_4) {
   FUNC_0();
   FUNC_1();
  } else {
   FUNC_0();

   FUNC_2(VAR_4);


   VAR_8 = FUNC_3(VAR_1.xpm_timer_block.address);
  }
  VAR_7.bits.EnableSoftVID = 0;
  FUNC_6(VAR_0, VAR_7.val);
 }


 VAR_7.bits.EnableSoftBusRatio = 1;
 FUNC_6(VAR_0, VAR_7.val);
 if (!VAR_4) {
  FUNC_0();
  FUNC_1();
 } else {
  FUNC_0();

  FUNC_2(VAR_4);

  VAR_8 = FUNC_3(VAR_1.xpm_timer_block.address);
 }

 VAR_7.bits.EnableSoftBusRatio = 0;
 FUNC_6(VAR_0, VAR_7.val);


 if (VAR_2 && !VAR_6) {
  VAR_7.bits.EnableSoftVID = 1;
  FUNC_6(VAR_0, VAR_7.val);

  if (!VAR_4) {
   FUNC_0();
   FUNC_1();
  } else {
   FUNC_0();

   FUNC_2(VAR_4);


   VAR_8 = FUNC_3(VAR_1.xpm_timer_block.address);
  }
  VAR_7.bits.EnableSoftVID = 0;
  FUNC_6(VAR_0, VAR_7.val);
 }
}
