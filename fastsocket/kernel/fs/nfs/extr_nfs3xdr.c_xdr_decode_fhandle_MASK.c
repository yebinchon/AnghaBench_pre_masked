
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_fh {int size; int data; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline __be32 *
FUNC_3(__be32 *VAR_1, struct nfs_fh *VAR_2)
{
 if ((VAR_2->size = FUNC_2(*VAR_1++)) <= VAR_0) {
  FUNC_1(VAR_2->data, VAR_1, VAR_2->size);
  return VAR_1 + FUNC_0(VAR_2->size);
 }
 return ((void*)0);
}
