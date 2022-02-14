
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int capabilities; int version; int bus_info; int card; int driver; } ;
struct poseidon {int udev; } ;
struct file {struct poseidon* private_data; } ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
   struct v4l2_capability *VAR_4)
{
 struct poseidon *VAR_5 = VAR_2->private_data;

 FUNC_1(VAR_4->driver, "tele-radio", sizeof(VAR_4->driver));
 FUNC_1(VAR_4->card, "Telegent Poseidon", sizeof(VAR_4->card));
 FUNC_2(VAR_5->udev, VAR_4->bus_info, sizeof(VAR_4->bus_info));
 VAR_4->version = FUNC_0(0, 0, 1);
 VAR_4->capabilities = VAR_1 | VAR_0;
 return 0;
}
