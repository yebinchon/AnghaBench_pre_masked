
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {scalar_t__ sync_mode; scalar_t__ nonblocking; } ;
struct page {int index; TYPE_1__* mapping; } ;
struct nfs_pageio_descriptor {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct inode*,int ,int) ;
 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (struct nfs_pageio_descriptor*,struct page*,int) ;
 int FUNC_3 (struct nfs_pageio_descriptor*,int ) ;
 int FUNC_4 (struct writeback_control*,struct page*) ;

__attribute__((used)) static int FUNC_5(struct page *VAR_4, struct writeback_control *VAR_5, struct nfs_pageio_descriptor *VAR_6)
{
 struct inode *VAR_7 = VAR_4->mapping->host;
 int VAR_8;

 FUNC_1(VAR_7, VAR_1);
 FUNC_0(VAR_7, VAR_2, 1);

 FUNC_3(VAR_6, VAR_4->index);
 VAR_8 = FUNC_2(VAR_6, VAR_4,
   VAR_5->sync_mode == VAR_3 ||
   VAR_5->nonblocking != 0);
 if (VAR_8 == -VAR_0) {
  FUNC_4(VAR_5, VAR_4);
  VAR_8 = 0;
 }
 return VAR_8;
}
