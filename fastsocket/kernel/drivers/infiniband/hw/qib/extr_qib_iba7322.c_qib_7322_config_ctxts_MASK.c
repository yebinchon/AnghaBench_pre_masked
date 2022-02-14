
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qib_devdata {int num_pports; int first_user_ctxt; int n_krcv_queues; int ctxtcnt; unsigned long long rcvctrl; int rcvhdrcnt; TYPE_1__* cspec; } ;
struct TYPE_2__ {int numctxts; void* rcvegrcnt; int rcvmod_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long long FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (void*,unsigned int) ;
 int FUNC_2 () ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 void* FUNC_3 (struct qib_devdata*,int ) ;
 int FUNC_4 (struct qib_devdata*,int ,unsigned long long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct qib_devdata *VAR_10)
{
 unsigned long VAR_11;
 u32 VAR_12;

 VAR_12 = FUNC_3(VAR_10, VAR_4);
 VAR_10->cspec->numctxts = VAR_12;
 if (VAR_8 > 1 && VAR_10->num_pports) {
  VAR_10->first_user_ctxt = VAR_1 +
   (VAR_8 - 1) * VAR_10->num_pports;
  if (VAR_10->first_user_ctxt > VAR_12)
   VAR_10->first_user_ctxt = VAR_12;
  VAR_10->n_krcv_queues = VAR_10->first_user_ctxt / VAR_10->num_pports;
 } else {
  VAR_10->first_user_ctxt = VAR_1;
  VAR_10->n_krcv_queues = 1;
 }

 if (!VAR_7) {
  int VAR_13 = VAR_10->first_user_ctxt + FUNC_2();

  if (VAR_13 <= 6)
   VAR_10->ctxtcnt = 6;
  else if (VAR_13 <= 10)
   VAR_10->ctxtcnt = 10;
  else if (VAR_13 <= VAR_12)
   VAR_10->ctxtcnt = VAR_12;
 } else if (VAR_7 < VAR_10->num_pports)
  VAR_10->ctxtcnt = VAR_10->num_pports;
 else if (VAR_7 <= VAR_12)
  VAR_10->ctxtcnt = VAR_7;
 if (!VAR_10->ctxtcnt)
  VAR_10->ctxtcnt = VAR_12;






 FUNC_5(&VAR_10->cspec->rcvmod_lock, VAR_11);
 if (VAR_10->ctxtcnt > 10)
  VAR_10->rcvctrl |= 2ULL << FUNC_0(VAR_2, VAR_0);
 else if (VAR_10->ctxtcnt > 6)
  VAR_10->rcvctrl |= 1ULL << FUNC_0(VAR_2, VAR_0);



 VAR_10->rcvctrl |= 5ULL << FUNC_0(VAR_2, VAR_3);





 FUNC_4(VAR_10, VAR_5, VAR_10->rcvctrl);
 FUNC_6(&VAR_10->cspec->rcvmod_lock, VAR_11);


 VAR_10->cspec->rcvegrcnt = FUNC_3(VAR_10, VAR_6);
 if (VAR_9)
  VAR_10->rcvhdrcnt = FUNC_1(VAR_10->cspec->rcvegrcnt, VAR_9);
 else
  VAR_10->rcvhdrcnt = 2 * FUNC_1(VAR_10->cspec->rcvegrcnt,
        VAR_10->num_pports > 1 ? 1024U : 2048U);
}
