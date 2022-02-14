
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (struct wm831x*) ;
 int FUNC_4 (struct wm831x*) ;
 int FUNC_5 (struct wm831x*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct wm831x *VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_2);

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4 == 0) {
  VAR_4 = FUNC_5(VAR_3, VAR_0,
          VAR_1, VAR_1);
  FUNC_3(VAR_3);
 } else {
  FUNC_0(VAR_3->dev, "Failed to unlock security key: %d\n",
   VAR_4);
 }

 FUNC_2(&VAR_2);

 return VAR_4;
}
