
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r10conf {int resync_lock; scalar_t__ nr_pending; int nr_waiting; scalar_t__ barrier; int wait_barrier; } ;
struct TYPE_2__ {scalar_t__ bio_tail; scalar_t__ bio_list; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct r10conf*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct r10conf *VAR_1)
{
 FUNC_1(&VAR_1->resync_lock);
 if (VAR_1->barrier) {
  VAR_1->nr_waiting++;
  FUNC_3(VAR_1->wait_barrier,
        !VAR_1->barrier ||
        (VAR_1->nr_pending &&
         VAR_0->bio_list &&
         VAR_0->bio_tail),
        VAR_1->resync_lock,
        FUNC_0(VAR_1)
   );
  VAR_1->nr_waiting--;
 }
 VAR_1->nr_pending++;
 FUNC_2(&VAR_1->resync_lock);
}
