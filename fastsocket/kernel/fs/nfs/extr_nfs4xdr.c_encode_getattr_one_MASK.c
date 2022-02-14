
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xdr_stream {int dummy; } ;
struct compound_hdr {int replen; int nops; } ;
typedef void* __be32 ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 void** FUNC_1 (struct xdr_stream*,int) ;

__attribute__((used)) static void FUNC_2(struct xdr_stream *VAR_2, uint32_t VAR_3, struct compound_hdr *VAR_4)
{
 __be32 *VAR_5;

 VAR_5 = FUNC_1(VAR_2, 12);
 *VAR_5++ = FUNC_0(VAR_0);
 *VAR_5++ = FUNC_0(1);
 *VAR_5 = FUNC_0(VAR_3);
 VAR_4->nops++;
 VAR_4->replen += VAR_1;
}
