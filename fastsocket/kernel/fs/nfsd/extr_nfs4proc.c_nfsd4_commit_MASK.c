
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct svc_rqst {int dummy; } ;
struct nfsd4_compound_state {int current_fh; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct nfsd4_commit {int co_count; int co_offset; TYPE_1__ co_verf; } ;
typedef scalar_t__ __be32 ;
struct TYPE_4__ {int tv_usec; int tv_sec; } ;


 scalar_t__ FUNC_0 (struct svc_rqst*,int *,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static __be32
FUNC_1(struct svc_rqst *VAR_3, struct nfsd4_compound_state *VAR_4,
      struct nfsd4_commit *VAR_5)
{
 __be32 VAR_6;

 u32 *VAR_7 = (u32 *)VAR_5->co_verf.data;
 *VAR_7++ = VAR_2.tv_sec;
 *VAR_7++ = VAR_2.tv_usec;

 VAR_6 = FUNC_0(VAR_3, &VAR_4->current_fh, VAR_5->co_offset,
        VAR_5->co_count);
 if (VAR_6 == VAR_1)
  VAR_6 = VAR_0;
 return VAR_6;
}
