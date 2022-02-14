
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r1conf {scalar_t__ barrier; int wait_barrier; int resync_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct r1conf *VAR_0)
{
 unsigned long VAR_1;
 FUNC_0(VAR_0->barrier <= 0);
 FUNC_1(&VAR_0->resync_lock, VAR_1);
 VAR_0->barrier--;
 FUNC_2(&VAR_0->resync_lock, VAR_1);
 FUNC_3(&VAR_0->wait_barrier);
}
