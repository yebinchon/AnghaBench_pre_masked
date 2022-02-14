
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct jfs_log {int dummy; } ;
struct TYPE_9__ {TYPE_1__* log; int log_list; } ;
struct TYPE_8__ {int no_integrity; int size; int sb_list; scalar_t__ base; int syncwait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 TYPE_7__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct super_block *VAR_4)
{
 int VAR_5;

 FUNC_9(&VAR_3);
 if (!VAR_2) {
  VAR_2 = FUNC_6(sizeof(struct jfs_log), VAR_1);
  if (!VAR_2) {
   FUNC_10(&VAR_3);
   return -VAR_0;
  }
  FUNC_0(&VAR_2->sb_list);
  FUNC_4(&VAR_2->syncwait);
  VAR_2->no_integrity = 1;

  VAR_2->base = 0;
  VAR_2->size = 1024;
  VAR_5 = FUNC_8(VAR_2);
  if (VAR_5) {
   FUNC_5(VAR_2);
   VAR_2 = ((void*)0);
   FUNC_10(&VAR_3);
   return VAR_5;
  }
 }

 FUNC_2(VAR_2);
 FUNC_7(&FUNC_1(VAR_4)->log_list, &VAR_2->sb_list);
 FUNC_1(VAR_4)->log = VAR_2;
 FUNC_3(VAR_2);
 FUNC_10(&VAR_3);

 return 0;
}
