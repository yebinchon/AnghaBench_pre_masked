
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct nfs4_setclientid {int sc_cb_ident; int sc_uaddr; int sc_uaddr_len; int sc_netid; int sc_netid_len; int sc_prog; int sc_name; int sc_name_len; TYPE_1__* sc_verifier; } ;
struct compound_hdr {int replen; int nops; } ;
typedef void* __be32 ;
struct TYPE_2__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct xdr_stream*,int ,int ) ;
 void** FUNC_2 (struct xdr_stream*,int) ;
 int FUNC_3 (void**,int ,int) ;

__attribute__((used)) static void FUNC_4(struct xdr_stream *VAR_3, const struct nfs4_setclientid *VAR_4, struct compound_hdr *VAR_5)
{
 __be32 *VAR_6;

 VAR_6 = FUNC_2(VAR_3, 4 + VAR_0);
 *VAR_6++ = FUNC_0(VAR_1);
 FUNC_3(VAR_6, VAR_4->sc_verifier->data, VAR_0);

 FUNC_1(VAR_3, VAR_4->sc_name_len, VAR_4->sc_name);
 VAR_6 = FUNC_2(VAR_3, 4);
 *VAR_6 = FUNC_0(VAR_4->sc_prog);
 FUNC_1(VAR_3, VAR_4->sc_netid_len, VAR_4->sc_netid);
 FUNC_1(VAR_3, VAR_4->sc_uaddr_len, VAR_4->sc_uaddr);
 VAR_6 = FUNC_2(VAR_3, 4);
 *VAR_6 = FUNC_0(VAR_4->sc_cb_ident);
 VAR_5->nops++;
 VAR_5->replen += VAR_2;
}
