
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipr_ioa_cfg {scalar_t__ sdt_state; TYPE_2__* host; int reset_retries; struct ipr_cmnd* reset_cmd; int in_reset_reload; TYPE_1__* pdev; int errors_logged; } ;
struct ipr_cmnd {struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_4__ {int host_lock; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct ipr_ioa_cfg*,int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct ipr_cmnd *VAR_7)
{
 unsigned long VAR_8 = 0;
 struct ipr_ioa_cfg *VAR_9 = VAR_7->ioa_cfg;

 VAR_0;
 FUNC_2(VAR_9->host->host_lock, VAR_8);

 VAR_9->errors_logged++;
 FUNC_0(&VAR_9->pdev->dev,
  "Adapter timed out transitioning to operational.\n");

 if (VAR_5 == VAR_9->sdt_state)
  VAR_9->sdt_state = VAR_1;

 if (!VAR_9->in_reset_reload || VAR_9->reset_cmd == VAR_7) {
  if (VAR_6)
   VAR_9->reset_retries += VAR_2;
  FUNC_1(VAR_9, VAR_3);
 }

 FUNC_3(VAR_9->host->host_lock, VAR_8);
 VAR_4;
}
