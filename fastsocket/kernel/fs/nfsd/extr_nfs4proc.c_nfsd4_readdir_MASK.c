
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct svc_rqst {int dummy; } ;
struct TYPE_3__ {int data; } ;
struct nfsd4_readdir {int rd_cookie; int* rd_bmval; int * rd_fhp; struct svc_rqst* rd_rqstp; TYPE_1__ rd_verf; } ;
struct nfsd4_compound_state {int current_fh; int minorversion; } ;
struct TYPE_4__ {int data; } ;
typedef TYPE_2__ nfs4_verifier ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static __be32
FUNC_4(struct svc_rqst *VAR_5, struct nfsd4_compound_state *VAR_6,
       struct nfsd4_readdir *VAR_7)
{
 u64 VAR_8 = VAR_7->rd_cookie;
 static const nfs4_verifier VAR_9;



 if (VAR_7->rd_bmval[1] & VAR_1)
  return VAR_4;

 VAR_7->rd_bmval[0] &= FUNC_1(VAR_6->minorversion);
 VAR_7->rd_bmval[1] &= FUNC_2(VAR_6->minorversion);
 VAR_7->rd_bmval[2] &= FUNC_3(VAR_6->minorversion);

 if ((VAR_8 == 1) || (VAR_8 == 2) ||
     (VAR_8 == 0 && FUNC_0(VAR_7->rd_verf.data, VAR_9.data, VAR_0)))
  return VAR_3;

 VAR_7->rd_rqstp = VAR_5;
 VAR_7->rd_fhp = &VAR_6->current_fh;
 return VAR_2;
}
