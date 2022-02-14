
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_root {struct extent_buffer* node; } ;


 struct extent_buffer* FUNC_0 (struct btrfs_root*) ;
 int FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct extent_buffer*) ;

struct extent_buffer *FUNC_4(struct btrfs_root *VAR_0)
{
 struct extent_buffer *VAR_1;

 while (1) {
  VAR_1 = FUNC_0(VAR_0);
  FUNC_1(VAR_1);
  if (VAR_1 == VAR_0->node)
   break;
  FUNC_2(VAR_1);
  FUNC_3(VAR_1);
 }
 return VAR_1;
}
