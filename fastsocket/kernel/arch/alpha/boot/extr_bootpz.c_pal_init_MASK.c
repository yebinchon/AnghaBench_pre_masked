
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct percpu_struct {unsigned long pal_revision; unsigned long* palcode_avail; } ;
struct pcb_struct {int dummy; } ;
struct TYPE_5__ {scalar_t__ processor_offset; } ;
struct TYPE_4__ {int ptbr; int flags; scalar_t__ res2; scalar_t__ res1; scalar_t__ unique; scalar_t__ pcc; scalar_t__ asn; scalar_t__ usp; scalar_t__ ksp; } ;


 TYPE_3__* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (unsigned long) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (char*,...) ;
 unsigned long FUNC_3 (int,TYPE_1__*,struct pcb_struct*,int ) ;
 int FUNC_4 () ;

void
FUNC_5(void)
{
 unsigned long VAR_4, VAR_5;
 struct percpu_struct * VAR_6;
 struct pcb_struct * VAR_7;


 VAR_3->ksp = 0;
 VAR_3->usp = 0;
 VAR_3->ptbr = VAR_1[1] >> 32;
 VAR_3->asn = 0;
 VAR_3->pcc = 0;
 VAR_3->unique = 0;
 VAR_3->flags = 1;
 VAR_3->res1 = 0;
 VAR_3->res2 = 0;
 VAR_7 = (struct pcb_struct *)FUNC_1((unsigned long)VAR_3);
 FUNC_2("Switching to OSF PAL-code... ");

 VAR_4 = FUNC_3(2, VAR_3, VAR_7, VAR_2);
 if (VAR_4) {
  FUNC_2("failed, code %ld\n", VAR_4);
  FUNC_0();
 }

 VAR_6 = (struct percpu_struct *)
  (VAR_0->processor_offset + (unsigned long) VAR_0);
 VAR_5 = VAR_6->pal_revision = VAR_6->palcode_avail[2];

 FUNC_2("OK (rev %lx)\n", VAR_5);

 FUNC_4();
}
