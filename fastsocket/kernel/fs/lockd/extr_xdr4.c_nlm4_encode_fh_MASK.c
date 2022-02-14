
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_fh {scalar_t__ size; int data; } ;
typedef scalar_t__ __be32 ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__*,int ,scalar_t__) ;

__attribute__((used)) static __be32 *
FUNC_3(__be32 *VAR_0, struct nfs_fh *VAR_1)
{
 *VAR_0++ = FUNC_1(VAR_1->size);
 if (VAR_1->size) VAR_0[FUNC_0(VAR_1->size)-1] = 0;
 FUNC_2(VAR_0, VAR_1->data, VAR_1->size);
 return VAR_0 + FUNC_0(VAR_1->size);
}
