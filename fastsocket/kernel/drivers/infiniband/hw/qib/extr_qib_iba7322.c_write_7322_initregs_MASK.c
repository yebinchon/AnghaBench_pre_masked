
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct qib_pportdata {unsigned int hw_pidx; int p_rcvctrl; int link_speed_supported; } ;
struct qib_devdata {int num_pports; int n_krcv_queues; unsigned int first_user_ctxt; int cfgctxts; struct qib_pportdata* pport; TYPE_1__* cspec; } ;
struct TYPE_2__ {int* rcvavail_timeout; int rcvmod_lock; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_2 (struct qib_devdata*,scalar_t__,int) ;
 int FUNC_3 (struct qib_pportdata*,unsigned int,unsigned int) ;
 int FUNC_4 (struct qib_devdata*,scalar_t__,unsigned int,int) ;
 int VAR_7 ;
 int FUNC_5 (struct qib_pportdata*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_8(struct qib_devdata *VAR_9)
{
 struct qib_pportdata *VAR_10;
 int VAR_11, VAR_12;
 u64 VAR_13;


 FUNC_2(VAR_9, FUNC_0(VAR_3), 1);

 for (VAR_12 = 0; VAR_12 < VAR_9->num_pports; ++VAR_12) {
  unsigned VAR_14, VAR_15;
  unsigned long VAR_16;

  if (VAR_9->n_krcv_queues < 2 ||
   !VAR_9->pport[VAR_12].link_speed_supported)
   continue;

  VAR_10 = &VAR_9->pport[VAR_12];


  FUNC_6(&VAR_9->cspec->rcvmod_lock, VAR_16);
  VAR_10->p_rcvctrl |= FUNC_1(VAR_1, VAR_2);
  FUNC_7(&VAR_9->cspec->rcvmod_lock, VAR_16);


  VAR_15 = VAR_6;
  VAR_13 = 0;
  if (VAR_9->num_pports > 1)
   VAR_14 = VAR_9->first_user_ctxt / VAR_9->num_pports;
  else
   VAR_14 = VAR_9->first_user_ctxt - 1;
  for (VAR_11 = 0; VAR_11 < 32; ) {
   unsigned VAR_17;

   if (VAR_9->num_pports > 1)
    VAR_17 = (VAR_11 % VAR_14) * VAR_9->num_pports + VAR_12;
   else if (VAR_11 % VAR_14)
    VAR_17 = (VAR_11 % VAR_14) + 1;
   else
    VAR_17 = VAR_10->hw_pidx;
   VAR_13 |= VAR_17 << (5 * (VAR_11 % 6));
   VAR_11++;
   if (VAR_11 % 6 == 0) {
    FUNC_3(VAR_10, VAR_15, VAR_13);
    VAR_13 = 0;
    VAR_15++;
   }
  }
  FUNC_3(VAR_10, VAR_15, VAR_13);
 }







 for (VAR_11 = 0; VAR_11 < VAR_9->first_user_ctxt; VAR_11++) {
  VAR_9->cspec->rcvavail_timeout[VAR_11] = VAR_7;
  FUNC_2(VAR_9, VAR_5 + VAR_11, VAR_7);
 }






 VAR_13 = VAR_4;
 for (VAR_11 = 0; VAR_11 < VAR_9->cfgctxts; VAR_11++) {
  int VAR_18;
  for (VAR_18 = 0; VAR_18 < VAR_0; VAR_18++)
   FUNC_4(VAR_9, VAR_8+VAR_18, VAR_13, VAR_11);
 }






 if (VAR_9->num_pports)
  FUNC_5(VAR_9->pport, VAR_9->num_pports > 1);
}
