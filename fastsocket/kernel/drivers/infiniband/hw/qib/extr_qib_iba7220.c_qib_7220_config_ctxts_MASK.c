
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qib_devdata {int qpn_mask; int first_user_ctxt; int num_pports; scalar_t__ n_krcv_queues; int ctxtcnt; unsigned long long rcvctrl; TYPE_1__* cspec; int rcvhdrcnt; } ;
struct TYPE_2__ {void* rcvegrcnt; int rcvmod_lock; scalar_t__ numctxts; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*,int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 void* FUNC_2 (struct qib_devdata*,int ) ;
 int FUNC_3 (struct qib_devdata*,int ,unsigned long long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct qib_devdata *VAR_8)
{
 unsigned long VAR_9;
 u32 VAR_10;

 VAR_10 = FUNC_2(VAR_8, VAR_3);
 VAR_8->cspec->numctxts = VAR_10;
 if (VAR_7 > 1) {
  VAR_8->qpn_mask = 0x3e;
  VAR_8->first_user_ctxt = VAR_7 * VAR_8->num_pports;
  if (VAR_8->first_user_ctxt > VAR_10)
   VAR_8->first_user_ctxt = VAR_10;
 } else
  VAR_8->first_user_ctxt = VAR_8->num_pports;
 VAR_8->n_krcv_queues = VAR_8->first_user_ctxt;

 if (!VAR_6) {
  int VAR_11 = VAR_8->first_user_ctxt + FUNC_1();

  if (VAR_11 <= 5)
   VAR_8->ctxtcnt = 5;
  else if (VAR_11 <= 9)
   VAR_8->ctxtcnt = 9;
  else if (VAR_11 <= VAR_10)
   VAR_8->ctxtcnt = VAR_10;
 } else if (VAR_6 <= VAR_10)
  VAR_8->ctxtcnt = VAR_6;
 if (!VAR_8->ctxtcnt)
  VAR_8->ctxtcnt = VAR_10;






 FUNC_4(&VAR_8->cspec->rcvmod_lock, VAR_9);
 if (VAR_8->ctxtcnt > 9)
  VAR_8->rcvctrl |= 2ULL << VAR_1;
 else if (VAR_8->ctxtcnt > 5)
  VAR_8->rcvctrl |= 1ULL << VAR_1;

 if (VAR_8->qpn_mask)
  VAR_8->rcvctrl |= 1ULL << VAR_2;
 FUNC_3(VAR_8, VAR_4, VAR_8->rcvctrl);
 FUNC_5(&VAR_8->cspec->rcvmod_lock, VAR_9);


 VAR_8->cspec->rcvegrcnt = FUNC_2(VAR_8, VAR_5);
 VAR_8->rcvhdrcnt = FUNC_0(VAR_8->cspec->rcvegrcnt, VAR_0);
}
