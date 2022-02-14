
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dcb_table {int entries; TYPE_1__* entry; } ;
struct nvbios {int dev; struct dcb_table dcb; } ;
struct TYPE_2__ {int connector; int i2c_index; } ;


 int FUNC_0 (int ,int,int,int) ;
 int* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct nvbios *VAR_0)
{
 struct dcb_table *VAR_1 = &VAR_0->dcb;
 u8 VAR_2[16] = { };
 int VAR_3, VAR_4 = 0;






 if (!FUNC_0(VAR_0->dev, 0x0392, 0x107d, 0x20a2)) {
  for (VAR_3 = 0; VAR_3 < VAR_1->entries; VAR_3++) {
   if (VAR_1->entry[VAR_3].connector)
    return;
  }
 }







 for (VAR_3 = 0; VAR_3 < VAR_1->entries; VAR_3++) {
  u8 VAR_5 = VAR_1->entry[VAR_3].i2c_index;
  if (VAR_5 == 0x0f) {
   VAR_1->entry[VAR_3].connector = VAR_4++;
  } else {
   if (!VAR_2[VAR_5])
    VAR_2[VAR_5] = ++VAR_4;
   VAR_1->entry[VAR_3].connector = VAR_2[VAR_5] - 1;
  }
 }




 if (VAR_3 > 1) {
  u8 *VAR_6 = FUNC_1(VAR_0->dev);
  if (VAR_6)
   VAR_6[0] = 0x00;
 }
}
