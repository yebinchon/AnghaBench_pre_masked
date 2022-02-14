
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dfs_info3_param {int path_consumed; int ref_flag; int server_type; int flags; int node_name; int path_name; } ;


 int FUNC_0 (int,char*,int ,...) ;

__attribute__((used)) static void FUNC_1(const struct dfs_info3_param *VAR_0)
{
 FUNC_0(1, "DFS: ref path: %s", VAR_0->path_name);
 FUNC_0(1, "DFS: node path: %s", VAR_0->node_name);
 FUNC_0(1, "DFS: fl: %hd, srv_type: %hd", VAR_0->flags, VAR_0->server_type);
 FUNC_0(1, "DFS: ref_flags: %hd, path_consumed: %hd", VAR_0->ref_flag,
    VAR_0->path_consumed);
}
