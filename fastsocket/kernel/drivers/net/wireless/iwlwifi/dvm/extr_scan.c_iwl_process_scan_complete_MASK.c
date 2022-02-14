
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_priv {scalar_t__ scan_type; TYPE_2__* scan_request; int scan_vif; int status; int scan_check; int mutex; } ;
struct TYPE_4__ {TYPE_1__** channels; } ;
struct TYPE_3__ {int band; } ;


 int FUNC_0 (struct iwl_priv*,char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iwl_priv*,int) ;
 int FUNC_3 (struct iwl_priv*) ;
 int FUNC_4 (struct iwl_priv*,int ,scalar_t__,int ) ;
 int FUNC_5 (struct iwl_priv*) ;
 int FUNC_6 (struct iwl_priv*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct iwl_priv *VAR_5)
{
 bool VAR_6;

 FUNC_7(&VAR_5->mutex);

 if (!FUNC_8(VAR_4, &VAR_5->status))
  return;

 FUNC_0(VAR_5, "Completed scan.\n");

 FUNC_1(&VAR_5->scan_check);

 VAR_6 = FUNC_8(VAR_3, &VAR_5->status);
 if (VAR_6)
  FUNC_0(VAR_5, "Aborted scan completed.\n");

 if (!FUNC_8(VAR_2, &VAR_5->status)) {
  FUNC_0(VAR_5, "Scan already completed.\n");
  goto out_settings;
 }

 if (VAR_5->scan_type == VAR_1)
  FUNC_5(VAR_5);

 if (VAR_5->scan_type != VAR_0 && !VAR_6) {
  int VAR_7;


  if (VAR_5->scan_request == ((void*)0))
   goto out_complete;


  VAR_7 = FUNC_4(VAR_5, VAR_5->scan_vif, VAR_0,
     VAR_5->scan_request->channels[0]->band);
  if (VAR_7) {
   FUNC_0(VAR_5,
    "failed to initiate pending scan: %d\n", VAR_7);
   VAR_6 = 1;
   goto out_complete;
  }

  return;
 }

out_complete:
 FUNC_2(VAR_5, VAR_6);

out_settings:

 if (!FUNC_3(VAR_5))
  return;

 FUNC_6(VAR_5);
}
