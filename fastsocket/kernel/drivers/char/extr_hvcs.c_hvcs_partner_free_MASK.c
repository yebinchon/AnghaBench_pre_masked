
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hvcs_struct {scalar_t__ connected; TYPE_1__* vdev; } ;
struct TYPE_2__ {int unit_address; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct hvcs_struct *VAR_1)
{
 int VAR_2;
 do {
  VAR_2 = FUNC_0(VAR_1->vdev->unit_address);
 } while (VAR_2 == -VAR_0);
 VAR_1->connected = 0;
}
