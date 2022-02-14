
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client {unsigned long cl_last_renewal; int cl_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct nfs_client *VAR_0, unsigned long VAR_1)
{
 FUNC_0(&VAR_0->cl_lock);
 if (FUNC_2(VAR_0->cl_last_renewal,VAR_1))
  VAR_0->cl_last_renewal = VAR_1;
 FUNC_1(&VAR_0->cl_lock);
}
