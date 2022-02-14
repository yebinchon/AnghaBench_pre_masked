
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtdoops_context {scalar_t__ writecount; int work_write; int writecount_lock; scalar_t__ ready; struct mtd_info* mtd; } ;
struct mtd_info {scalar_t__ panic_write; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct mtdoops_context*,int) ;
 struct mtdoops_context VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(void)
{
 struct mtdoops_context *VAR_1 = &VAR_0;
 struct mtd_info *VAR_2 = VAR_1->mtd;
 unsigned long VAR_3;

 if (!VAR_1->ready || !VAR_2 || VAR_1->writecount == 0)
  return;





 FUNC_3(&VAR_1->writecount_lock, VAR_3);
 if (!VAR_1->ready) {
  FUNC_4(&VAR_1->writecount_lock, VAR_3);
  return;
 }
 VAR_1->ready = 0;
 FUNC_4(&VAR_1->writecount_lock, VAR_3);

 if (VAR_2->panic_write && FUNC_0())

  FUNC_1(VAR_1, 1);
 else
  FUNC_2(&VAR_1->work_write);
}
