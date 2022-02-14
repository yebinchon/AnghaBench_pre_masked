
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* zone_t ;
typedef int vm_offset_t ;
typedef scalar_t__ uint32_t ;
struct zcc_magazine {scalar_t__ zcc_magazine_index; scalar_t__ zcc_magazine_capacity; } ;
struct TYPE_7__ {int elem_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 void* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,void*) ;
 int FUNC_6 (struct zcc_magazine*,void*) ;

bool FUNC_7(zone_t VAR_3, struct zcc_magazine *VAR_4)
{
 FUNC_0(VAR_4->zcc_magazine_index == 0);
 void* VAR_5 = ((void*)0);
 uint32_t VAR_6;
 FUNC_2(VAR_3);
 for(VAR_6 = VAR_4->zcc_magazine_index; VAR_6 < VAR_4->zcc_magazine_capacity; VAR_6 ++){
  VAR_5 = FUNC_4(VAR_3);
  if(VAR_5) {
   FUNC_5(VAR_3, VAR_5);
   FUNC_6(VAR_4, VAR_5);



  } else {
   break;
  }
 }
 FUNC_3(VAR_3);
 if (VAR_6 == 0){
  return VAR_1;
 }
 return VAR_2;
}
