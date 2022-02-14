
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ilo_hwinfo {int alloc_lock; TYPE_1__** ccb_alloc; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int ccb_waitq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ilo_hwinfo*,int) ;
 int FUNC_1 (struct ilo_hwinfo*) ;
 int FUNC_2 (struct ilo_hwinfo*) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_3, void *VAR_4)
{
 struct ilo_hwinfo *VAR_5 = VAR_4;
 int VAR_6, VAR_7;

 FUNC_4(&VAR_5->alloc_lock);


 VAR_6 = FUNC_1(VAR_5);
 if (!VAR_6) {
  FUNC_5(&VAR_5->alloc_lock);
  return VAR_1;
 }

 if (FUNC_3(VAR_6)) {

  VAR_6 = -1;
  FUNC_2(VAR_5);
 }

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (!VAR_5->ccb_alloc[VAR_7])
   continue;
  if (VAR_6 & (1 << VAR_7))
   FUNC_6(&VAR_5->ccb_alloc[VAR_7]->ccb_waitq);
 }


 FUNC_0(VAR_5, VAR_6);

 FUNC_5(&VAR_5->alloc_lock);

 return VAR_0;
}
