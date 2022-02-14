
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ucode_trace; } ;
struct iwl_priv {int ucode_trace; TYPE_1__ event_log; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_priv*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_3)
{
 struct iwl_priv *VAR_4 = (struct iwl_priv *)VAR_3;

 if (FUNC_3(VAR_0, &VAR_4->status))
  return;

 if (VAR_4->event_log.ucode_trace) {
  FUNC_0(VAR_4);

  FUNC_1(&VAR_4->ucode_trace,
    VAR_2 + FUNC_2(VAR_1));
 }
}
