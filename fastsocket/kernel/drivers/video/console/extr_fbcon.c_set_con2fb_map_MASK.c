
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {int dummy; } ;
struct fb_info {int dummy; } ;
struct TYPE_2__ {struct vc_data* d; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct vc_data*,struct fb_info*,int,int) ;
 int FUNC_2 (struct vc_data*,struct fb_info*,int,int) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_3 (struct vc_data*,struct fb_info*,struct fb_info*,int,int,int) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (struct fb_info*) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct fb_info** VAR_8 ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static int FUNC_10(int VAR_10, int VAR_11, int VAR_12)
{
 struct vc_data *VAR_13 = VAR_9[VAR_10].d;
 int VAR_14 = VAR_2[VAR_10];
 struct fb_info *VAR_15 = VAR_8[VAR_11];
 struct fb_info *VAR_16 = ((void*)0);
  int VAR_17, VAR_18 = 0;

 if (VAR_14 == VAR_11)
  return 0;

 if (!VAR_15)
  return -VAR_0;

 if (!FUNC_9() || !FUNC_4(&VAR_4)) {
  VAR_6 = VAR_11;
  return FUNC_6(0);
 }

 if (VAR_14 != -1)
  VAR_16 = VAR_8[VAR_14];

 VAR_17 = FUNC_8(VAR_11);

 FUNC_0();
 VAR_2[VAR_10] = VAR_11;
 if (!VAR_18 && !VAR_17)
   VAR_18 = FUNC_1(VAR_13, VAR_15, VAR_10, VAR_14);






  if (!VAR_18 && VAR_16 && !FUNC_8(VAR_14))
   VAR_18 = FUNC_3(VAR_13, VAR_16, VAR_15, VAR_10, VAR_14,
           VAR_17);

  if (!VAR_18) {
   int VAR_19 = (VAR_5 == 0 && !VAR_12 &&
      VAR_7 != VAR_1);

   if (!VAR_17)
    FUNC_5(VAR_15);
   VAR_3[VAR_10] = VAR_11;
   FUNC_2(VAR_13, VAR_15, VAR_10, VAR_19);
 }

 if (!FUNC_8(VAR_6))
  VAR_6 = VAR_11;

 FUNC_7();
  return VAR_18;
}
