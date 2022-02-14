
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct page {scalar_t__ private; TYPE_1__* mapping; scalar_t__ index; } ;
struct extent_io_tree {int dummy; } ;
struct extent_buffer {struct page** pages; } ;
struct btrfs_root {int dummy; } ;
struct TYPE_4__ {struct extent_io_tree io_tree; } ;
struct TYPE_3__ {int host; } ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct btrfs_root*,struct extent_buffer*,int ) ;

__attribute__((used)) static int FUNC_5(struct btrfs_root *VAR_1, struct page *VAR_2)
{
 struct extent_io_tree *VAR_3;
 u64 VAR_4 = (u64)VAR_2->index << VAR_0;
 u64 VAR_5;
 struct extent_buffer *VAR_6;

 VAR_3 = &FUNC_0(VAR_2->mapping->host)->io_tree;

 VAR_6 = (struct extent_buffer *)VAR_2->private;
 if (VAR_2 != VAR_6->pages[0])
  return 0;
 VAR_5 = FUNC_3(VAR_6);
 if (VAR_5 != VAR_4) {
  FUNC_2(1);
  return 0;
 }
 if (VAR_6->pages[0] != VAR_2) {
  FUNC_2(1);
  return 0;
 }
 if (!FUNC_1(VAR_2)) {
  FUNC_2(1);
  return 0;
 }
 FUNC_4(VAR_1, VAR_6, 0);
 return 0;
}
