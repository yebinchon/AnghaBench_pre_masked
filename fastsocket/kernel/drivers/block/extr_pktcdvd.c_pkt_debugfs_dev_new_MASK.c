
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pktcdvd_device {int * dfs_f_info; int * dfs_d_root; int name; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ,int ) ;
 int * FUNC_2 (char*,int ,int *,struct pktcdvd_device*,int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct pktcdvd_device *VAR_3)
{
 if (!VAR_2)
  return;
 VAR_3->dfs_f_info = ((void*)0);
 VAR_3->dfs_d_root = FUNC_1(VAR_3->name, VAR_2);
 if (FUNC_0(VAR_3->dfs_d_root)) {
  VAR_3->dfs_d_root = ((void*)0);
  return;
 }
 VAR_3->dfs_f_info = FUNC_2("info", VAR_0,
    VAR_3->dfs_d_root, VAR_3, &VAR_1);
 if (FUNC_0(VAR_3->dfs_f_info)) {
  VAR_3->dfs_f_info = ((void*)0);
  return;
 }
}
