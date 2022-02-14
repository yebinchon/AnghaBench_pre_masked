
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

__attribute__((used)) static void FUNC_2(struct xdr_stream *VAR_2, uint32_t VAR_3, uint32_t VAR_4, struct compound_hdr *VAR_5)
{
 __be32 *VAR_6;

 VAR_6 = FUNC_1(VAR_2, 16);
 *VAR_6++ = FUNC_0(VAR_0);
 *VAR_6++ = FUNC_0(2);
 *VAR_6++ = FUNC_0(VAR_3);
 *VAR_6 = FUNC_0(VAR_4);
 VAR_5->nops++;
 VAR_5->replen += VAR_1;
}
