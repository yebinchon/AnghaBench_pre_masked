
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_device {int dummy; } ;
struct typhoon {int curfreq; int curvol; int io; int mutefreq; scalar_t__ muted; struct v4l2_device v4l2_dev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_device*,char*,...) ;
 struct typhoon* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2)
{
 struct typhoon *VAR_3 = FUNC_1(VAR_1);
 struct v4l2_device *VAR_4 = &VAR_3->v4l2_dev;

 FUNC_0(VAR_4, VAR_0);



 FUNC_0(VAR_4, "Load type: Driver compiled into kernel\n\n");

 FUNC_0(VAR_4, "frequency = %lu kHz\n", VAR_3->curfreq >> 4);
 FUNC_0(VAR_4, "volume = %d\n", VAR_3->curvol);
 FUNC_0(VAR_4, "mute = %s\n", VAR_3->muted ? "on" : "off");
 FUNC_0(VAR_4, "io = 0x%x\n", VAR_3->io);
 FUNC_0(VAR_4, "mute frequency = %lu kHz\n", VAR_3->mutefreq >> 4);
 return 0;
}
