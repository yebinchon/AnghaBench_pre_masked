
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_direct_req {int completion; scalar_t__ iocb; scalar_t__ count; scalar_t__ error; } ;


 int FUNC_0 (scalar_t__,long,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nfs_direct_req*) ;

__attribute__((used)) static void FUNC_3(struct nfs_direct_req *VAR_0)
{
 if (VAR_0->iocb) {
  long VAR_1 = (long) VAR_0->error;
  if (!VAR_1)
   VAR_1 = (long) VAR_0->count;
  FUNC_0(VAR_0->iocb, VAR_1, 0);
 }
 FUNC_1(&VAR_0->completion);

 FUNC_2(VAR_0);
}
