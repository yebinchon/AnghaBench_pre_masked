
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct nfs_lock_args {TYPE_6__* lock_seqid; TYPE_4__* lock_stateid; int lock_owner; TYPE_3__* open_stateid; TYPE_2__* open_seqid; scalar_t__ new_lock_owner; TYPE_7__* fl; scalar_t__ reclaim; int block; } ;
struct compound_hdr {int replen; int nops; } ;
typedef void* __be32 ;
struct TYPE_15__ {int fl_start; } ;
struct TYPE_14__ {TYPE_5__* sequence; } ;
struct TYPE_13__ {scalar_t__ counter; } ;
struct TYPE_12__ {int data; } ;
struct TYPE_11__ {int data; } ;
struct TYPE_10__ {TYPE_1__* sequence; } ;
struct TYPE_9__ {scalar_t__ counter; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct xdr_stream*,int *) ;
 int FUNC_2 (TYPE_7__*) ;
 scalar_t__ FUNC_3 (TYPE_7__*,int ) ;
 void** FUNC_4 (struct xdr_stream*,int) ;
 void** FUNC_5 (void**,int ) ;
 void** FUNC_6 (void**,int ,int) ;

__attribute__((used)) static void FUNC_7(struct xdr_stream *VAR_3, const struct nfs_lock_args *VAR_4, struct compound_hdr *VAR_5)
{
 __be32 *VAR_6;

 VAR_6 = FUNC_4(VAR_3, 32);
 *VAR_6++ = FUNC_0(VAR_1);
 *VAR_6++ = FUNC_0(FUNC_3(VAR_4->fl, VAR_4->block));
 *VAR_6++ = FUNC_0(VAR_4->reclaim);
 VAR_6 = FUNC_5(VAR_6, VAR_4->fl->fl_start);
 VAR_6 = FUNC_5(VAR_6, FUNC_2(VAR_4->fl));
 *VAR_6 = FUNC_0(VAR_4->new_lock_owner);
 if (VAR_4->new_lock_owner){
  VAR_6 = FUNC_4(VAR_3, 4+VAR_0+4);
  *VAR_6++ = FUNC_0(VAR_4->open_seqid->sequence->counter);
  VAR_6 = FUNC_6(VAR_6, VAR_4->open_stateid->data, VAR_0);
  *VAR_6++ = FUNC_0(VAR_4->lock_seqid->sequence->counter);
  FUNC_1(VAR_3, &VAR_4->lock_owner);
 }
 else {
  VAR_6 = FUNC_4(VAR_3, VAR_0+4);
  VAR_6 = FUNC_6(VAR_6, VAR_4->lock_stateid->data, VAR_0);
  *VAR_6 = FUNC_0(VAR_4->lock_seqid->sequence->counter);
 }
 VAR_5->nops++;
 VAR_5->replen += VAR_2;
}
