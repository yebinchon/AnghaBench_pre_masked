
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zone_t ;
typedef int vm_offset_t ;
typedef size_t uint32_t ;
struct zcc_magazine {size_t zcc_magazine_index; size_t zcc_magazine_capacity; scalar_t__* zcc_elements; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(zone_t VAR_0, struct zcc_magazine *VAR_1)
{
 FUNC_0(VAR_1->zcc_magazine_index == VAR_1->zcc_magazine_capacity);
 FUNC_1(VAR_0);
 while(VAR_1->zcc_magazine_index > 0){
  uint32_t VAR_2 = --VAR_1->zcc_magazine_index;
  FUNC_3(VAR_0, VAR_1->zcc_elements[VAR_2]);
  FUNC_4(VAR_0,(vm_offset_t)VAR_1->zcc_elements[VAR_2]);
  VAR_1->zcc_elements[VAR_1->zcc_magazine_index] = 0;
 }
 FUNC_2(VAR_0);
}
