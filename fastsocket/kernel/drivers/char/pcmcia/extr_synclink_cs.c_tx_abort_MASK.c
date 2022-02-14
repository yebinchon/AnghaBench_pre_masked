
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mode; } ;
struct TYPE_5__ {int tx_aborting; int lock; scalar_t__ tx_get; scalar_t__ tx_put; scalar_t__ tx_count; TYPE_1__ params; scalar_t__ tx_active; int device_name; } ;
typedef TYPE_2__ MGSLPC_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(MGSLPC_INFO * VAR_3)
{
  unsigned long VAR_4;

 if (VAR_2 >= VAR_0)
  FUNC_0("tx_abort(%s)\n", VAR_3->device_name);

 FUNC_1(&VAR_3->lock,VAR_4);
 if (VAR_3->tx_active && VAR_3->tx_count &&
     VAR_3->params.mode == VAR_1) {



  VAR_3->tx_count = VAR_3->tx_put = VAR_3->tx_get = 0;
  VAR_3->tx_aborting = 1;
 }
 FUNC_2(&VAR_3->lock,VAR_4);
 return 0;
}
