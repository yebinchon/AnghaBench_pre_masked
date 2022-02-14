
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_client {scalar_t__ cl_state; scalar_t__ cl_cons_state; int cl_hostname; TYPE_1__* cl_mvops; int cl_count; } ;
struct TYPE_2__ {int nograce_recovery_ops; int reboot_recovery_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (struct nfs_client*) ;
 int FUNC_3 (struct nfs_client*) ;
 int FUNC_4 (struct nfs_client*,int ) ;
 int FUNC_5 (struct nfs_client*) ;
 scalar_t__ FUNC_6 (struct nfs_client*) ;
 int FUNC_7 (struct nfs_client*) ;
 int FUNC_8 (struct nfs_client*) ;
 int FUNC_9 (struct nfs_client*) ;
 int FUNC_10 (struct nfs_client*,int) ;
 int FUNC_11 (struct nfs_client*) ;
 int FUNC_12 (struct nfs_client*) ;
 int FUNC_13 (struct nfs_client*,int) ;
 int FUNC_14 (struct nfs_client*) ;
 int FUNC_15 (char*,char const*,char const*,int ,int) ;
 int FUNC_16 (int ,scalar_t__*) ;
 scalar_t__ FUNC_17 (char const*) ;
 scalar_t__ FUNC_18 (int ,scalar_t__*) ;
 scalar_t__ FUNC_19 (int ,scalar_t__*) ;
 scalar_t__ FUNC_20 (int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_21(struct nfs_client *VAR_10)
{
 int VAR_11 = 0;
 const char *VAR_12 = "", *VAR_13 = "";


 do {
  if (FUNC_18(VAR_2, &VAR_10->cl_state)) {
   VAR_12 = "lease expired";

   VAR_11 = FUNC_8(VAR_10);
   if (VAR_11) {
    FUNC_10(VAR_10, VAR_11);
    if (FUNC_20(VAR_2,
       &VAR_10->cl_state))
     continue;
    if (VAR_10->cl_cons_state ==
       VAR_9)
     FUNC_13(VAR_10, VAR_11);
    goto out_error;
   }
   FUNC_1(VAR_0, &VAR_10->cl_state);
   FUNC_16(VAR_6, &VAR_10->cl_state);
   FUNC_14(VAR_10);
  }

  if (FUNC_18(VAR_0, &VAR_10->cl_state)) {
   VAR_12 = "check lease";
   VAR_11 = FUNC_2(VAR_10);
   if (FUNC_20(VAR_2, &VAR_10->cl_state))
    continue;
   if (VAR_11 < 0 && VAR_11 != -VAR_8)
    goto out_error;
  }


  if (FUNC_18(VAR_7, &VAR_10->cl_state)
     && FUNC_6(VAR_10)) {
   VAR_12 = "reset session";
   VAR_11 = FUNC_9(VAR_10);
   if (FUNC_20(VAR_2, &VAR_10->cl_state))
    continue;
   if (VAR_11 < 0)
    goto out_error;
  }


  if (FUNC_20(VAR_6, &VAR_10->cl_state)) {
   VAR_12 = "reclaim reboot";
   VAR_11 = FUNC_4(VAR_10,
    VAR_10->cl_mvops->reboot_recovery_ops);
   if (FUNC_20(VAR_2, &VAR_10->cl_state) ||
       FUNC_20(VAR_7, &VAR_10->cl_state))
    continue;
   FUNC_11(VAR_10);
   if (FUNC_20(VAR_5, &VAR_10->cl_state))
    continue;
   if (VAR_11 < 0)
    goto out_error;
  }


  if (FUNC_18(VAR_5, &VAR_10->cl_state)) {
   VAR_12 = "reclaim nograce";
   VAR_11 = FUNC_4(VAR_10,
    VAR_10->cl_mvops->nograce_recovery_ops);
   if (FUNC_20(VAR_2, &VAR_10->cl_state) ||
       FUNC_20(VAR_7, &VAR_10->cl_state) ||
       FUNC_20(VAR_6, &VAR_10->cl_state))
    continue;
   if (VAR_11 < 0)
    goto out_error;
  }

  FUNC_5(VAR_10);
  if (FUNC_18(VAR_1, &VAR_10->cl_state)) {
   FUNC_12(VAR_10);
   continue;
  }

  if (FUNC_18(VAR_4, &VAR_10->cl_state)
     && FUNC_6(VAR_10)) {
   VAR_12 = "recall slot";
   VAR_11 = FUNC_7(VAR_10);
   if (VAR_11 < 0)
    goto out_error;
   continue;
  }


  FUNC_3(VAR_10);

  if (VAR_10->cl_state == 0)
   break;
  if (FUNC_19(VAR_3, &VAR_10->cl_state) != 0)
   break;
 } while (FUNC_0(&VAR_10->cl_count) > 1);
 return;
out_error:
 if (FUNC_17(VAR_12))
  VAR_13 = ": ";
 FUNC_15("NFS: state manager%s%s failed on NFSv4 server %s"
   " with error %d\n", VAR_13, VAR_12,
   VAR_10->cl_hostname, -VAR_11);
 FUNC_5(VAR_10);
 FUNC_3(VAR_10);
}
