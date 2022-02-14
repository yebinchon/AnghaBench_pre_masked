
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350 {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wm8350*,int,int,int *) ;

int FUNC_4(struct wm8350 *VAR_1, int VAR_2, int VAR_3,
        u16 *VAR_4)
{
 int VAR_5 = 0;

 FUNC_1(&VAR_0);
 VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  FUNC_0(VAR_1->dev, "block read starting from R%d failed\n",
   VAR_2);
 FUNC_2(&VAR_0);
 return VAR_5;
}
