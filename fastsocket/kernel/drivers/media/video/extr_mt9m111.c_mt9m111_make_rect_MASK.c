
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {void* height; int top; void* width; int left; } ;
struct mt9m111 {TYPE_1__* fmt; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {scalar_t__ code; } ;


 void* FUNC_0 (void*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct i2c_client*,struct v4l2_rect*) ;
 int FUNC_2 (int *,void**,int ,int,int ) ;
 struct mt9m111* FUNC_3 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_6,
        struct v4l2_rect *VAR_7)
{
 struct mt9m111 *VAR_8 = FUNC_3(VAR_6);

 if (VAR_8->fmt->code == VAR_5 ||
     VAR_8->fmt->code == VAR_4) {

  VAR_7->width = FUNC_0(VAR_7->width, 2);
  VAR_7->height = FUNC_0(VAR_7->height, 2);

 }


 FUNC_2(&VAR_7->left, &VAR_7->width,
       VAR_2, 2, VAR_1);

 FUNC_2(&VAR_7->top, &VAR_7->height,
       VAR_3, 2, VAR_0);

 return FUNC_1(VAR_6, VAR_7);
}
