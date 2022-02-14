
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct nfs_readdesc {TYPE_2__* pgio; int ctx; } ;
struct nfs_page {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int pg_error; } ;
struct TYPE_3__ {struct inode* host; } ;


 scalar_t__ FUNC_0 (struct nfs_page*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct nfs_page*) ;
 struct nfs_page* FUNC_2 (int ,struct inode*,struct page*,int ,unsigned int) ;
 unsigned int FUNC_3 (struct page*) ;
 int FUNC_4 (TYPE_2__*,struct nfs_page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_8(void *VAR_1, struct page *VAR_2)
{
 struct nfs_readdesc *VAR_3 = (struct nfs_readdesc *)VAR_1;
 struct inode *VAR_4 = VAR_2->mapping->host;
 struct nfs_page *VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_2);
 if (VAR_6 == 0)
  return FUNC_5(VAR_2);

 VAR_5 = FUNC_2(VAR_3->ctx, VAR_4, VAR_2, 0, VAR_6);
 if (FUNC_0(VAR_5))
  goto out_error;

 if (VAR_6 < VAR_0)
  FUNC_7(VAR_2, VAR_6, VAR_0);
 if (!FUNC_4(VAR_3->pgio, VAR_5)) {
  VAR_7 = VAR_3->pgio->pg_error;
  goto out_unlock;
 }
 return 0;
out_error:
 VAR_7 = FUNC_1(VAR_5);
out_unlock:
 FUNC_6(VAR_2);
 return VAR_7;
}
