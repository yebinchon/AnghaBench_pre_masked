
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct cb_compound_hdr_res {int * nops; int tag; int taglen; int * status; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xdr_stream*,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32 FUNC_4(struct xdr_stream *VAR_1, struct cb_compound_hdr_res *VAR_2)
{
 __be32 VAR_3;

 VAR_2->status = FUNC_3(VAR_1, 4);
 if (FUNC_2(VAR_2->status == ((void*)0)))
  return FUNC_1(VAR_0);
 VAR_3 = FUNC_0(VAR_1, VAR_2->taglen, VAR_2->tag);
 if (FUNC_2(VAR_3 != 0))
  return VAR_3;
 VAR_2->nops = FUNC_3(VAR_1, 4);
 if (FUNC_2(VAR_2->nops == ((void*)0)))
  return FUNC_1(VAR_0);
 return 0;
}
