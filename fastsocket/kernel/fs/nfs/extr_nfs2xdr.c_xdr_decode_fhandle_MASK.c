
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_fh {int data; int size; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static inline __be32 *
FUNC_2(__be32 *VAR_1, struct nfs_fh *VAR_2)
{

 VAR_2->size = VAR_0;
 FUNC_1(VAR_2->data, VAR_1, VAR_0);
 return VAR_1 + FUNC_0(VAR_0);
}
