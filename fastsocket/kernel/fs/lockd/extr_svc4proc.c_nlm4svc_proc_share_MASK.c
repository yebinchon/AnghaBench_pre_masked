
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nlm_res {int status; int cookie; } ;
struct nlm_host {int dummy; } ;
struct nlm_file {int dummy; } ;
struct nlm_args {int reclaim; int cookie; } ;
typedef int __be32 ;


 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct svc_rqst*,struct nlm_args*,struct nlm_host**,struct nlm_file**) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct nlm_file*) ;
 int FUNC_4 (struct nlm_host*) ;
 int FUNC_5 (struct nlm_host*,struct nlm_file*,struct nlm_args*) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static __be32
FUNC_7(struct svc_rqst *VAR_4, struct nlm_args *VAR_5,
              struct nlm_res *VAR_6)
{
 struct nlm_host *VAR_7;
 struct nlm_file *VAR_8;

 FUNC_0("lockd: SHARE         called\n");

 VAR_6->cookie = VAR_5->cookie;


 if (FUNC_1() && !VAR_5->reclaim) {
  VAR_6->status = VAR_1;
  return VAR_3;
 }


 if ((VAR_6->status = FUNC_2(VAR_4, VAR_5, &VAR_7, &VAR_8)))
  return VAR_6->status == VAR_0 ? VAR_2 :VAR_3;


 VAR_6->status = FUNC_5(VAR_7, VAR_8, VAR_5);

 FUNC_0("lockd: SHARE         status %d\n", FUNC_6(VAR_6->status));
 FUNC_4(VAR_7);
 FUNC_3(VAR_8);
 return VAR_3;
}
