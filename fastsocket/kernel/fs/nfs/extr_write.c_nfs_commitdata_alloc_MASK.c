
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_commit_data {int pages; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct nfs_commit_data* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct nfs_commit_data*,int ,int) ;
 int VAR_1 ;

struct nfs_commit_data *FUNC_3(void)
{
 struct nfs_commit_data *VAR_2 = FUNC_1(VAR_1, VAR_0);

 if (VAR_2) {
  FUNC_2(VAR_2, 0, sizeof(*VAR_2));
  FUNC_0(&VAR_2->pages);
 }
 return VAR_2;
}
