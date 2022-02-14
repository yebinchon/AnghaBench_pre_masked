
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct aic7770_identity {int full_id; int id_mask; } ;


 int VAR_0 ;
 struct aic7770_identity* VAR_1 ;

struct aic7770_identity *
FUNC_0(uint32_t VAR_2)
{
 struct aic7770_identity *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = &VAR_1[VAR_4];
  if (VAR_3->full_id == (VAR_2 & VAR_3->id_mask))
   return (VAR_3);
 }
 return (((void*)0));
}
