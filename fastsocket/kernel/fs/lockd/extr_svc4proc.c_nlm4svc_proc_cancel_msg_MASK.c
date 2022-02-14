
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nlm_args {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct svc_rqst*,int ,struct nlm_args*,int ) ;
 int VAR_1 ;

__attribute__((used)) static __be32 FUNC_2(struct svc_rqst *VAR_2, struct nlm_args *VAR_3,
            void *VAR_4)
{
 FUNC_0("lockd: CANCEL_MSG    called\n");
 return FUNC_1(VAR_2, VAR_0, VAR_3, VAR_1);
}
