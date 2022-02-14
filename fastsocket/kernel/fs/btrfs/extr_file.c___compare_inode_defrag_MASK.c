
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_defrag {scalar_t__ root; scalar_t__ ino; } ;



__attribute__((used)) static int FUNC_0(struct inode_defrag *VAR_0,
      struct inode_defrag *VAR_1)
{
 if (VAR_0->root > VAR_1->root)
  return 1;
 else if (VAR_0->root < VAR_1->root)
  return -1;
 else if (VAR_0->ino > VAR_1->ino)
  return 1;
 else if (VAR_0->ino < VAR_1->ino)
  return -1;
 else
  return 0;
}
