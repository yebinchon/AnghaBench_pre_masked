
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* viocd_disk; } ;
struct TYPE_3__ {int queue; } ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(int VAR_2)
{
 int VAR_3;

 for (VAR_3 = VAR_2 + 1; VAR_3 < VAR_1; VAR_3++)
  if (VAR_0[VAR_3].viocd_disk)
   FUNC_0(VAR_0[VAR_3].viocd_disk->queue);
 for (VAR_3 = 0; VAR_3 <= VAR_2; VAR_3++)
  if (VAR_0[VAR_3].viocd_disk)
   FUNC_0(VAR_0[VAR_3].viocd_disk->queue);
}
