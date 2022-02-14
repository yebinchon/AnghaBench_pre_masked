
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int func; } ;
struct reada_machine_work {TYPE_1__ work; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int readahead_workers; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_1__*) ;
 struct reada_machine_work* FUNC_2 (int,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct btrfs_fs_info *VAR_2)
{
 struct reada_machine_work *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3) {

  FUNC_0();
 }
 VAR_3->work.func = VAR_1;
 VAR_3->fs_info = VAR_2;

 FUNC_1(&VAR_2->readahead_workers, &VAR_3->work);
}
