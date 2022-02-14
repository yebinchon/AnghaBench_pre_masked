
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_priv {int status; } ;
struct iwl_host_cmd {int flags; TYPE_1__* resp_pkt; int id; } ;
typedef scalar_t__ __le32 ;
struct TYPE_2__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iwl_priv*,char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct iwl_priv*,struct iwl_host_cmd*) ;
 int FUNC_2 (struct iwl_host_cmd*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct iwl_priv *VAR_8)
{
 int VAR_9;
 struct iwl_host_cmd VAR_10 = {
  .id = VAR_4,
  .flags = VAR_1 | VAR_2,
 };
 __le32 *VAR_11;




 if (!FUNC_4(VAR_6, &VAR_8->status) ||
     !FUNC_4(VAR_7, &VAR_8->status) ||
     FUNC_4(VAR_5, &VAR_8->status))
  return -VAR_3;

 VAR_9 = FUNC_1(VAR_8, &VAR_10);
 if (VAR_9)
  return VAR_9;

 VAR_11 = (void *)VAR_10.resp_pkt->data;
 if (*VAR_11 != VAR_0) {






  FUNC_0(VAR_8, "SCAN_ABORT ret %d.\n",
          FUNC_3(*VAR_11));
  VAR_9 = -VAR_3;
 }

 FUNC_2(&VAR_10);
 return VAR_9;
}
