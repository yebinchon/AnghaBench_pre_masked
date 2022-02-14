
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int free_rows; int used_rows; } ;
struct uwb_rsv_alloc_info {int max_mas; int min_mas; int interval; TYPE_1__ ri; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uwb_rsv_alloc_info*) ;

__attribute__((used)) static int FUNC_1(struct uwb_rsv_alloc_info *VAR_3)
{
 int VAR_4;
 int VAR_5 = VAR_3->max_mas / VAR_2;
 int VAR_6 = VAR_3->min_mas / VAR_2;
 if (VAR_3->min_mas % VAR_2)
  VAR_6++;
 for (VAR_4 = VAR_5; VAR_4 >= VAR_6; VAR_4--) {
  if (VAR_4 <= VAR_3->ri.free_rows) {
   VAR_3->ri.used_rows = VAR_4;
   VAR_3->interval = 1;
   FUNC_0(VAR_3);
   return VAR_0;
  }
 }
 return VAR_1;
}
