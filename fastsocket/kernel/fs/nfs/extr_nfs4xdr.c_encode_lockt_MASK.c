
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct nfs_lockt_args {int lock_owner; TYPE_1__* fl; } ;
struct compound_hdr {int replen; int nops; } ;
typedef int __be32 ;
struct TYPE_3__ {int fl_start; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct xdr_stream*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int * FUNC_4 (struct xdr_stream*,int) ;
 int * FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct xdr_stream *VAR_2, const struct nfs_lockt_args *VAR_3, struct compound_hdr *VAR_4)
{
 __be32 *VAR_5;

 VAR_5 = FUNC_4(VAR_2, 24);
 *VAR_5++ = FUNC_0(VAR_0);
 *VAR_5++ = FUNC_0(FUNC_3(VAR_3->fl, 0));
 VAR_5 = FUNC_5(VAR_5, VAR_3->fl->fl_start);
 VAR_5 = FUNC_5(VAR_5, FUNC_2(VAR_3->fl));
 FUNC_1(VAR_2, &VAR_3->lock_owner);
 VAR_4->nops++;
 VAR_4->replen += VAR_1;
}
