
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int signal; int audmode; int capability; int rxsubchans; int rangehigh; int rangelow; int type; int name; } ;
struct gemtek_pci {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct gemtek_pci*) ;
 int FUNC_1 (int ,char*,int) ;
 struct gemtek_pci* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_7, void *VAR_8,
     struct v4l2_tuner *VAR_9)
{
 struct gemtek_pci *VAR_10 = FUNC_2(VAR_7);

 if (VAR_9->index > 0)
  return -VAR_0;

 FUNC_1(VAR_9->name, "FM", sizeof(VAR_9->name));
 VAR_9->type = VAR_5;
 VAR_9->rangelow = VAR_2;
 VAR_9->rangehigh = VAR_1;
 VAR_9->rxsubchans = VAR_6;
 VAR_9->capability = VAR_3;
 VAR_9->audmode = VAR_4;
 VAR_9->signal = 0xffff * FUNC_0(VAR_10);
 return 0;
}
