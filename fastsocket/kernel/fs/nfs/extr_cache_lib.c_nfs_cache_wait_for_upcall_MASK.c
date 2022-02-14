
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_cache_defer_req {int completion; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int) ;

int FUNC_1(struct nfs_cache_defer_req *VAR_3)
{
 if (FUNC_0(&VAR_3->completion,
   VAR_2 * VAR_1) == 0)
  return -VAR_0;
 return 0;
}
