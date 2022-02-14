
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pohmelfs_inode {int state; } ;
struct page {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 struct pohmelfs_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct pohmelfs_inode*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct page **VAR_1, unsigned int VAR_2,
  void *VAR_3, int VAR_4)
{
 struct inode *VAR_5 = VAR_3;
 struct pohmelfs_inode *VAR_6 = FUNC_0(VAR_5);

 if (VAR_5) {
  if (VAR_4) {
   FUNC_2(VAR_5);
   FUNC_1(VAR_0, &VAR_6->state);
  } else {
   FUNC_4(VAR_0, &VAR_6->state);
  }

  FUNC_3(VAR_6);
 }

 return VAR_4;
}
