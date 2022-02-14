
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipr_ioa_cfg {scalar_t__ sdt_state; TYPE_2__* host; struct ipr_cmnd* reset_cmd; int in_reset_reload; TYPE_1__* pdev; int errors_logged; } ;
struct ipr_cmnd {struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_4__ {int host_lock; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ipr_ioa_cfg*,int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct ipr_cmnd *VAR_5)
{
 unsigned long VAR_6 = 0;
 struct ipr_ioa_cfg *VAR_7 = VAR_5->ioa_cfg;

 VAR_0;
 FUNC_2(VAR_7->host->host_lock, VAR_6);

 VAR_7->errors_logged++;
 FUNC_0(&VAR_7->pdev->dev,
  "Adapter being reset due to command timeout.\n");

 if (VAR_4 == VAR_7->sdt_state)
  VAR_7->sdt_state = VAR_1;

 if (!VAR_7->in_reset_reload || VAR_7->reset_cmd == VAR_5)
  FUNC_1(VAR_7, VAR_2);

 FUNC_3(VAR_7->host->host_lock, VAR_6);
 VAR_3;
}
