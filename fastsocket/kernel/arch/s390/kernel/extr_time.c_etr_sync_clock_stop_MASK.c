
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etr_aib {int dummy; } ;
struct clock_sync_data {int etr_port; int cpus; struct etr_aib* etr_aib; } ;
typedef int etr_sync ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (struct etr_aib*,struct etr_aib*,int) ;
 struct etr_aib VAR_2 ;
 struct etr_aib VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (struct etr_aib*,struct etr_aib*,int) ;
 int FUNC_4 (struct clock_sync_data*,int ,int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,struct clock_sync_data*,int *) ;

__attribute__((used)) static int FUNC_8(struct etr_aib *VAR_5, int VAR_6)
{
 struct clock_sync_data VAR_7;
 struct etr_aib *VAR_8;
 int VAR_9;
 int VAR_10;


 VAR_8 = (VAR_6 == 0) ? &VAR_2 : &VAR_3;
 VAR_9 = FUNC_1(VAR_8, VAR_5, VAR_6);
 FUNC_3(VAR_8, VAR_5, sizeof(*VAR_5));
 if (!VAR_9)
  return -VAR_0;
 FUNC_4(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.etr_aib = VAR_5;
 VAR_7.etr_port = VAR_6;
 FUNC_2();
 FUNC_0(&VAR_7.cpus, FUNC_5() - 1);
 VAR_10 = FUNC_7(VAR_4, &VAR_7, &VAR_1);
 FUNC_6();
 return VAR_10;
}
