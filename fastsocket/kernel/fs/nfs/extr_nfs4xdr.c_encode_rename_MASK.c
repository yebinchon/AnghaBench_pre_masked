
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct qstr {int name; int len; } ;
struct compound_hdr {int replen; int nops; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct xdr_stream*,int ,int ) ;
 int * FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static void FUNC_3(struct xdr_stream *VAR_2, const struct qstr *VAR_3, const struct qstr *VAR_4, struct compound_hdr *VAR_5)
{
 __be32 *VAR_6;

 VAR_6 = FUNC_2(VAR_2, 4);
 *VAR_6 = FUNC_0(VAR_0);
 FUNC_1(VAR_2, VAR_3->len, VAR_3->name);
 FUNC_1(VAR_2, VAR_4->len, VAR_4->name);
 VAR_5->nops++;
 VAR_5->replen += VAR_1;
}
