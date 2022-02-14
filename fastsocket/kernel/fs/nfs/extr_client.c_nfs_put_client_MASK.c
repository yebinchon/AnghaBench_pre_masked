
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client {int cl_superblocks; int cl_share_link; int cl_count; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nfs_client*) ;
 int VAR_0 ;
 int FUNC_7 (struct nfs_client*) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct nfs_client *VAR_1)
{
 if (!VAR_1)
  return;

 FUNC_3("--> nfs_put_client({%d})\n", FUNC_2(&VAR_1->cl_count));

 if (FUNC_1(&VAR_1->cl_count, &VAR_0)) {
  FUNC_4(&VAR_1->cl_share_link);
  FUNC_6(VAR_1);
  FUNC_8(&VAR_0);

  FUNC_0(!FUNC_5(&VAR_1->cl_superblocks));

  FUNC_7(VAR_1);
 }
}
