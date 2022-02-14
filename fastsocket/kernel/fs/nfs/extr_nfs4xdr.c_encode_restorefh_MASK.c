
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct compound_hdr {int replen; int nops; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (struct xdr_stream*,int) ;

__attribute__((used)) static void
FUNC_2(struct xdr_stream *VAR_2, struct compound_hdr *VAR_3)
{
 __be32 *VAR_4;

 VAR_4 = FUNC_1(VAR_2, 4);
 *VAR_4 = FUNC_0(VAR_0);
 VAR_3->nops++;
 VAR_3->replen += VAR_1;
}
