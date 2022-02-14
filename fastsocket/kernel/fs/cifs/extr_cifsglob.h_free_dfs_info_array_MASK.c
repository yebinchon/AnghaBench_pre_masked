
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dfs_info3_param {struct dfs_info3_param* node_name; struct dfs_info3_param* path_name; } ;


 int FUNC_0 (struct dfs_info3_param*) ;

__attribute__((used)) static inline void FUNC_1(struct dfs_info3_param *VAR_0,
           int VAR_1)
{
 int VAR_2;
 if ((VAR_1 == 0) || (VAR_0 == ((void*)0)))
  return;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  FUNC_0(VAR_0[VAR_2].path_name);
  FUNC_0(VAR_0[VAR_2].node_name);
 }
 FUNC_0(VAR_0);
}
