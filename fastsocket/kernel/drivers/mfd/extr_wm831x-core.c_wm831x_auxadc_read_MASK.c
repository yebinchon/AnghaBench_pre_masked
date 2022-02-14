
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {int auxadc_lock; int dev; } ;
typedef enum wm831x_auxadc { ____Placeholder_wm831x_auxadc } wm831x_auxadc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wm831x*,int ) ;
 int FUNC_5 (struct wm831x*,int ,int) ;
 int FUNC_6 (struct wm831x*,int ,int,int) ;

int FUNC_7(struct wm831x *VAR_11, enum wm831x_auxadc VAR_12)
{
 int VAR_13 = 10;
 int VAR_14, VAR_15;

 FUNC_2(&VAR_11->auxadc_lock);

 VAR_14 = FUNC_6(VAR_11, VAR_2,
         VAR_10, VAR_10);
 if (VAR_14 < 0) {
  FUNC_0(VAR_11->dev, "Failed to enable AUXADC: %d\n", VAR_14);
  goto out;
 }


 VAR_15 = VAR_12;
 VAR_14 = FUNC_5(VAR_11, VAR_4,
          1 << VAR_15);
 if (VAR_14 < 0) {
  FUNC_0(VAR_11->dev, "Failed to set AUXADC source: %d\n", VAR_14);
  goto out;
 }

 VAR_14 = FUNC_6(VAR_11, VAR_2,
         VAR_6, VAR_6);
 if (VAR_14 < 0) {
  FUNC_0(VAR_11->dev, "Failed to start AUXADC: %d\n", VAR_14);
  goto disable;
 }

 do {
  FUNC_1(1);

  VAR_14 = FUNC_4(VAR_11, VAR_2);
  if (VAR_14 < 0)
   VAR_14 = VAR_6;
 } while ((VAR_14 & VAR_6) && --VAR_13);

 if (VAR_14 & VAR_6) {
  FUNC_0(VAR_11->dev, "Timed out reading AUXADC\n");
  VAR_14 = -VAR_0;
  goto disable;
 }

 VAR_14 = FUNC_4(VAR_11, VAR_3);
 if (VAR_14 < 0) {
  FUNC_0(VAR_11->dev, "Failed to read AUXADC data: %d\n", VAR_14);
 } else {
  VAR_15 = ((VAR_14 & VAR_8)
         >> VAR_9) - 1;

  if (VAR_15 == 14)
   VAR_15 = VAR_5;

  if (VAR_15 != VAR_12) {
   FUNC_0(VAR_11->dev, "Data from source %d not %d\n",
    VAR_15, VAR_12);
   VAR_14 = -VAR_1;
  } else {
   VAR_14 &= VAR_7;
  }
 }

disable:
 FUNC_6(VAR_11, VAR_2, VAR_10, 0);
out:
 FUNC_3(&VAR_11->auxadc_lock);
 return VAR_14;
}
