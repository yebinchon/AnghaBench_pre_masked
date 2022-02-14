
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_free_space_ctl {int free_space; } ;
struct btrfs_free_space {scalar_t__ bytes; } ;


 int FUNC_0 (struct btrfs_free_space_ctl*,struct btrfs_free_space*) ;

__attribute__((used)) static void FUNC_1(struct btrfs_free_space_ctl *VAR_0,
         struct btrfs_free_space *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);
 VAR_0->free_space -= VAR_1->bytes;
}
