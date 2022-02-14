
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mirror_set {int nr_mirrors; int kmirrord_wq; int kcopyd_client; int timer; } ;
struct dm_target {scalar_t__ private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mirror_set*,struct dm_target*,int ) ;

__attribute__((used)) static void FUNC_6(struct dm_target *VAR_0)
{
 struct mirror_set *VAR_1 = (struct mirror_set *) VAR_0->private;

 FUNC_0(&VAR_1->timer);
 FUNC_4(VAR_1->kmirrord_wq);
 FUNC_3();
 FUNC_2(VAR_1->kcopyd_client);
 FUNC_1(VAR_1->kmirrord_wq);
 FUNC_5(VAR_1, VAR_0, VAR_1->nr_mirrors);
}
