
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iop_adma_chan {scalar_t__ pending; TYPE_2__* device; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ common; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (struct iop_adma_chan*) ;

__attribute__((used)) static void FUNC_2(struct iop_adma_chan *VAR_1)
{
 FUNC_0(VAR_1->device->common.dev, "pending: %d\n",
  VAR_1->pending);

 if (VAR_1->pending >= VAR_0) {
  VAR_1->pending = 0;
  FUNC_1(VAR_1);
 }
}
