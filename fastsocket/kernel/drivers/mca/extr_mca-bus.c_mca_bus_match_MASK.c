
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mca_driver {unsigned short* id_table; unsigned short const integrated_id; } ;
struct mca_device {unsigned short const pos_id; int index; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 struct mca_device* FUNC_0 (struct device*) ;
 struct mca_driver* FUNC_1 (struct device_driver*) ;

__attribute__((used)) static int FUNC_2 (struct device *VAR_0, struct device_driver *VAR_1)
{
 struct mca_device *VAR_2 = FUNC_0 (VAR_0);
 struct mca_driver *VAR_3 = FUNC_1 (VAR_1);
 const unsigned short *VAR_4 = VAR_3->id_table;
 int VAR_5 = 0;

 if (VAR_4) {
  for(VAR_5 = 0; VAR_4[VAR_5]; VAR_5++) {
   if (VAR_4[VAR_5] == VAR_2->pos_id) {
    VAR_2->index = VAR_5;
    return 1;
   }
  }
 }



 if (VAR_3->integrated_id && VAR_2->pos_id ==
     VAR_3->integrated_id) {
  VAR_2->index = VAR_5;
  return 1;
 }
 return 0;
}
