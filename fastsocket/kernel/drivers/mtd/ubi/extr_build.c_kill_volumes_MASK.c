
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int vtbl_slots; scalar_t__* volumes; } ;


 int FUNC_0 (struct ubi_device*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ubi_device *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->vtbl_slots; VAR_1++)
  if (VAR_0->volumes[VAR_1])
   FUNC_0(VAR_0, VAR_0->volumes[VAR_1]);
}
