
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct acpi_processor_cx {int valid; int latency; int latency_ticks; int address; } ;
struct TYPE_7__ {int bm_check; int bm_control; int has_cst; } ;
struct acpi_processor {TYPE_3__ flags; int id; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_5__ {scalar_t__ fdma; } ;
struct TYPE_6__ {TYPE_1__ piix4; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ,int) ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static void FUNC_3(struct acpi_processor *VAR_5,
        struct acpi_processor_cx *VAR_6)
{
 static int VAR_7 = -1;
 static int VAR_8 = -1;


 if (!VAR_6->address)
  return;
 else if (VAR_4.piix4.fdma) {
  FUNC_0((VAR_1,
      "C3 not supported on PIIX4 with Type-F DMA\n"));
  return;
 }


 if (VAR_7 == -1) {

  FUNC_1(&(VAR_5->flags), VAR_5->id);
  VAR_7 = VAR_5->flags.bm_check;
  VAR_8 = VAR_5->flags.bm_control;
 } else {
  VAR_5->flags.bm_check = VAR_7;
  VAR_5->flags.bm_control = VAR_8;
 }

 if (VAR_5->flags.bm_check) {
  if (!VAR_5->flags.bm_control) {
   if (VAR_5->flags.has_cst != 1) {

    FUNC_0((VAR_1,
     "C3 support requires BM control\n"));
    return;
   } else {

    FUNC_0((VAR_1,
     "C3 support without BM control\n"));
   }
  }
 } else {




  if (!(VAR_3.flags & VAR_2)) {
   FUNC_0((VAR_1,
       "Cache invalidation should work properly"
       " for C3 to be enabled on SMP systems\n"));
   return;
  }
 }







 VAR_6->valid = 1;

 VAR_6->latency_ticks = VAR_6->latency;
 FUNC_2(VAR_0, 1);

 return;
}
