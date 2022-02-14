
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_timeout {int dummy; } ;
struct nfs_client_initdata {TYPE_1__* rpc_ops; scalar_t__ hostname; } ;
struct nfs_client {scalar_t__ cl_cons_state; int cl_share_link; } ;
typedef int rpc_authflavor_t ;
struct TYPE_2__ {int (* init_client ) (struct nfs_client*,struct rpc_timeout const*,char const*,int ,int) ;int version; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct nfs_client* FUNC_1 (int) ;
 int FUNC_2 (struct nfs_client*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct nfs_client* FUNC_3 (struct nfs_client*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *,int *) ;
 struct nfs_client* FUNC_6 (struct nfs_client_initdata const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct nfs_client*) ;
 struct nfs_client* FUNC_8 (struct nfs_client_initdata const*) ;
 int FUNC_9 (struct nfs_client*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct nfs_client*,struct rpc_timeout const*,char const*,int ,int) ;
 int FUNC_13 (int ,int) ;

__attribute__((used)) static struct nfs_client *
FUNC_14(const struct nfs_client_initdata *VAR_6,
        const struct rpc_timeout *VAR_7,
        const char *VAR_8,
        rpc_authflavor_t VAR_9,
        int VAR_10)
{
 struct nfs_client *VAR_11, *VAR_12 = ((void*)0);
 int VAR_13;

 FUNC_4("--> nfs_get_client(%s,v%u)\n",
  VAR_6->hostname ?: "", VAR_6->rpc_ops->version);


 do {
  FUNC_10(&VAR_5);

  VAR_11 = FUNC_8(VAR_6);
  if (VAR_11)
   goto found_client;
  if (VAR_12)
   goto install_client;

  FUNC_11(&VAR_5);

  VAR_12 = FUNC_6(VAR_6);
 } while (!FUNC_2(VAR_12));

 FUNC_4("--> nfs_get_client() = %ld [failed]\n", FUNC_3(VAR_12));
 return VAR_12;


install_client:
 VAR_11 = VAR_12;
 FUNC_5(&VAR_11->cl_share_link, &VAR_4);
 FUNC_11(&VAR_5);

 VAR_13 = VAR_6->rpc_ops->init_client(VAR_11, VAR_7, VAR_8,
           VAR_9, VAR_10);
 if (VAR_13 < 0) {
  FUNC_9(VAR_11);
  return FUNC_1(VAR_13);
 }
 FUNC_4("--> nfs_get_client() = %p [new]\n", VAR_11);
 return VAR_11;




found_client:
 FUNC_11(&VAR_5);

 if (VAR_12)
  FUNC_7(VAR_12);

 VAR_13 = FUNC_13(VAR_3,
    VAR_11->cl_cons_state < VAR_1);
 if (VAR_13 < 0) {
  FUNC_9(VAR_11);
  return FUNC_1(-VAR_0);
 }

 if (VAR_11->cl_cons_state < VAR_2) {
  VAR_13 = VAR_11->cl_cons_state;
  FUNC_9(VAR_11);
  return FUNC_1(VAR_13);
 }

 FUNC_0(VAR_11->cl_cons_state != VAR_2);

 FUNC_4("--> nfs_get_client() = %p [share]\n", VAR_11);
 return VAR_11;
}
