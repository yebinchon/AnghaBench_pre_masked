
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pohmelfs_sb {int mcache_root; } ;
struct TYPE_2__ {scalar_t__ rb_parent_color; } ;
struct pohmelfs_mcache {TYPE_1__ mcache_entry; } ;


 int FUNC_0 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_1(struct pohmelfs_sb *VAR_0, struct pohmelfs_mcache *VAR_1)
{
 if (VAR_1 && VAR_1->mcache_entry.rb_parent_color) {
  FUNC_0(&VAR_1->mcache_entry, &VAR_0->mcache_root);
  VAR_1->mcache_entry.rb_parent_color = 0;
  return 1;
 }
 return 0;
}
