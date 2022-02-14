
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nfs_page {int dummy; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,int ) ;
 int FUNC_3 (struct nfs_page*) ;
 int FUNC_4 (struct nfs_page*) ;
 scalar_t__ FUNC_5 (struct nfs_page*) ;
 struct nfs_page* FUNC_6 (struct page*) ;
 int FUNC_7 (struct nfs_page*) ;
 int FUNC_8 (struct nfs_page*) ;
 int FUNC_9 (struct nfs_page*) ;
 int FUNC_10 (struct page*) ;

int FUNC_11(struct inode *VAR_1, struct page *VAR_2)
{
 struct nfs_page *VAR_3;
 int VAR_4 = 0;

 FUNC_0(!FUNC_1(VAR_2));
 for (;;) {
  FUNC_10(VAR_2);
  VAR_3 = FUNC_6(VAR_2);
  if (VAR_3 == ((void*)0))
   break;
  if (FUNC_5(VAR_3)) {
   FUNC_3(VAR_3);
   FUNC_4(VAR_3);




   FUNC_2(VAR_2, VAR_0);
   FUNC_8(VAR_3);
   break;
  }
  VAR_4 = FUNC_9(VAR_3);
  FUNC_7(VAR_3);
  if (VAR_4 < 0)
   break;
 }
 return VAR_4;
}
