
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_fh {unsigned int size; int data; } ;
typedef int __be32 ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;
 int FUNC_2 (int ,int *,unsigned int) ;
 int FUNC_3 (int ,int ,int) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static __be32 *
FUNC_5(__be32 *VAR_1, struct nfs_fh *VAR_2)
{
 unsigned int VAR_3;

 if ((VAR_3 = FUNC_4(*VAR_1++)) != VAR_0) {
  FUNC_1("lockd: bad fhandle size %d (should be %d)\n",
   VAR_3, VAR_0);
  return ((void*)0);
 }
 VAR_2->size = VAR_0;
 FUNC_3(VAR_2->data, 0, sizeof(VAR_2->data));
 FUNC_2(VAR_2->data, VAR_1, VAR_0);
 return VAR_1 + FUNC_0(VAR_0);
}
