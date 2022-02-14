
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct maven_data {struct matrox_fb_info* primary_head; } ;
struct TYPE_4__ {int lock; } ;
struct matrox_fb_info {TYPE_2__ altout; TYPE_1__* outputs; } ;
struct i2c_client {int dummy; } ;
struct TYPE_3__ {int mode; int * data; int * output; int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct maven_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct i2c_client* VAR_2) {
 struct maven_data* VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->primary_head) {
  struct matrox_fb_info *VAR_4 = VAR_3->primary_head;

  FUNC_0(&VAR_4->altout.lock);
  VAR_4->outputs[1].src = VAR_1;
  VAR_4->outputs[1].output = ((void*)0);
  VAR_4->outputs[1].data = ((void*)0);
  VAR_4->outputs[1].mode = VAR_0;
  FUNC_2(&VAR_4->altout.lock);
  VAR_3->primary_head = ((void*)0);
 }
 return 0;
}
