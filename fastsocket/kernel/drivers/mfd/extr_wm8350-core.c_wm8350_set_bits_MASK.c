
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350 {int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wm8350*,int ,int,int *) ;
 int FUNC_4 (struct wm8350*,int ,int,int *) ;

int FUNC_5(struct wm8350 *VAR_1, u16 VAR_2, u16 VAR_3)
{
 u16 VAR_4;
 int VAR_5;

 FUNC_1(&VAR_0);
 VAR_5 = FUNC_3(VAR_1, VAR_2, 1, &VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_1->dev, "read from reg R%d failed\n", VAR_2);
  goto out;
 }

 VAR_4 |= VAR_3;
 VAR_5 = FUNC_4(VAR_1, VAR_2, 1, &VAR_4);
 if (VAR_5)
  FUNC_0(VAR_1->dev, "write to reg R%d failed\n", VAR_2);
out:
 FUNC_2(&VAR_0);
 return VAR_5;
}
