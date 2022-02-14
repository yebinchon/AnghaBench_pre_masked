
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {struct dm_snapshot* private; } ;
struct dm_snapshot {int active; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct dm_snapshot*,struct dm_snapshot**,struct dm_snapshot**,int *) ;
 int FUNC_1 (struct dm_snapshot*,struct dm_snapshot*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct dm_snapshot*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct dm_target *VAR_2)
{
 struct dm_snapshot *VAR_3 = VAR_2->private;
 struct dm_snapshot *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);

 FUNC_2(&VAR_1);
 (void) FUNC_0(VAR_3, &VAR_4, &VAR_5, ((void*)0));
 if (VAR_4 && VAR_5) {
  FUNC_3(&VAR_4->lock);
  FUNC_4(&VAR_5->lock, VAR_0);
  FUNC_1(VAR_4, VAR_5);
  FUNC_7(&VAR_5->lock);
  FUNC_7(&VAR_4->lock);
 }
 FUNC_6(&VAR_1);


 FUNC_5(VAR_3);

 FUNC_3(&VAR_3->lock);
 VAR_3->active = 1;
 FUNC_7(&VAR_3->lock);
}
