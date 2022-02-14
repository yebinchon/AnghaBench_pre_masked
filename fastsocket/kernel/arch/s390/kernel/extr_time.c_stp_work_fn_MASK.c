
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct stp_sstpi {int dummy; } ;
struct clock_sync_data {int cpus; } ;
typedef int stp_sync ;
struct TYPE_3__ {scalar_t__ c; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,TYPE_1__*,int) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (struct clock_sync_data*,int ,int) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int ,struct clock_sync_data*,int *) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_13(struct work_struct *VAR_10)
{
 struct clock_sync_data VAR_11;
 int VAR_12;


 FUNC_8(&VAR_9);

 if (!VAR_5) {
  FUNC_2(VAR_6, VAR_1, 0x0000);
  FUNC_4(&VAR_8);
  goto out_unlock;
 }

 VAR_12 = FUNC_2(VAR_6, VAR_1, 0xb0e0);
 if (VAR_12)
  goto out_unlock;

 VAR_12 = FUNC_3(VAR_6, &VAR_4, sizeof(struct stp_sstpi));
 if (VAR_12 || VAR_4.c == 0)
  goto out_unlock;


 if (FUNC_1())
  goto out_unlock;

 FUNC_6(&VAR_11, 0, sizeof(VAR_11));
 FUNC_5();
 FUNC_0(&VAR_11.cpus, FUNC_10() - 1);
 FUNC_12(VAR_7, &VAR_11, &VAR_2);
 FUNC_11();

 if (!FUNC_1())




  FUNC_7(&VAR_8, VAR_3 + VAR_0);

out_unlock:
 FUNC_9(&VAR_9);
}
