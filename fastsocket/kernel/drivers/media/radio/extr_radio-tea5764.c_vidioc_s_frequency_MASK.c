
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ tuner; int frequency; } ;
struct tea5764_device {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tea5764_device*) ;
 int FUNC_1 (struct tea5764_device*) ;
 int FUNC_2 (struct tea5764_device*,int) ;
 struct tea5764_device* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_4, void *VAR_5,
    struct v4l2_frequency *VAR_6)
{
 struct tea5764_device *VAR_7 = FUNC_3(VAR_4);

 if (VAR_6->tuner != 0)
  return -VAR_0;
 if (VAR_6->frequency == 0) {

  FUNC_0(VAR_7);
 }
 if (VAR_6->frequency < (VAR_2 * VAR_3))
  return -VAR_0;
 if (VAR_6->frequency > (VAR_1 * VAR_3))
  return -VAR_0;
 FUNC_1(VAR_7);
 FUNC_2(VAR_7, (VAR_6->frequency * 125) / 2);
 return 0;
}
