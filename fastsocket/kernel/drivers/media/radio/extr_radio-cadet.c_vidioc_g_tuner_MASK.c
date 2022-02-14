
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int index; int capability; int rangelow; int rangehigh; int rxsubchans; int signal; void* audmode; int name; int type; } ;
struct file {int dummy; } ;
struct cadet {int sigstrength; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;

 int FUNC_0 (struct cadet*) ;
 int FUNC_1 (int ,char*,int) ;
 struct cadet* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_8, void *VAR_9,
    struct v4l2_tuner *VAR_10)
{
 struct cadet *VAR_11 = FUNC_2(VAR_8);

 VAR_10->type = VAR_6;
 switch (VAR_10->index) {
 case 0:
  FUNC_1(VAR_10->name, "FM", sizeof(VAR_10->name));
  VAR_10->capability = VAR_3 | VAR_2;
  VAR_10->rangelow = 1400;
  VAR_10->rangehigh = 1728;
  VAR_10->rxsubchans = FUNC_0(VAR_11);
  switch (VAR_10->rxsubchans) {
  case 129:
   VAR_10->audmode = VAR_4;
   break;
  case 128:
   VAR_10->audmode = VAR_5;
   break;
  default:
   break;
  }
  VAR_10->rxsubchans |= VAR_7;
  break;
 case 1:
  FUNC_1(VAR_10->name, "AM", sizeof(VAR_10->name));
  VAR_10->capability = VAR_1;
  VAR_10->rangelow = 8320;
  VAR_10->rangehigh = 26400;
  VAR_10->rxsubchans = 129;
  VAR_10->audmode = VAR_4;
  break;
 default:
  return -VAR_0;
 }
 VAR_10->signal = VAR_11->sigstrength;
 return 0;
}
