
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm831x {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct wm831x*) ;
 int FUNC_5 (struct wm831x*,int ) ;
 int FUNC_6 (struct wm831x*) ;
 int FUNC_7 (struct wm831x*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct wm831x *VAR_7)
{
 int VAR_8;
 u16 VAR_9;

 FUNC_2(&VAR_6);

 if (VAR_4) {
  FUNC_1(VAR_4, VAR_5);
  VAR_5 = !VAR_5;
  VAR_8 = 0;
  goto out;
 }


 VAR_9 = FUNC_5(VAR_7, VAR_1);

 if (!(VAR_9 & VAR_3)) {
  FUNC_0(VAR_7->dev, "Hardware watchdog update unsupported\n");
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_9 |= VAR_2;

 VAR_8 = FUNC_6(VAR_7);
 if (VAR_8 == 0) {
  VAR_8 = FUNC_7(VAR_7, VAR_1, VAR_9);
  FUNC_4(VAR_7);
 } else {
  FUNC_0(VAR_7->dev, "Failed to unlock security key: %d\n",
   VAR_8);
 }

out:
 FUNC_3(&VAR_6);

 return VAR_8;
}
