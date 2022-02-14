
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct qib_pportdata {size_t hw_pidx; } ;
struct TYPE_3__ {int ibdev; } ;
struct qib_devdata {TYPE_1__ verbs_dev; int (* f_set_ib_cfg ) (struct qib_pportdata*,int ,int ) ;struct qib_ctxtdata** rcd; struct qib_pportdata* pport; } ;
struct qib_ctxtdata {int* pkeys; } ;
struct TYPE_4__ {int port_num; } ;
struct ib_event {TYPE_2__ element; int * device; int event; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct qib_pportdata*,int) ;
 int FUNC_2 (struct ib_event*) ;
 int FUNC_3 (struct qib_pportdata*,int) ;
 int FUNC_4 (struct qib_pportdata*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct qib_devdata *VAR_2, u8 VAR_3, u16 *VAR_4)
{
 struct qib_pportdata *VAR_5;
 struct qib_ctxtdata *VAR_6;
 int VAR_7;
 int VAR_8 = 0;







 VAR_5 = VAR_2->pport + (VAR_3 - 1);
 VAR_6 = VAR_2->rcd[VAR_5->hw_pidx];

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_6->pkeys); VAR_7++) {
  u16 VAR_9 = VAR_4[VAR_7];
  u16 VAR_10 = VAR_6->pkeys[VAR_7];

  if (VAR_9 == VAR_10)
   continue;




  if (VAR_10 & 0x7FFF)
   VAR_8 |= FUNC_3(VAR_5, VAR_10);
  if (VAR_9 & 0x7FFF) {
   int VAR_11 = FUNC_1(VAR_5, VAR_9);

   if (VAR_11 < 0)
    VAR_9 = 0;
   else
    VAR_8 |= VAR_11;
  }
  VAR_6->pkeys[VAR_7] = VAR_9;
 }
 if (VAR_8) {
  struct ib_event VAR_12;

  (void) VAR_2->f_set_ib_cfg(VAR_5, VAR_1, 0);

  VAR_12.event = VAR_0;
  VAR_12.device = &VAR_2->verbs_dev.ibdev;
  VAR_12.element.port_num = 1;
  FUNC_2(&VAR_12);
 }
 return 0;
}
