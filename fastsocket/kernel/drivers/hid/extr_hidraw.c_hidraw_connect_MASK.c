
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hidraw {int minor; int exist; struct hid_device* hid; int list; int wait; int dev; } ;
struct hid_device {struct hidraw* hidraw; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int ,int *,char*,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 struct hidraw** VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct hidraw*) ;
 struct hidraw* FUNC_7 (int,int ) ;
 int VAR_7 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct hid_device *VAR_8)
{
 int VAR_9, VAR_10;
 struct hidraw *VAR_11;



 VAR_11 = FUNC_7(sizeof(struct hidraw), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_10 = -VAR_0;

 FUNC_8(&VAR_7);

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  if (VAR_6[VAR_9])
   continue;
  VAR_6[VAR_9] = VAR_11;
  VAR_10 = 0;
  break;
 }

 if (VAR_10) {
  FUNC_9(&VAR_7);
  FUNC_6(VAR_11);
  goto out;
 }

 VAR_11->dev = FUNC_4(VAR_4, &VAR_8->dev, FUNC_2(VAR_5, VAR_9),
     ((void*)0), "%s%d", "hidraw", VAR_9);

 if (FUNC_1(VAR_11->dev)) {
  VAR_6[VAR_9] = ((void*)0);
  FUNC_9(&VAR_7);
  VAR_10 = FUNC_3(VAR_11->dev);
  FUNC_6(VAR_11);
  goto out;
 }

 FUNC_9(&VAR_7);
 FUNC_5(&VAR_11->wait);
 FUNC_0(&VAR_11->list);

 VAR_11->hid = VAR_8;
 VAR_11->minor = VAR_9;

 VAR_11->exist = 1;
 VAR_8->hidraw = VAR_11;

out:
 return VAR_10;

}
