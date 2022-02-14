
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs_commitargs {int count; int offset; } ;
struct compound_hdr {int replen; int nops; } ;
typedef void* __be32 ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 void** FUNC_1 (struct xdr_stream*,int) ;
 void** FUNC_2 (void**,int ) ;

__attribute__((used)) static void FUNC_3(struct xdr_stream *VAR_2, const struct nfs_commitargs *VAR_3, struct compound_hdr *VAR_4)
{
 __be32 *VAR_5;

 VAR_5 = FUNC_1(VAR_2, 16);
 *VAR_5++ = FUNC_0(VAR_0);
 VAR_5 = FUNC_2(VAR_5, VAR_3->offset);
 *VAR_5 = FUNC_0(VAR_3->count);
 VAR_4->nops++;
 VAR_4->replen += VAR_1;
}
