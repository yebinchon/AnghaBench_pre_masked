
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_device {int vtbl_slots; TYPE_1__** volumes; } ;
struct TYPE_2__ {struct TYPE_2__* eba_tbl; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct ubi_device *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->vtbl_slots; VAR_1++)
  if (VAR_0->volumes[VAR_1]) {
   FUNC_0(VAR_0->volumes[VAR_1]->eba_tbl);
   FUNC_0(VAR_0->volumes[VAR_1]);
  }
}
