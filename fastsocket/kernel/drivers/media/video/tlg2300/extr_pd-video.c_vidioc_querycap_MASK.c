
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct poseidon {int udev; } ;
struct front_face {struct poseidon* pd; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct front_face*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_6, void *VAR_7,
   struct v4l2_capability *VAR_8)
{
 struct front_face *VAR_9 = VAR_7;
 struct poseidon *VAR_10 = VAR_9->pd;

 FUNC_1(VAR_9);

 FUNC_2(VAR_8->driver, "tele-video");
 FUNC_2(VAR_8->card, "Telegent Poseidon");
 FUNC_3(VAR_10->udev, VAR_8->bus_info, sizeof(VAR_8->bus_info));
 VAR_8->version = FUNC_0(0, 0, 1);
 VAR_8->capabilities = VAR_5 | VAR_3 |
    VAR_0 | VAR_2 |
    VAR_1 | VAR_4;
 return 0;
}
