
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct av7110 {int fe_status; int fe_synced; int pid_mutex; int * pids; scalar_t__ playing; } ;
typedef int fe_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct av7110*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct av7110*,int ,int ,int ) ;
 int FUNC_2 (struct av7110*,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct av7110* VAR_11, fe_status_t VAR_12)
{
 int VAR_13 = 0;
 int VAR_14 = (VAR_12 & VAR_7) ? 1 : 0;

 VAR_11->fe_status = VAR_12;

 if (VAR_11->fe_synced == VAR_14)
  return 0;

 if (VAR_11->playing) {
  VAR_11->fe_synced = VAR_14;
  return 0;
 }

 if (FUNC_3(&VAR_11->pid_mutex))
  return -VAR_6;

 if (VAR_14) {
  VAR_13 = FUNC_0(VAR_11, VAR_11->pids[VAR_5],
   VAR_11->pids[VAR_2],
   VAR_11->pids[VAR_4], 0,
   VAR_11->pids[VAR_3]);
  if (!VAR_13)
   VAR_13 = FUNC_1(VAR_11, VAR_0, VAR_10, 0);
 } else {
  VAR_13 = FUNC_0(VAR_11, 0, 0, 0, 0, 0);
  if (!VAR_13) {
   VAR_13 = FUNC_1(VAR_11, VAR_1, VAR_8, 0);
   if (!VAR_13)
    VAR_13 = FUNC_2(VAR_11, VAR_9);
  }
 }

 if (!VAR_13)
  VAR_11->fe_synced = VAR_14;

 FUNC_4(&VAR_11->pid_mutex);
 return VAR_13;
}
