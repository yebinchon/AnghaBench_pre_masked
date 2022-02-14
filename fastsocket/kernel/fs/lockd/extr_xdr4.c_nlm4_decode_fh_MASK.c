
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_fh {scalar_t__ size; int data; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,int *,scalar_t__) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static __be32 *
FUNC_5(__be32 *VAR_1, struct nfs_fh *VAR_2)
{
 FUNC_3(VAR_2->data, 0, sizeof(VAR_2->data));
 VAR_2->size = FUNC_4(*VAR_1++);
 if (VAR_2->size > VAR_0) {
  FUNC_1("lockd: bad fhandle size %d (should be <=%d)\n",
   VAR_2->size, VAR_0);
  return ((void*)0);
 }
       FUNC_2(VAR_2->data, VAR_1, VAR_2->size);
 return VAR_1 + FUNC_0(VAR_2->size);
}
