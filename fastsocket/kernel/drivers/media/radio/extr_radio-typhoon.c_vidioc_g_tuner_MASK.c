
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; double rangelow; int rangehigh; int signal; int audmode; int capability; int rxsubchans; int type; int name; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_5, void *VAR_6,
     struct v4l2_tuner *VAR_7)
{
 if (VAR_7->index > 0)
  return -VAR_0;

 FUNC_0(VAR_7->name, "FM", sizeof(VAR_7->name));
 VAR_7->type = VAR_3;
 VAR_7->rangelow = 87.5 * 16000;
 VAR_7->rangehigh = 108 * 16000;
 VAR_7->rxsubchans = VAR_4;
 VAR_7->capability = VAR_1;
 VAR_7->audmode = VAR_2;
 VAR_7->signal = 0xFFFF;
 return 0;
}
