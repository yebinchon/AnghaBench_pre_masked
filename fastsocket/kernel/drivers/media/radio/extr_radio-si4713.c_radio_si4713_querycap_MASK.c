
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_capability {int capabilities; int card; int driver; } ;
struct radio_si4713_device {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct file*) ;
 struct radio_si4713_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
     struct v4l2_capability *VAR_4)
{
 struct radio_si4713_device *VAR_5;

 VAR_5 = FUNC_2(FUNC_1(VAR_2));

 FUNC_0(VAR_4->driver, "radio-si4713", sizeof(VAR_4->driver));
 FUNC_0(VAR_4->card, "Silicon Labs Si4713 Modulator",
    sizeof(VAR_4->card));
 VAR_4->capabilities = VAR_0 | VAR_1;

 return 0;
}
