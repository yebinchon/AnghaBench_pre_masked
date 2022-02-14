
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct nfs_server {int backing_dev_info; int writeback; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nfs_server* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct page *VAR_2)
{
 int VAR_3 = FUNC_3(VAR_2);

 if (!VAR_3) {
  struct inode *VAR_4 = VAR_2->mapping->host;
  struct nfs_server *VAR_5 = FUNC_0(VAR_4);

  if (FUNC_1(&VAR_5->writeback) >
    VAR_1) {
   FUNC_2(&VAR_5->backing_dev_info,
      VAR_0);
  }
 }
 return VAR_3;
}
