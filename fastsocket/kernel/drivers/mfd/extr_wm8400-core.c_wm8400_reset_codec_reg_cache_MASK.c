
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8400 {int io_lock; int * reg_cache; } ;
struct TYPE_2__ {int default_val; scalar_t__ is_codec; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_0 ;

void FUNC_3(struct wm8400 *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_1->io_lock);


 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->reg_cache); VAR_2++)
  if (VAR_0[VAR_2].is_codec)
   VAR_1->reg_cache[VAR_2] = VAR_0[VAR_2].default_val;

 FUNC_2(&VAR_1->io_lock);
}
