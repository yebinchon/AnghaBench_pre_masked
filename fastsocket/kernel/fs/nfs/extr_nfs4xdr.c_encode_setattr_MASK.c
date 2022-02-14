
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_2__ {int data; } ;
struct nfs_setattrargs {int iap; TYPE_1__ stateid; } ;
struct nfs_server {int dummy; } ;
struct compound_hdr {int replen; int nops; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct xdr_stream*,int ,struct nfs_server const*) ;
 int * FUNC_2 (struct xdr_stream*,scalar_t__) ;
 int FUNC_3 (int *,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct xdr_stream *VAR_3, const struct nfs_setattrargs *VAR_4, const struct nfs_server *VAR_5, struct compound_hdr *VAR_6)
{
 __be32 *VAR_7;

 VAR_7 = FUNC_2(VAR_3, 4+VAR_0);
 *VAR_7++ = FUNC_0(VAR_1);
 FUNC_3(VAR_7, VAR_4->stateid.data, VAR_0);
 VAR_6->nops++;
 VAR_6->replen += VAR_2;
 FUNC_1(VAR_3, VAR_4->iap, VAR_5);
}
