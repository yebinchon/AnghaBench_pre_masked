
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int capability; int signal; int rxsubchans; int audmode; int rangehigh; int rangelow; int type; int name; } ;
struct gemtek {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct gemtek*) ;
 int FUNC_1 (int ,char*,int) ;
 struct gemtek* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_10, void *VAR_11, struct v4l2_tuner *VAR_12)
{
 struct gemtek *VAR_13 = FUNC_2(VAR_10);

 if (VAR_12->index > 0)
  return -VAR_0;

 FUNC_1(VAR_12->name, "FM", sizeof(VAR_12->name));
 VAR_12->type = VAR_7;
 VAR_12->rangelow = VAR_2;
 VAR_12->rangehigh = VAR_1;
 VAR_12->capability = VAR_3 | VAR_4;
 VAR_12->signal = 0xffff * FUNC_0(VAR_13);
 if (VAR_12->signal) {
  VAR_12->audmode = VAR_6;
  VAR_12->rxsubchans = VAR_9;
 } else {
  VAR_12->audmode = VAR_5;
  VAR_12->rxsubchans = VAR_8;
 }
 return 0;
}
