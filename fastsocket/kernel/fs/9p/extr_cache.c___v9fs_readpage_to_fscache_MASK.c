
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_cookie {int fscache; } ;
struct page {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,struct page*,int ) ;
 struct v9fs_cookie* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,struct page*) ;

void FUNC_4(struct inode *VAR_2, struct page *VAR_3)
{
 int VAR_4;
 const struct v9fs_cookie *VAR_5 = FUNC_2(VAR_2);

 FUNC_0(VAR_1, "inode %p page %p", VAR_2, VAR_3);
 VAR_4 = FUNC_1(VAR_5->fscache, VAR_3, VAR_0);
 FUNC_0(VAR_1, "ret =  %d", VAR_4);
 if (VAR_4 != 0)
  FUNC_3(VAR_2, VAR_3);
}
