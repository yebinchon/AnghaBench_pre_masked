
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipr_ioa_cfg {TYPE_1__* host; struct ipr_cmnd* reset_cmd; } ;
struct ipr_cmnd {int (* done ) (struct ipr_cmnd*) ;int queue; struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_2__ {int host_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (struct ipr_cmnd*) ;

__attribute__((used)) static void FUNC_4(struct ipr_cmnd *VAR_0)
{
 struct ipr_ioa_cfg *VAR_1 = VAR_0->ioa_cfg;
 unsigned long VAR_2 = 0;

 FUNC_1(VAR_1->host->host_lock, VAR_2);

 if (VAR_1->reset_cmd == VAR_0) {
  FUNC_0(&VAR_0->queue);
  VAR_0->done(VAR_0);
 }

 FUNC_2(VAR_1->host->host_lock, VAR_2);
}
