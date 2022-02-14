
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* frame; } ;
struct zr364xx_camera {int last_frame; int b_acquire; TYPE_1__ buffer; scalar_t__ cur_frame; } ;
struct TYPE_4__ {scalar_t__ cur_size; int ulState; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct zr364xx_camera *VAR_2)
{
 int VAR_3;

 FUNC_0("start acquire\n");

 VAR_2->last_frame = -1;
 VAR_2->cur_frame = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2->buffer.frame[VAR_3].ulState = VAR_1;
  VAR_2->buffer.frame[VAR_3].cur_size = 0;
 }
 VAR_2->b_acquire = 1;
 return 0;
}
