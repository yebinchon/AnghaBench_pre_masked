
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct entropy_store {int last_data_init; TYPE_1__* poolinfo; int lock; scalar_t__ entropy_count; } ;
typedef int now ;
typedef unsigned long ktime_t ;
typedef int flags ;
struct TYPE_2__ {int poolwords; } ;


 int FUNC_0 (unsigned long*) ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (struct entropy_store*,unsigned long*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned long* FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct entropy_store *VAR_0)
{
 int VAR_1;
 ktime_t VAR_2;
 unsigned long VAR_3;

 FUNC_3(&VAR_0->lock, VAR_3);
 VAR_0->entropy_count = 0;
 VAR_0->last_data_init = 0;
 FUNC_4(&VAR_0->lock, VAR_3);

 VAR_2 = FUNC_1();
 FUNC_2(VAR_0, &VAR_2, sizeof(VAR_2));
 for (VAR_1 = VAR_0->poolinfo->poolwords; VAR_1; VAR_1--) {
  if (!FUNC_0(&VAR_3))
   break;
  FUNC_2(VAR_0, &VAR_3, sizeof(VAR_3));
 }
 FUNC_2(VAR_0, FUNC_5(), sizeof(*(FUNC_5())));
}
