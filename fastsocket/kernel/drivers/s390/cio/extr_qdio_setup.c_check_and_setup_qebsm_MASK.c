
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rflags; } ;
struct qdio_irq {unsigned long sch_token; TYPE_1__ qib; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(struct qdio_irq *VAR_3,
      unsigned char VAR_4, unsigned long VAR_5)
{
 if (!(VAR_3->qib.rflags & VAR_2))
  goto no_qebsm;
 if (!(VAR_4 & VAR_0) ||
     (!(VAR_4 & VAR_1)))
  goto no_qebsm;

 VAR_3->sch_token = VAR_5;

 FUNC_0("V=V:1");
 FUNC_0("%8lx", VAR_3->sch_token);
 return;

no_qebsm:
 VAR_3->sch_token = 0;
 VAR_3->qib.rflags &= ~VAR_2;
 FUNC_0("noV=V");
}
