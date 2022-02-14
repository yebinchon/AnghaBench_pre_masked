
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_device {int vtbl_slots; TYPE_1__** volumes; } ;
struct TYPE_2__ {struct TYPE_2__* eba_tbl; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct ubi_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = VAR_1->vtbl_slots;
      VAR_2 < VAR_1->vtbl_slots + VAR_0; VAR_2++) {
  FUNC_0(VAR_1->volumes[VAR_2]->eba_tbl);
  FUNC_0(VAR_1->volumes[VAR_2]);
 }
}
