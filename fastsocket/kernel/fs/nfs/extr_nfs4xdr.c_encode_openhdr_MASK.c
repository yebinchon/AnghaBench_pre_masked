
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct nfs_openargs {int id; TYPE_3__* server; int clientid; int fmode; TYPE_2__* seqid; } ;
typedef void* __be32 ;
struct TYPE_6__ {int s_dev; } ;
struct TYPE_5__ {TYPE_1__* sequence; } ;
struct TYPE_4__ {int counter; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct xdr_stream*,int ) ;
 void** FUNC_2 (struct xdr_stream*,int) ;
 void** FUNC_3 (void**,int ) ;
 void** FUNC_4 (void**,char*,int) ;

__attribute__((used)) static inline void FUNC_5(struct xdr_stream *VAR_1, const struct nfs_openargs *VAR_2)
{
 __be32 *VAR_3;




 VAR_3 = FUNC_2(VAR_1, 8);
 *VAR_3++ = FUNC_0(VAR_0);
 *VAR_3 = FUNC_0(VAR_2->seqid->sequence->counter);
 FUNC_1(VAR_1, VAR_2->fmode);
 VAR_3 = FUNC_2(VAR_1, 32);
 VAR_3 = FUNC_3(VAR_3, VAR_2->clientid);
 *VAR_3++ = FUNC_0(20);
 VAR_3 = FUNC_4(VAR_3, "open id:", 8);
 *VAR_3++ = FUNC_0(VAR_2->server->s_dev);
 FUNC_3(VAR_3, VAR_2->id);
}
