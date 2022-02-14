
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct extent_buffer*) ;
 int FUNC_1 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_2 (struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_3 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct btrfs_root *VAR_1,
  struct btrfs_path *VAR_2, struct btrfs_key *VAR_3)
{
 int VAR_4 = 0;
 struct btrfs_key VAR_5;
 struct extent_buffer *VAR_6;
 int VAR_7;

 VAR_4 = FUNC_3(((void*)0), VAR_1, VAR_3, VAR_2, 0, 0);
 if (VAR_4 < 0)
  goto out;

 while (1) {
  VAR_7 = VAR_2->slots[0];
  VAR_6 = VAR_2->nodes[0];
  if (VAR_7 >= FUNC_0(VAR_6)) {
   VAR_4 = FUNC_2(VAR_1, VAR_2);
   if (VAR_4 == 0)
    continue;
   if (VAR_4 < 0)
    goto out;
   break;
  }
  FUNC_1(VAR_6, &VAR_5, VAR_7);

  if (VAR_5.objectid >= VAR_3->objectid &&
      VAR_5.type == VAR_0) {
   VAR_4 = 0;
   goto out;
  }
  VAR_2->slots[0]++;
 }
out:
 return VAR_4;
}
