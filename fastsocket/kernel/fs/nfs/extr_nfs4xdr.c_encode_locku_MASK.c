
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct nfs_locku_args {TYPE_4__* fl; TYPE_3__* stateid; TYPE_2__* seqid; } ;
struct compound_hdr {int replen; int nops; } ;
typedef int __be32 ;
struct TYPE_9__ {int fl_start; } ;
struct TYPE_8__ {int data; } ;
struct TYPE_7__ {TYPE_1__* sequence; } ;
struct TYPE_6__ {int counter; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int * FUNC_3 (struct xdr_stream*,scalar_t__) ;
 int * FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct xdr_stream *VAR_3, const struct nfs_locku_args *VAR_4, struct compound_hdr *VAR_5)
{
 __be32 *VAR_6;

 VAR_6 = FUNC_3(VAR_3, 12+VAR_0+16);
 *VAR_6++ = FUNC_0(VAR_1);
 *VAR_6++ = FUNC_0(FUNC_2(VAR_4->fl, 0));
 *VAR_6++ = FUNC_0(VAR_4->seqid->sequence->counter);
 VAR_6 = FUNC_5(VAR_6, VAR_4->stateid->data, VAR_0);
 VAR_6 = FUNC_4(VAR_6, VAR_4->fl->fl_start);
 FUNC_4(VAR_6, FUNC_1(VAR_4->fl));
 VAR_5->nops++;
 VAR_5->replen += VAR_2;
}
