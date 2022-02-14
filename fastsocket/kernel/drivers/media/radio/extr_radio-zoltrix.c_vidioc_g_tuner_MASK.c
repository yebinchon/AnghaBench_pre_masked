
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zoltrix {int dummy; } ;
struct v4l2_tuner {scalar_t__ index; int rangelow; int rangehigh; int rxsubchans; int signal; int audmode; int capability; int type; int name; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 struct zoltrix* FUNC_1 (struct file*) ;
 int FUNC_2 (struct zoltrix*) ;
 scalar_t__ FUNC_3 (struct zoltrix*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_7, void *VAR_8,
     struct v4l2_tuner *VAR_9)
{
 struct zoltrix *VAR_10 = FUNC_1(VAR_7);

 if (VAR_9->index > 0)
  return -VAR_0;

 FUNC_0(VAR_9->name, "FM", sizeof(VAR_9->name));
 VAR_9->type = VAR_4;
 VAR_9->rangelow = 88 * 16000;
 VAR_9->rangehigh = 108 * 16000;
 VAR_9->rxsubchans = VAR_5 | VAR_6;
 VAR_9->capability = VAR_1;
 if (FUNC_3(VAR_10))
  VAR_9->audmode = VAR_3;
 else
  VAR_9->audmode = VAR_2;
 VAR_9->signal = 0xFFFF * FUNC_2(VAR_10);
 return 0;
}
