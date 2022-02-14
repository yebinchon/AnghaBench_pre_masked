
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct svc_rqst {int rq_vec; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct nfsd4_write {unsigned long wr_buflen; unsigned long wr_bytes_written; int wr_how_written; int wr_vlen; int wr_offset; TYPE_1__ wr_verifier; int wr_stable_how; int wr_stateid; } ;
struct nfsd4_compound_state {int current_fh; } ;
struct file {int dummy; } ;
typedef int stateid_t ;
typedef scalar_t__ __be32 ;
struct TYPE_4__ {int tv_usec; int tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct nfsd4_compound_state*,int *,int ,struct file**) ;
 int FUNC_5 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_6 (struct svc_rqst*,int *,struct file*,int ,int ,int ,unsigned long*,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__ VAR_5 ;

__attribute__((used)) static __be32
FUNC_7(struct svc_rqst *VAR_6, struct nfsd4_compound_state *VAR_7,
     struct nfsd4_write *VAR_8)
{
 stateid_t *VAR_9 = &VAR_8->wr_stateid;
 struct file *VAR_10 = ((void*)0);
 u32 *VAR_11;
 __be32 VAR_12 = VAR_2;
 unsigned long VAR_13;



 if (VAR_8->wr_offset >= VAR_0)
  return VAR_3;

 FUNC_3();
 VAR_12 = FUNC_4(VAR_7, VAR_9, VAR_1, &VAR_10);
 if (VAR_10)
  FUNC_2(VAR_10);
 FUNC_5();

 if (VAR_12) {
  FUNC_0("NFSD: nfsd4_write: couldn't process stateid!\n");
  return VAR_12;
 }

 VAR_13 = VAR_8->wr_buflen;
 VAR_8->wr_how_written = VAR_8->wr_stable_how;
 VAR_11 = (u32 *)VAR_8->wr_verifier.data;
 *VAR_11++ = VAR_5.tv_sec;
 *VAR_11++ = VAR_5.tv_usec;

 VAR_12 = FUNC_6(VAR_6, &VAR_7->current_fh, VAR_10,
        VAR_8->wr_offset, VAR_6->rq_vec, VAR_8->wr_vlen,
        &VAR_13, &VAR_8->wr_how_written);
 if (VAR_10)
  FUNC_1(VAR_10);

 VAR_8->wr_bytes_written = VAR_13;

 if (VAR_12 == VAR_4)
  VAR_12 = VAR_3;
 return VAR_12;
}
