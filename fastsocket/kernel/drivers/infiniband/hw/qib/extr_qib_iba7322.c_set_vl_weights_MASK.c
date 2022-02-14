
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qib_pportdata {int p_sendctrl; struct qib_devdata* dd; } ;
struct qib_devdata {int sendctrl_lock; } ;
struct ib_vl_weight_elem {int vl; int weight; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_3 (struct qib_devdata*,int ,int ) ;
 int FUNC_4 (struct qib_pportdata*,unsigned int,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct qib_pportdata *VAR_7, unsigned VAR_8,
      struct ib_vl_weight_elem *VAR_9)
{
 unsigned VAR_10;

 for (VAR_10 = 0; VAR_10 < 16; VAR_10++, VAR_8++, VAR_9++) {
  u64 VAR_11;

  VAR_11 = ((VAR_9->vl & FUNC_2(VAR_1, VAR_3)) <<
   FUNC_0(VAR_1, VAR_3)) |
        ((VAR_9->weight & FUNC_2(VAR_1, VAR_4)) <<
   FUNC_0(VAR_1, VAR_4));
  FUNC_4(VAR_7, VAR_8, VAR_11);
 }
 if (!(VAR_7->p_sendctrl & FUNC_1(VAR_2, VAR_0))) {
  struct qib_devdata *VAR_12 = VAR_7->dd;
  unsigned long VAR_13;

  FUNC_5(&VAR_12->sendctrl_lock, VAR_13);
  VAR_7->p_sendctrl |= FUNC_1(VAR_2, VAR_0);
  FUNC_4(VAR_7, VAR_6, VAR_7->p_sendctrl);
  FUNC_3(VAR_12, VAR_5, 0);
  FUNC_6(&VAR_12->sendctrl_lock, VAR_13);
 }
}
