
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtest_dev {int dummy; } ;
struct urb {int pipe; int dev; } ;


 int FUNC_0 (struct usbtest_dev*,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int,int *,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct usbtest_dev*,int,struct urb*) ;
 int FUNC_5 (struct usbtest_dev*,int,struct urb*) ;

__attribute__((used)) static int FUNC_6(struct usbtest_dev *VAR_4, int VAR_5, struct urb *VAR_6)
{
 int VAR_7;


 VAR_7 = FUNC_5(VAR_4, VAR_5, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;


 VAR_7 = FUNC_2 (VAR_6->dev, FUNC_3 (VAR_6->dev, 0),
   VAR_3, VAR_2,
   VAR_1, VAR_5,
   ((void*)0), 0, VAR_0);
 if (VAR_7 < 0) {
  FUNC_0(VAR_4, "ep %02x couldn't set halt, %d\n", VAR_5, VAR_7);
  return VAR_7;
 }
 VAR_7 = FUNC_4(VAR_4, VAR_5, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;


 VAR_7 = FUNC_1 (VAR_6->dev, VAR_6->pipe);
 if (VAR_7 < 0) {
  FUNC_0(VAR_4, "ep %02x couldn't clear halt, %d\n", VAR_5, VAR_7);
  return VAR_7;
 }
 VAR_7 = FUNC_5(VAR_4, VAR_5, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;



 return 0;
}
