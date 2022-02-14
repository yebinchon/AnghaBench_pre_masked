
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int*) ;
 int* VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_9)
{
 int VAR_10;


 VAR_7 = (unsigned short *) FUNC_1(FUNC_0(2), 512);
 if (!VAR_7) {
  VAR_10 = -VAR_0;
  goto failremap;
 }

 VAR_8 = 0xffff;
 *VAR_7 = VAR_8;

 VAR_10 = FUNC_3(&VAR_9->dev, &VAR_6);
 if (VAR_10 < 0)
  goto failwlan;

 VAR_10 = FUNC_3(&VAR_9->dev, &VAR_5);
 if (VAR_10 < 0)
  goto failwan;

 VAR_10 = FUNC_3(&VAR_9->dev, &VAR_2);
 if (VAR_10 < 0)
  goto failsata;

 VAR_10 = FUNC_3(&VAR_9->dev, &VAR_4);
 if (VAR_10 < 0)
  goto failusb;

 VAR_10 = FUNC_3(&VAR_9->dev, &VAR_3);
 if (VAR_10 < 0)
  goto failsync;

 VAR_10 = FUNC_3(&VAR_9->dev, &VAR_1);
 if (VAR_10 < 0)
  goto failring;

 return VAR_10;

 failring:
 FUNC_4(&VAR_3);
 failsync:
 FUNC_4(&VAR_4);
 failusb:
 FUNC_4(&VAR_2);
 failsata:
 FUNC_4(&VAR_5);
 failwan:
 FUNC_4(&VAR_6);
 failwlan:
 FUNC_2(VAR_7);
 failremap:

 return VAR_10;
}
