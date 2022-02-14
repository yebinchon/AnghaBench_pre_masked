
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v9fs_cookie {int fscache; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int ,struct page*) ;
 int FUNC_4 (int ,struct page*) ;
 struct v9fs_cookie* FUNC_5 (struct inode*) ;

void FUNC_6(struct page *VAR_0)
{
 struct inode *VAR_1 = VAR_0->mapping->host;
 struct v9fs_cookie *VAR_2 = FUNC_5(VAR_1);

 FUNC_0(!VAR_2->fscache);

 if (FUNC_1(VAR_0)) {
  FUNC_4(VAR_2->fscache, VAR_0);
  FUNC_0(!FUNC_2(VAR_0));
  FUNC_3(VAR_2->fscache, VAR_0);
 }
}
