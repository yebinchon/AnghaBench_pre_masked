
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct matroxfb_driver {void* (* probe ) (struct matrox_fb_info*) ;int node; } ;
struct TYPE_4__ {TYPE_2__* next; } ;
struct matrox_fb_info {size_t drivers_count; struct matroxfb_driver** drivers; void** drivers_data; TYPE_1__ next_fb; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int VAR_1 ;
 struct matrox_fb_info* FUNC_1 (TYPE_2__*) ;
 TYPE_2__ VAR_2 ;
 void* FUNC_2 (struct matrox_fb_info*) ;

int FUNC_3(struct matroxfb_driver* VAR_3) {
 struct matrox_fb_info* VAR_4;

 FUNC_0(&VAR_3->node, &VAR_1);
 for (VAR_4 = FUNC_1(VAR_2.next);
      VAR_4 != FUNC_1(&VAR_2);
      VAR_4 = FUNC_1(VAR_4->next_fb.next)) {
  void* VAR_5;

  if (VAR_4->drivers_count == VAR_0)
   continue;
  VAR_5 = VAR_3->probe(VAR_4);
  if (VAR_5) {
   VAR_4->drivers_data[VAR_4->drivers_count] = VAR_5;
   VAR_4->drivers[VAR_4->drivers_count++] = VAR_3;
  }
 }
 return 0;
}
