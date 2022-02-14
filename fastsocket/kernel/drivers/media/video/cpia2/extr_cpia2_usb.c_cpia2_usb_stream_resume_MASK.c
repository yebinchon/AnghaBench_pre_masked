
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stream_mode; } ;
struct TYPE_4__ {TYPE_1__ camera_state; } ;
struct camera_data {TYPE_2__ params; scalar_t__ first_image_seen; scalar_t__ streaming; } ;


 int FUNC_0 (struct camera_data*,int ) ;
 int FUNC_1 (struct camera_data*) ;

int FUNC_2(struct camera_data *VAR_0)
{
 int VAR_1 = 0;
 if(VAR_0->streaming) {
  VAR_0->first_image_seen = 0;
  VAR_1 = FUNC_0(VAR_0, VAR_0->params.camera_state.stream_mode);
  if(VAR_1 == 0) {
   VAR_1 = FUNC_1(VAR_0);
  }
 }
 return VAR_1;
}
