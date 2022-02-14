
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct nfs_fh {int size; int data; } ;
struct mountres {struct nfs_fh* fh; } ;
typedef int size ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_4(struct xdr_stream *VAR_2, struct mountres *VAR_3)
{
 struct nfs_fh *VAR_4 = VAR_3->fh;
 u32 VAR_5;
 __be32 *VAR_6;

 VAR_6 = FUNC_3(VAR_2, sizeof(VAR_5));
 if (FUNC_2(VAR_6 == ((void*)0)))
  return -VAR_0;

 VAR_5 = FUNC_1(*VAR_6++);
 if (VAR_5 > VAR_1 || VAR_5 == 0)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_2, VAR_5);
 if (FUNC_2(VAR_6 == ((void*)0)))
  return -VAR_0;

 VAR_4->size = VAR_5;
 FUNC_0(VAR_4->data, VAR_6, VAR_5);
 return 0;
}
