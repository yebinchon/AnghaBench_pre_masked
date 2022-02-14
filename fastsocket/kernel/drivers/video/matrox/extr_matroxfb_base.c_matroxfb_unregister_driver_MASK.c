
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct matroxfb_driver {int (* remove ) (struct matrox_fb_info*,int ) ;int node; } ;
struct TYPE_4__ {TYPE_2__* next; } ;
struct matrox_fb_info {int drivers_count; int * drivers_data; struct matroxfb_driver** drivers; TYPE_1__ next_fb; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;


 int FUNC_0 (int *) ;
 struct matrox_fb_info* FUNC_1 (TYPE_2__*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (struct matrox_fb_info*,int ) ;

void FUNC_3(struct matroxfb_driver* VAR_1) {
 struct matrox_fb_info* VAR_2;

 FUNC_0(&VAR_1->node);
 for (VAR_2 = FUNC_1(VAR_0.next);
      VAR_2 != FUNC_1(&VAR_0);
      VAR_2 = FUNC_1(VAR_2->next_fb.next)) {
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_2->drivers_count; ) {
   if (VAR_2->drivers[VAR_3] == VAR_1) {
    if (VAR_1 && VAR_1->remove)
     VAR_1->remove(VAR_2, VAR_2->drivers_data[VAR_3]);
    VAR_2->drivers[VAR_3] = VAR_2->drivers[--VAR_2->drivers_count];
    VAR_2->drivers_data[VAR_3] = VAR_2->drivers_data[VAR_2->drivers_count];
   } else
    VAR_3++;
  }
 }
}
