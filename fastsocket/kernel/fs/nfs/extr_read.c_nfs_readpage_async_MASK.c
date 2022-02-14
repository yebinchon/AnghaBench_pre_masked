
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct nfs_pageio_descriptor {int dummy; } ;
struct nfs_page {int dummy; } ;
struct nfs_open_context {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int (* read_pageio_init ) (struct nfs_pageio_descriptor*,struct inode*,int *) ;} ;


 scalar_t__ FUNC_0 (struct nfs_page*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 unsigned int VAR_0 ;
 int FUNC_2 (struct nfs_page*) ;
 int VAR_1 ;
 struct nfs_page* FUNC_3 (struct nfs_open_context*,struct inode*,struct page*,int ,unsigned int) ;
 unsigned int FUNC_4 (struct page*) ;
 int FUNC_5 (struct nfs_pageio_descriptor*,struct nfs_page*) ;
 int FUNC_6 (struct nfs_pageio_descriptor*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct nfs_pageio_descriptor*,struct inode*,int *) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct page*,unsigned int,unsigned int) ;

int FUNC_11(struct nfs_open_context *VAR_2, struct inode *VAR_3,
         struct page *VAR_4)
{
 struct nfs_page *VAR_5;
 unsigned int VAR_6;
 struct nfs_pageio_descriptor VAR_7;

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6 == 0)
  return FUNC_7(VAR_4);
 VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_4, 0, VAR_6);
 if (FUNC_0(VAR_5)) {
  FUNC_9(VAR_4);
  return FUNC_2(VAR_5);
 }
 if (VAR_6 < VAR_0)
  FUNC_10(VAR_4, VAR_6, VAR_0);

 FUNC_1(VAR_3)->read_pageio_init(&VAR_7, VAR_3, &VAR_1);
 FUNC_5(&VAR_7, VAR_5);
 FUNC_6(&VAR_7);
 return 0;
}
