
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct qib_pportdata {int dummy; } ;
struct qib_devdata {int flags; scalar_t__ traffic_wds; int stats_timer; int eep_st_lock; int active_time; scalar_t__ diag_client; struct qib_pportdata* pport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct qib_devdata*) ;
 scalar_t__ FUNC_3 (struct qib_pportdata*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_7)
{
 struct qib_devdata *VAR_8 = (struct qib_devdata *) VAR_7;
 struct qib_pportdata *VAR_9 = VAR_8->pport;
 unsigned long VAR_10;
 u64 VAR_11;





 if (!(VAR_8->flags & VAR_2) || VAR_8->diag_client)

  goto done;






 VAR_11 = FUNC_3(VAR_9, VAR_5) +
  FUNC_3(VAR_9, VAR_4);
 FUNC_4(&VAR_8->eep_st_lock, VAR_10);
 VAR_11 -= VAR_8->traffic_wds;
 VAR_8->traffic_wds += VAR_11;
 if (VAR_11 >= VAR_3)
  FUNC_0(5, &VAR_8->active_time);
 FUNC_5(&VAR_8->eep_st_lock, VAR_10);

 FUNC_2(VAR_8);
done:
 FUNC_1(&VAR_8->stats_timer, VAR_6 + VAR_1 * VAR_0);
}
