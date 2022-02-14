
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_page {int dummy; } ;
struct list_head {int next; } ;


 int FUNC_0 (struct list_head*) ;
 struct nfs_page* FUNC_1 (int ) ;
 int FUNC_2 (struct nfs_page*) ;
 int FUNC_3 (struct nfs_page*) ;

__attribute__((used)) static void
FUNC_4(struct list_head *VAR_0)
{
 struct nfs_page *VAR_1;

 while (!FUNC_0(VAR_0)) {
  VAR_1 = FUNC_1(VAR_0->next);
  FUNC_2(VAR_1);
  FUNC_3(VAR_1);
 }
}
