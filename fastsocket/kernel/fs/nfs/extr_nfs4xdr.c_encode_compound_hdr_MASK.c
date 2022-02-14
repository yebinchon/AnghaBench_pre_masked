
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct rpc_rqst {TYPE_1__* rq_cred; } ;
struct rpc_auth {scalar_t__ au_rslack; } ;
struct compound_hdr {scalar_t__ replen; scalar_t__ taglen; int nops; void** nops_p; int minorversion; int tag; } ;
typedef void* __be32 ;
struct TYPE_2__ {struct rpc_auth* cr_auth; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int ) ;
 void** FUNC_3 (struct xdr_stream*,scalar_t__) ;
 void** FUNC_4 (void**,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct xdr_stream *VAR_2,
    struct rpc_rqst *VAR_3,
    struct compound_hdr *VAR_4)
{
 __be32 *VAR_5;
 struct rpc_auth *VAR_6 = VAR_3->rq_cred->cr_auth;




 VAR_4->replen = VAR_1 + VAR_6->au_rslack + 3 + VAR_4->taglen;

 FUNC_2("encode_compound: tag=%.*s\n", (int)VAR_4->taglen, VAR_4->tag);
 FUNC_0(VAR_4->taglen > VAR_0);
 VAR_5 = FUNC_3(VAR_2, 4 + VAR_4->taglen + 8);
 VAR_5 = FUNC_4(VAR_5, VAR_4->tag, VAR_4->taglen);
 *VAR_5++ = FUNC_1(VAR_4->minorversion);
 VAR_4->nops_p = VAR_5;
 *VAR_5 = FUNC_1(VAR_4->nops);
}
