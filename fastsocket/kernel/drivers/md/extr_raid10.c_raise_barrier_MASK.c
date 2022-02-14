
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r10conf {scalar_t__ barrier; int resync_lock; int nr_pending; int wait_barrier; int nr_waiting; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct r10conf*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct r10conf *VAR_1, int VAR_2)
{
 FUNC_0(VAR_2 && !VAR_1->barrier);
 FUNC_2(&VAR_1->resync_lock);


 FUNC_4(VAR_1->wait_barrier, VAR_2 || !VAR_1->nr_waiting,
       VAR_1->resync_lock,
       FUNC_1(VAR_1));


 VAR_1->barrier++;


 FUNC_4(VAR_1->wait_barrier,
       !VAR_1->nr_pending && VAR_1->barrier < VAR_0,
       VAR_1->resync_lock,
       FUNC_1(VAR_1));

 FUNC_3(&VAR_1->resync_lock);
}
