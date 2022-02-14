
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ext_controls {size_t count; scalar_t__ ctrl_class; size_t error_idx; TYPE_1__* controls; scalar_t__* reserved; } ;
typedef size_t __u32 ;
struct TYPE_2__ {int id; scalar_t__* reserved2; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct v4l2_ext_controls *VAR_1, int VAR_2)
{
 __u32 VAR_3;


 VAR_1->reserved[0] = VAR_1->reserved[1] = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1->count; VAR_3++)
  VAR_1->controls[VAR_3].reserved2[0] = 0;






 if (!VAR_2 && VAR_1->ctrl_class == VAR_0)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->count; VAR_3++) {
  if (FUNC_0(VAR_1->controls[VAR_3].id) != VAR_1->ctrl_class) {
   VAR_1->error_idx = VAR_3;
   return 0;
  }
 }
 return 1;
}
