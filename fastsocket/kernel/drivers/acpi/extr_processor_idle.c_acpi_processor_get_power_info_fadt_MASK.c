
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* states; } ;
struct acpi_processor {TYPE_2__ power; scalar_t__ pblk; } ;
struct TYPE_6__ {int flags; scalar_t__ C2latency; scalar_t__ C3latency; } ;
struct TYPE_4__ {size_t type; scalar_t__ latency; scalar_t__ address; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__ VAR_8 ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct acpi_processor *VAR_9)
{

 if (!VAR_9)
  return -VAR_6;

 if (!VAR_9->pblk)
  return -VAR_7;


 VAR_9->power.states[VAR_4].type = VAR_4;
 VAR_9->power.states[VAR_5].type = VAR_5;






 if ((FUNC_1() > 1) &&
     !(VAR_8.flags & VAR_1))
  return -VAR_7;



 VAR_9->power.states[VAR_4].address = VAR_9->pblk + 4;
 VAR_9->power.states[VAR_5].address = VAR_9->pblk + 5;


 VAR_9->power.states[VAR_4].latency = VAR_8.C2latency;
 VAR_9->power.states[VAR_5].latency = VAR_8.C3latency;





 if (VAR_8.C2latency > VAR_2) {
  FUNC_0((VAR_0,
   "C2 latency too large [%d]\n", VAR_8.C2latency));

  VAR_9->power.states[VAR_4].address = 0;
 }





 if (VAR_8.C3latency > VAR_3) {
  FUNC_0((VAR_0,
   "C3 latency too large [%d]\n", VAR_8.C3latency));

  VAR_9->power.states[VAR_5].address = 0;
 }

 FUNC_0((VAR_0,
     "lvl2[0x%08x] lvl3[0x%08x]\n",
     VAR_9->power.states[VAR_4].address,
     VAR_9->power.states[VAR_5].address));

 return 0;
}
