
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct jffs2_inode_info {int sem; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int host; } ;


 struct jffs2_inode_info* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct page*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4 (struct file *VAR_0, struct page *VAR_1)
{
 struct jffs2_inode_info *VAR_2 = FUNC_0(VAR_1->mapping->host);
 int VAR_3;

 FUNC_2(&VAR_2->sem);
 VAR_3 = FUNC_1(VAR_1->mapping->host, VAR_1);
 FUNC_3(&VAR_2->sem);
 return VAR_3;
}
