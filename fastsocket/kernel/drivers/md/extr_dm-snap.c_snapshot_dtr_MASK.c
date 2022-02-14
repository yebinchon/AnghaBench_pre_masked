
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {struct dm_snapshot* private; } ;
struct dm_snapshot {int origin; int cow; int store; int pending_pool; int tracked_chunk_pool; int * tracked_chunk_hash; int pending_exceptions_count; int lock; scalar_t__ valid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct dm_snapshot*,struct dm_snapshot**,struct dm_snapshot**,int *) ;
 int FUNC_3 (struct dm_snapshot*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct dm_target*,int ) ;
 scalar_t__ FUNC_7 (struct dm_target*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct dm_snapshot*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;
 int FUNC_15 (struct dm_snapshot*) ;
 int FUNC_16 (struct dm_snapshot*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static void FUNC_19(struct dm_target *VAR_2)
{



 struct dm_snapshot *VAR_3 = VAR_2->private;
 struct dm_snapshot *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);

 FUNC_8(&VAR_1);

 (void) FUNC_2(VAR_3, &VAR_4, &VAR_5, ((void*)0));
 if (VAR_4 && VAR_5 && (VAR_3 == VAR_4)) {
  FUNC_9(&VAR_5->lock);
  VAR_5->valid = 0;
  FUNC_18(&VAR_5->lock);
  FUNC_1("Cancelling snapshot handover.");
 }
 FUNC_17(&VAR_1);

 if (FUNC_7(VAR_2))
  FUNC_15(VAR_3);



 FUNC_16(VAR_3);

 while (FUNC_4(&VAR_3->pending_exceptions_count))
  FUNC_13(1);




 FUNC_14();






 FUNC_12(VAR_3->tracked_chunk_pool);

 FUNC_3(VAR_3);

 FUNC_12(VAR_3->pending_pool);

 FUNC_5(VAR_3->store);

 FUNC_6(VAR_2, VAR_3->cow);

 FUNC_6(VAR_2, VAR_3->origin);

 FUNC_11(VAR_3);
}
