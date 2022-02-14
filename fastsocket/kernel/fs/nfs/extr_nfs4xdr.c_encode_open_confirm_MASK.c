
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct nfs_open_confirmargs {TYPE_2__* seqid; TYPE_3__* stateid; } ;
struct compound_hdr {int replen; int nops; } ;
typedef void* __be32 ;
struct TYPE_6__ {int data; } ;
struct TYPE_5__ {TYPE_1__* sequence; } ;
struct TYPE_4__ {int counter; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 void** FUNC_1 (struct xdr_stream*,scalar_t__) ;
 void** FUNC_2 (void**,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct xdr_stream *VAR_3, const struct nfs_open_confirmargs *VAR_4, struct compound_hdr *VAR_5)
{
 __be32 *VAR_6;

 VAR_6 = FUNC_1(VAR_3, 4+VAR_0+4);
 *VAR_6++ = FUNC_0(VAR_1);
 VAR_6 = FUNC_2(VAR_6, VAR_4->stateid->data, VAR_0);
 *VAR_6 = FUNC_0(VAR_4->seqid->sequence->counter);
 VAR_5->nops++;
 VAR_5->replen += VAR_2;
}
