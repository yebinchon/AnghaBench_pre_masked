
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_pgio_completion_ops {int dummy; } ;
struct nfs_pageio_descriptor {int dummy; } ;
struct nfs_page {int dummy; } ;
struct list_head {int next; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct list_head) ;
 struct list_head VAR_2 ;
 int FUNC_1 (struct list_head*) ;
 int FUNC_2 (struct list_head*,struct list_head*) ;
 int FUNC_3 (struct nfs_page*,struct list_head*) ;
 struct nfs_page* FUNC_4 (int ) ;
 int FUNC_5 (struct nfs_page*) ;
 int FUNC_6 (struct nfs_pageio_descriptor*,struct nfs_page*) ;
 int FUNC_7 (struct nfs_pageio_descriptor*) ;
 int FUNC_8 (struct nfs_pageio_descriptor*,struct inode*,int ,struct nfs_pgio_completion_ops const*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_3,
    struct list_head *VAR_4,
    const struct nfs_pgio_completion_ops *VAR_5)
{
 struct nfs_pageio_descriptor VAR_6;
 FUNC_0(VAR_2);


 FUNC_8(&VAR_6, VAR_3, VAR_1, VAR_5);
 while (!FUNC_1(VAR_4)) {
  struct nfs_page *VAR_7 = FUNC_4(VAR_4->next);

  FUNC_5(VAR_7);
  if (!FUNC_6(&VAR_6, VAR_7))
   FUNC_3(VAR_7, &VAR_2);
 }
 FUNC_7(&VAR_6);

 if (!FUNC_1(&VAR_2)) {




  FUNC_2(&VAR_2, VAR_4);
  return -VAR_0;
 }
 return 0;
}
