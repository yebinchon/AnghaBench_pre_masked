
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int rangelow; int rangehigh; int signal; int audmode; int capability; int rxsubchans; int type; int name; } ;
struct rtrack2 {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtrack2*) ;
 int FUNC_1 (int ,char*,int) ;
 struct rtrack2* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6,
    struct v4l2_tuner *VAR_7)
{
 struct rtrack2 *VAR_8 = FUNC_2(VAR_5);

 if (VAR_7->index > 0)
  return -VAR_0;

 FUNC_1(VAR_7->name, "FM", sizeof(VAR_7->name));
 VAR_7->type = VAR_3;
 VAR_7->rangelow = 88 * 16000;
 VAR_7->rangehigh = 108 * 16000;
 VAR_7->rxsubchans = VAR_4;
 VAR_7->capability = VAR_1;
 VAR_7->audmode = VAR_2;
 VAR_7->signal = 0xFFFF * FUNC_0(VAR_8);
 return 0;
}
