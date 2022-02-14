
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct extent_buffer {int len; int start; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {struct extent_buffer** nodes; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_root*,struct extent_buffer*) ;
 int FUNC_1 (int *,struct btrfs_root*,int ,int ,int*,int *) ;

__attribute__((used)) static int FUNC_2(struct btrfs_root *VAR_1,
        struct btrfs_path *VAR_2)
{
 struct extent_buffer *VAR_3;
 int VAR_4;
 u64 VAR_5 = 1;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  int VAR_6;

  if (!VAR_2->nodes[VAR_4])
   break;
  VAR_3 = VAR_2->nodes[VAR_4];
  if (!FUNC_0(VAR_1, VAR_3))
   continue;
  VAR_6 = FUNC_1(((void*)0), VAR_1, VAR_3->start, VAR_3->len,
            &VAR_5, ((void*)0));
  if (VAR_5 > 1)
   return 1;
 }
 return 0;
}
