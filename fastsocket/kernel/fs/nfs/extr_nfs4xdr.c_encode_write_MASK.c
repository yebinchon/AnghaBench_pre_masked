
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_2__ {int data; } ;
struct nfs_writeargs {int count; int pgbase; int pages; int stable; int offset; TYPE_1__ stateid; } ;
struct compound_hdr {int replen; int nops; } ;
typedef void* __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct xdr_stream*,int ,int ) ;
 void** FUNC_2 (struct xdr_stream*,int) ;
 void** FUNC_3 (void**,int ) ;
 int FUNC_4 (struct xdr_stream*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct xdr_stream *VAR_3, const struct nfs_writeargs *VAR_4, struct compound_hdr *VAR_5)
{
 __be32 *VAR_6;

 VAR_6 = FUNC_2(VAR_3, 4);
 *VAR_6 = FUNC_0(VAR_1);

 FUNC_1(VAR_3, VAR_4->stateid.data, VAR_0);

 VAR_6 = FUNC_2(VAR_3, 16);
 VAR_6 = FUNC_3(VAR_6, VAR_4->offset);
 *VAR_6++ = FUNC_0(VAR_4->stable);
 *VAR_6 = FUNC_0(VAR_4->count);

 FUNC_4(VAR_3, VAR_4->pages, VAR_4->pgbase, VAR_4->count);
 VAR_5->nops++;
 VAR_5->replen += VAR_2;
}
