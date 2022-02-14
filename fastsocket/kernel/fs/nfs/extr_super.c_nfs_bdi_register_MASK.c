
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int s_dev; int backing_dev_info; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(struct nfs_server *VAR_0)
{
 return FUNC_0(&VAR_0->backing_dev_info, VAR_0->s_dev);
}
