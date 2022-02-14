
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uinput_request {int id; int code; } ;
struct uinput_device {scalar_t__ state; int mutex; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct uinput_device*,struct uinput_request*) ;

__attribute__((used)) static int FUNC_4(struct uinput_device *VAR_3, struct uinput_request *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_3(VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(&VAR_3->mutex);
 if (VAR_5)
  return VAR_5;

 if (VAR_3->state != VAR_2) {
  VAR_5 = -VAR_0;
  goto out;
 }


 FUNC_2(VAR_3->dev, VAR_1, VAR_4->code, VAR_4->id);

 out:
 FUNC_1(&VAR_3->mutex);
 return VAR_5;
}
