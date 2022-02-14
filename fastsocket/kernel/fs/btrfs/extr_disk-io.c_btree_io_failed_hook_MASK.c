
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {scalar_t__ private; TYPE_1__* mapping; } ;
struct extent_buffer {int read_mirror; int start; int bflags; } ;
struct btrfs_root {int dummy; } ;
struct TYPE_4__ {struct btrfs_root* root; } ;
struct TYPE_3__ {int host; } ;


 TYPE_2__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct btrfs_root*,struct extent_buffer*,int ,int) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct page *VAR_3, int VAR_4)
{
 struct extent_buffer *VAR_5;
 struct btrfs_root *VAR_6 = FUNC_0(VAR_3->mapping->host)->root;

 VAR_5 = (struct extent_buffer *)VAR_3->private;
 FUNC_2(VAR_1, &VAR_5->bflags);
 VAR_5->read_mirror = VAR_4;
 if (FUNC_3(VAR_2, &VAR_5->bflags))
  FUNC_1(VAR_6, VAR_5, VAR_5->start, -VAR_0);
 return -VAR_0;
}
