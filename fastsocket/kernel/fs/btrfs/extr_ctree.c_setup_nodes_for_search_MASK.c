
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {struct extent_buffer** nodes; scalar_t__ search_for_split; } ;


 int FUNC_0 (struct btrfs_root*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,int) ;
 int FUNC_3 (struct btrfs_path*,int *,int ) ;
 int FUNC_4 (struct extent_buffer*) ;
 int FUNC_5 (struct btrfs_path*) ;
 int FUNC_6 (struct btrfs_path*) ;
 int FUNC_7 (struct btrfs_root*,struct btrfs_path*,int) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,int) ;

__attribute__((used)) static int
FUNC_9(struct btrfs_trans_handle *VAR_1,
         struct btrfs_root *VAR_2, struct btrfs_path *VAR_3,
         struct extent_buffer *VAR_4, int VAR_5, int VAR_6,
         int *VAR_7)
{
 int VAR_8;
 if ((VAR_3->search_for_split || VAR_6 > 0) && FUNC_4(VAR_4) >=
     FUNC_0(VAR_2) - 3) {
  int VAR_9;

  if (*VAR_7 < VAR_5 + 1) {
   *VAR_7 = VAR_5 + 1;
   FUNC_5(VAR_3);
   goto again;
  }

  VAR_9 = FUNC_7(VAR_2, VAR_3, VAR_5);
  if (VAR_9)
   goto again;

  FUNC_6(VAR_3);
  VAR_9 = FUNC_8(VAR_1, VAR_2, VAR_3, VAR_5);
  FUNC_3(VAR_3, ((void*)0), 0);

  FUNC_1(VAR_9 > 0);
  if (VAR_9) {
   VAR_8 = VAR_9;
   goto done;
  }
  VAR_4 = VAR_3->nodes[VAR_5];
 } else if (VAR_6 < 0 && FUNC_4(VAR_4) <
     FUNC_0(VAR_2) / 2) {
  int VAR_10;

  if (*VAR_7 < VAR_5 + 1) {
   *VAR_7 = VAR_5 + 1;
   FUNC_5(VAR_3);
   goto again;
  }

  VAR_10 = FUNC_7(VAR_2, VAR_3, VAR_5);
  if (VAR_10)
   goto again;

  FUNC_6(VAR_3);
  VAR_10 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_5);
  FUNC_3(VAR_3, ((void*)0), 0);

  if (VAR_10) {
   VAR_8 = VAR_10;
   goto done;
  }
  VAR_4 = VAR_3->nodes[VAR_5];
  if (!VAR_4) {
   FUNC_5(VAR_3);
   goto again;
  }
  FUNC_1(FUNC_4(VAR_4) == 1);
 }
 return 0;

again:
 VAR_8 = -VAR_0;
done:
 return VAR_8;
}
