
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct nfs_commitres {TYPE_1__* verf; } ;
struct TYPE_2__ {int verifier; } ;


 int VAR_0 ;
 int FUNC_0 (struct xdr_stream*,int ) ;
 int FUNC_1 (struct xdr_stream*,int ) ;

__attribute__((used)) static int FUNC_2(struct xdr_stream *VAR_1, struct nfs_commitres *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 if (!VAR_3)
  VAR_3 = FUNC_1(VAR_1, VAR_2->verf->verifier);
 return VAR_3;
}
