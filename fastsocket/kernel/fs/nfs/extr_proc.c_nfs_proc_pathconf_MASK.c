
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int dummy; } ;
struct nfs_pathconf {int max_namelen; scalar_t__ max_link; } ;
struct nfs_fh {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct nfs_server *VAR_1, struct nfs_fh *VAR_2,
    struct nfs_pathconf *VAR_3)
{
 VAR_3->max_link = 0;
 VAR_3->max_namelen = VAR_0;
 return 0;
}
