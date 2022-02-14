
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct matroxfb_driver {int (* remove ) (struct matrox_fb_info*,int ) ;} ;
struct matrox_fb_info {int drivers_count; int * drivers_data; struct matroxfb_driver** drivers; int next_fb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct matrox_fb_info*,int ) ;

__attribute__((used)) static void FUNC_2(struct matrox_fb_info* VAR_0) {
 int VAR_1;

 FUNC_0(&VAR_0->next_fb);
 for (VAR_1 = 0; VAR_1 < VAR_0->drivers_count; VAR_1++) {
  struct matroxfb_driver* VAR_2 = VAR_0->drivers[VAR_1];

  if (VAR_2 && VAR_2->remove)
   VAR_2->remove(VAR_0, VAR_0->drivers_data[VAR_1]);
 }
}
