
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atkbd {int event_work; int event_mask; scalar_t__ event_jiffies; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct atkbd *VAR_1, int VAR_2)
{
 unsigned long VAR_3 = FUNC_0(50);

 if (FUNC_3(VAR_0, VAR_1->event_jiffies + VAR_3))
  VAR_3 = 0;

 VAR_1->event_jiffies = VAR_0;
 FUNC_2(VAR_2, &VAR_1->event_mask);
 FUNC_4();
 FUNC_1(&VAR_1->event_work, VAR_3);
}
