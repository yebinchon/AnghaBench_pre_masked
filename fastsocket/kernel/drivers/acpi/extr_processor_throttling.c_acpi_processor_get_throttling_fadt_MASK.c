
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int state; int state_count; int duty_offset; TYPE_2__* states; int address; } ;
struct TYPE_4__ {int throttling; } ;
struct acpi_processor {TYPE_3__ throttling; TYPE_1__ flags; } ;
struct TYPE_5__ {int performance; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct acpi_processor *VAR_3)
{
 int VAR_4 = 0;
 u32 VAR_5 = 0;
 u32 VAR_6 = 0;
 u32 VAR_7 = 0;

 if (!VAR_3)
  return -VAR_1;

 if (!VAR_3->flags.throttling)
  return -VAR_2;

 VAR_3->throttling.state = 0;

 VAR_6 = VAR_3->throttling.state_count - 1;

 VAR_6 <<= VAR_3->throttling.duty_offset;

 FUNC_2();

 VAR_5 = FUNC_1(VAR_3->throttling.address);





 if (VAR_5 & 0x10) {
  VAR_7 = VAR_5 & VAR_6;
  VAR_7 >>= VAR_3->throttling.duty_offset;

  if (VAR_7)
   VAR_4 = VAR_3->throttling.state_count - VAR_7;
 }

 VAR_3->throttling.state = VAR_4;

 FUNC_3();

 FUNC_0((VAR_0,
     "Throttling state is T%d (%d%% throttling applied)\n",
     VAR_4, VAR_3->throttling.states[VAR_4].performance));

 return 0;
}
