
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_serv {int * sv_pools; } ;
struct svc_rqst {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct svc_rqst* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct svc_serv*,char*,int *,int ,int ,int ) ;
 struct svc_rqst* FUNC_3 (struct svc_serv*,int *) ;

struct svc_rqst *
FUNC_4(struct svc_serv *VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_2(VAR_9, "tcp", &VAR_5, VAR_2,
    VAR_6, VAR_4);
 if (VAR_10 <= 0)
  goto out_err;
 VAR_7 = VAR_10;
 FUNC_1("NFS: Callback listener port = %u (af %u)\n",
   VAR_7, VAR_2);

 VAR_10 = FUNC_2(VAR_9, "tcp", &VAR_5, VAR_3,
    VAR_6, VAR_4);
 if (VAR_10 > 0) {
  VAR_8 = VAR_10;
  FUNC_1("NFS: Callback listener port = %u (af %u)\n",
    VAR_8, VAR_3);
 } else if (VAR_10 == -VAR_0)
  VAR_10 = 0;
 else
  goto out_err;

 return FUNC_3(VAR_9, &VAR_9->sv_pools[0]);

out_err:
 if (VAR_10 == 0)
  VAR_10 = -VAR_1;
 return FUNC_0(VAR_10);
}
