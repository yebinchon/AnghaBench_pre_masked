
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r1conf {scalar_t__ nr_pending; scalar_t__ nr_queued; int resync_lock; int wait_barrier; int nr_waiting; int barrier; } ;


 int FUNC_0 (struct r1conf*) ;
 int FUNC_1 (struct r1conf*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct r1conf *VAR_0, int VAR_1)
{
 FUNC_2(&VAR_0->resync_lock);
 VAR_0->barrier++;
 VAR_0->nr_waiting++;
 FUNC_4(VAR_0->wait_barrier,
    VAR_0->nr_pending == VAR_0->nr_queued+VAR_1,
    VAR_0->resync_lock,
       ({ FUNC_0(VAR_0);
          FUNC_1(VAR_0); }));
 FUNC_3(&VAR_0->resync_lock);
}
