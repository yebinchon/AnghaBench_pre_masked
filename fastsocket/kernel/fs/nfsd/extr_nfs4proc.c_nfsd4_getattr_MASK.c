
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nfsd4_getattr {int* ga_bmval; int * ga_fhp; } ;
struct nfsd4_compound_state {int current_fh; int minorversion; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct svc_rqst*,int *,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static __be32
FUNC_4(struct svc_rqst *VAR_4, struct nfsd4_compound_state *VAR_5,
       struct nfsd4_getattr *VAR_6)
{
 __be32 VAR_7;

 VAR_7 = FUNC_0(VAR_4, &VAR_5->current_fh, 0, VAR_0);
 if (VAR_7)
  return VAR_7;

 if (VAR_6->ga_bmval[1] & VAR_1)
  return VAR_3;

 VAR_6->ga_bmval[0] &= FUNC_1(VAR_5->minorversion);
 VAR_6->ga_bmval[1] &= FUNC_2(VAR_5->minorversion);
 VAR_6->ga_bmval[2] &= FUNC_3(VAR_5->minorversion);

 VAR_6->ga_fhp = &VAR_5->current_fh;
 return VAR_2;
}
