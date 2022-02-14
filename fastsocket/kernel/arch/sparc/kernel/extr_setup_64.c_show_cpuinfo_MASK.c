
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int clock_tick; } ;


 TYPE_1__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct seq_file*) ;
 int VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (struct seq_file*,char*,int ,int ,int ,int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct seq_file*) ;
 int FUNC_5 (struct seq_file*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_9, void *VAR_10)
{
 FUNC_3(VAR_9,
     "cpu\t\t: %s\n"
     "fpu\t\t: %s\n"
     "pmu\t\t: %s\n"
     "prom\t\t: %s\n"
     "type\t\t: %s\n"
     "ncpus probed\t: %d\n"
     "ncpus active\t: %d\n"
     "D$ parity tl1\t: %u\n"
     "I$ parity tl1\t: %u\n"

     "Cpu0ClkTck\t: %016lx\n"

     ,
     VAR_5,
     VAR_6,
     VAR_7,
     VAR_4,
     ((VAR_8 == VAR_1) ?
      "sun4v" :
      "sun4u"),
     VAR_3,
     FUNC_2(),
     VAR_0,
     VAR_2

     , FUNC_0(0).clock_tick

  );



 FUNC_1(VAR_9);



 return 0;
}
