
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nlm_res {int status; int cookie; } ;
struct nlm_host {scalar_t__ h_nsmstate; } ;
struct nlm_file {int dummy; } ;
struct nlm_args {scalar_t__ state; int reclaim; int cookie; int block; int lock; } ;
typedef int __be32 ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct svc_rqst*,struct nlm_args*,struct nlm_host**,struct nlm_file**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct nlm_file*) ;
 int FUNC_3 (struct nlm_host*) ;
 int FUNC_4 (struct svc_rqst*,struct nlm_file*,struct nlm_host*,int *,int ,int *,int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static __be32
FUNC_6(struct svc_rqst *VAR_4, struct nlm_args *VAR_5,
             struct nlm_res *VAR_6)
{
 struct nlm_host *VAR_7;
 struct nlm_file *VAR_8;
 __be32 VAR_9 = VAR_3;

 FUNC_0("lockd: LOCK          called\n");

 VAR_6->cookie = VAR_5->cookie;


 if ((VAR_6->status = FUNC_1(VAR_4, VAR_5, &VAR_7, &VAR_8)))
  return VAR_6->status == VAR_0 ? VAR_2 :VAR_3;
 VAR_6->status = FUNC_4(VAR_4, VAR_8, VAR_7, &VAR_5->lock,
     VAR_5->block, &VAR_5->cookie,
     VAR_5->reclaim);
 if (VAR_6->status == VAR_0)
  VAR_9 = VAR_2;
 else
  FUNC_0("lockd: LOCK         status %d\n", FUNC_5(VAR_6->status));

 FUNC_3(VAR_7);
 FUNC_2(VAR_8);
 return VAR_9;
}
