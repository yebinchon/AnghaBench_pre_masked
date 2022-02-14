
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_map {int scd_index; } ;
struct idt77252_dev {int scd_size; unsigned long scd_base; struct vc_map** scd2vc; } ;


 int VAR_0 ;

__attribute__((used)) static unsigned long
FUNC_0(struct idt77252_dev *VAR_1, struct vc_map *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->scd_size; VAR_3++) {
  if (!VAR_1->scd2vc[VAR_3]) {
   VAR_1->scd2vc[VAR_3] = VAR_2;
   VAR_2->scd_index = VAR_3;
   return VAR_1->scd_base + VAR_3 * VAR_0;
  }
 }
 return 0;
}
