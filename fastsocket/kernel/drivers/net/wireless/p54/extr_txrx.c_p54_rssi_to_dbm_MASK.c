
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p54_common {int rxhw; TYPE_1__* cur_rssi; } ;
struct TYPE_2__ {int mul; int add; } ;



__attribute__((used)) static int FUNC_0(struct p54_common *VAR_0, int VAR_1)
{
 if (VAR_0->rxhw != 5) {
  return ((VAR_1 * VAR_0->cur_rssi->mul) / 64 +
    VAR_0->cur_rssi->add) / 4;
 } else {



  return VAR_1 / 2 - 110;
 }
}
