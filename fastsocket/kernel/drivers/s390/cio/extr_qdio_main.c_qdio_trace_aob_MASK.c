
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qdio_q {TYPE_2__** sbal; } ;
struct qdio_irq {int dummy; } ;
struct qaob {unsigned long res1; unsigned long res2; unsigned long res3; unsigned long aorc; unsigned long flags; unsigned long cbtbs; unsigned long sb_count; scalar_t__ user2; scalar_t__ user1; scalar_t__* res4; scalar_t__ user0; int * dcount; scalar_t__* sba; scalar_t__* res0; } ;
struct TYPE_4__ {TYPE_1__* element; } ;
struct TYPE_3__ {int length; scalar_t__ addr; } ;


 int FUNC_0 (int ,struct qdio_irq*,char*,unsigned long,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct qaob*) ;

__attribute__((used)) static inline void FUNC_2(struct qdio_irq *VAR_2, struct qdio_q *VAR_3,
    int VAR_4, struct qaob *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_0, VAR_2, "AOB%d:%lx", VAR_4,
   (unsigned long) FUNC_1(VAR_5));
 FUNC_0(VAR_0, VAR_2, "RES00:%lx",
   (unsigned long) VAR_5->res0[0]);
 FUNC_0(VAR_0, VAR_2, "RES01:%lx",
   (unsigned long) VAR_5->res0[1]);
 FUNC_0(VAR_0, VAR_2, "RES02:%lx",
   (unsigned long) VAR_5->res0[2]);
 FUNC_0(VAR_0, VAR_2, "RES03:%lx",
   (unsigned long) VAR_5->res0[3]);
 FUNC_0(VAR_0, VAR_2, "RES04:%lx",
   (unsigned long) VAR_5->res0[4]);
 FUNC_0(VAR_0, VAR_2, "RES05:%lx",
   (unsigned long) VAR_5->res0[5]);
 FUNC_0(VAR_0, VAR_2, "RES1:%x", VAR_5->res1);
 FUNC_0(VAR_0, VAR_2, "RES2:%x", VAR_5->res2);
 FUNC_0(VAR_0, VAR_2, "RES3:%x", VAR_5->res3);
 FUNC_0(VAR_0, VAR_2, "AORC:%u", VAR_5->aorc);
 FUNC_0(VAR_0, VAR_2, "FLAGS:%u", VAR_5->flags);
 FUNC_0(VAR_0, VAR_2, "CBTBS:%u", VAR_5->cbtbs);
 FUNC_0(VAR_0, VAR_2, "SBC:%u", VAR_5->sb_count);
 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
  FUNC_0(VAR_0, VAR_2, "SBA%d:%lx", VAR_6,
    (unsigned long) VAR_5->sba[VAR_6]);
  FUNC_0(VAR_0, VAR_2, "rSBA%d:%lx", VAR_6,
    (unsigned long) VAR_3->sbal[VAR_4]->element[VAR_6].addr);
  FUNC_0(VAR_0, VAR_2, "DC%d:%u", VAR_6, VAR_5->dcount[VAR_6]);
  FUNC_0(VAR_0, VAR_2, "rDC%d:%u", VAR_6,
    VAR_3->sbal[VAR_4]->element[VAR_6].length);
 }
 FUNC_0(VAR_0, VAR_2, "USER0:%lx", (unsigned long) VAR_5->user0);
 for (VAR_6 = 0; VAR_6 < 2; ++VAR_6) {
  FUNC_0(VAR_0, VAR_2, "RES4%d:%lx", VAR_6,
   (unsigned long) VAR_5->res4[VAR_6]);
 }
 FUNC_0(VAR_0, VAR_2, "USER1:%lx", (unsigned long) VAR_5->user1);
 FUNC_0(VAR_0, VAR_2, "USER2:%lx", (unsigned long) VAR_5->user2);
}
