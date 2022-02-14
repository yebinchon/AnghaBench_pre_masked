
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_fh {int size; int data; } ;
typedef int __be32 ;


 int * FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static inline __be32 *
FUNC_1(__be32 *VAR_0, const struct nfs_fh *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1->data, VAR_1->size);
}
