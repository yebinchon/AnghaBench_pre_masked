
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_placement {scalar_t__ lpfn; scalar_t__ fpfn; int * placement; } ;
struct TYPE_2__ {scalar_t__ mem_type; int placement; } ;
struct ttm_buffer_object {scalar_t__ num_pages; int * ttm; TYPE_1__ mem; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ttm_buffer_object*,int) ;
 int FUNC_2 (struct ttm_buffer_object*) ;
 int FUNC_3 (struct ttm_placement*,TYPE_1__*) ;
 int FUNC_4 (struct ttm_buffer_object*,struct ttm_placement*,int,int) ;
 int FUNC_5 (int *,int ,int ) ;

int FUNC_6(struct ttm_buffer_object *VAR_3,
   struct ttm_placement *VAR_4,
   bool VAR_5,
   bool VAR_6)
{
 int VAR_7;

 FUNC_0(!FUNC_2(VAR_3));

 if (VAR_4->lpfn || VAR_4->fpfn)
  if (VAR_4->fpfn > VAR_4->lpfn ||
   (VAR_4->lpfn - VAR_4->fpfn) < VAR_3->num_pages)
   return -VAR_0;



 VAR_7 = FUNC_3(VAR_4, &VAR_3->mem);
 if (VAR_7 < 0) {
  VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_5,
      VAR_6);
  if (VAR_7)
   return VAR_7;
 } else {




  FUNC_5(&VAR_3->mem.placement, VAR_4->placement[VAR_7],
    ~VAR_1);
 }



 if (VAR_3->mem.mem_type == VAR_2 && VAR_3->ttm == ((void*)0)) {
  VAR_7 = FUNC_1(VAR_3, 1);
  if (VAR_7)
   return VAR_7;
 }
 return 0;
}
