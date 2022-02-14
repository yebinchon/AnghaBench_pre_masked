
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct htc_target {int hif_dev; TYPE_1__* hif; } ;
struct TYPE_2__ {int (* stop ) (int ) ;} ;


 int FUNC_0 (int ) ;

void FUNC_1(struct htc_target *VAR_0)
{
 VAR_0->hif->stop(VAR_0->hif_dev);
}
