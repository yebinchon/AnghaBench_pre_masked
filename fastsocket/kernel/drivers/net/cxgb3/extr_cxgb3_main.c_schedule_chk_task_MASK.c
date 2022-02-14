
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int linkpoll_period; int stats_update_period; } ;
struct adapter {int adap_check_task; TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = VAR_2->params.linkpoll_period ?
     (VAR_0 * VAR_2->params.linkpoll_period) / 10 :
     VAR_2->params.stats_update_period * VAR_0;
 if (VAR_3)
  FUNC_0(VAR_1, &VAR_2->adap_check_task, VAR_3);
}
