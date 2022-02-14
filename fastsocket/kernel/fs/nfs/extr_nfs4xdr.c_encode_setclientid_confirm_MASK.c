
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_2__ {int data; } ;
struct nfs4_setclientid_res {TYPE_1__ confirm; int clientid; } ;
struct compound_hdr {int replen; int nops; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int * FUNC_1 (struct xdr_stream*,scalar_t__) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct xdr_stream *VAR_3, const struct nfs4_setclientid_res *VAR_4, struct compound_hdr *VAR_5)
{
 __be32 *VAR_6;

 VAR_6 = FUNC_1(VAR_3, 12 + VAR_0);
 *VAR_6++ = FUNC_0(VAR_1);
 VAR_6 = FUNC_2(VAR_6, VAR_4->clientid);
 FUNC_3(VAR_6, VAR_4->confirm.data, VAR_0);
 VAR_5->nops++;
 VAR_5->replen += VAR_2;
}
