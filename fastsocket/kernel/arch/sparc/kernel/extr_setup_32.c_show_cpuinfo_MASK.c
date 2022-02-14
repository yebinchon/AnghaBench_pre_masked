
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_4__ {int udelay_val; int clock_tick; } ;
struct TYPE_3__ {int pv_printrev; int pv_romvers; } ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct seq_file*) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (struct seq_file*,char*,int ,int ,int ,int ,int,int,int *,int ,int ,int,int,int ) ;
 int FUNC_4 (struct seq_file*) ;
 int FUNC_5 (struct seq_file*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_7, void *VAR_8)
{
 FUNC_3(VAR_7,
     "cpu\t\t: %s\n"
     "fpu\t\t: %s\n"
     "promlib\t\t: Version %d Revision %d\n"
     "prom\t\t: %d.%d\n"
     "type\t\t: %s\n"
     "ncpus probed\t: %d\n"
     "ncpus active\t: %d\n"

     "CPU0Bogo\t: %lu.%02lu\n"
     "CPU0ClkTck\t: %ld\n"

     ,
     VAR_5,
     VAR_6 ,
     VAR_4->pv_romvers,
     VAR_3,
     VAR_4->pv_printrev >> 16,
     VAR_4->pv_printrev & 0xffff,
     &VAR_1,
     VAR_2,
     FUNC_2()

     , FUNC_0(0).udelay_val/(500000/VAR_0),
     (FUNC_0(0).udelay_val/(5000/VAR_0)) % 100,
     FUNC_0(0).clock_tick

  );




 FUNC_1(VAR_7);



 return 0;
}
