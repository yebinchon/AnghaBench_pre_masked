
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wm8350 {int (* read_dev ) (struct wm8350*,int ,int,int *) ;int * reg_cache; int dev; } ;
struct TYPE_2__ {int readable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (struct wm8350*,int ,int,int *) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 TYPE_1__* VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;

__attribute__((used)) static int FUNC_4(struct wm8350 *VAR_19, int VAR_20, int VAR_21)
{
 int VAR_22, VAR_23 = 0;
 u16 VAR_24;
 const u16 *VAR_25;

 switch (VAR_20) {
 case 0:
  switch (VAR_21) {
  default:
   FUNC_1(VAR_19->dev,
    "WM8350 configuration mode %d not supported\n",
    VAR_21);
   return -VAR_0;
  }
  break;

 case 1:
  switch (VAR_21) {
  default:
   FUNC_1(VAR_19->dev,
    "WM8351 configuration mode %d not supported\n",
    VAR_21);
   return -VAR_0;
  }
  break;

 case 2:
  switch (VAR_21) {
  default:
   FUNC_1(VAR_19->dev,
    "WM8352 configuration mode %d not supported\n",
    VAR_21);
   return -VAR_0;
  }
  break;

 default:
  FUNC_1(VAR_19->dev,
   "WM835x configuration mode %d not supported\n",
   VAR_21);
  return -VAR_0;
 }

 VAR_19->reg_cache =
  FUNC_2(sizeof(u16) * (VAR_5 + 1), VAR_2);
 if (VAR_19->reg_cache == ((void*)0))
  return -VAR_1;





 VAR_23 = VAR_19->read_dev(VAR_19, 0,
          sizeof(u16) * (VAR_5 + 1),
          VAR_19->reg_cache);
 if (VAR_23 < 0) {
  FUNC_1(VAR_19->dev,
   "failed to read initial cache values\n");
  goto out;
 }


 for (VAR_22 = 0; VAR_22 < VAR_5; VAR_22++) {
  if (VAR_10[VAR_22].readable &&
      (VAR_22 < VAR_4 || VAR_22 > VAR_3)) {
   VAR_24 = FUNC_0(VAR_19->reg_cache[VAR_22]);
   VAR_24 &= VAR_10[VAR_22].readable;
   VAR_19->reg_cache[VAR_22] = VAR_24;
  } else
   VAR_19->reg_cache[VAR_22] = VAR_25[VAR_22];
 }

out:
 return VAR_23;
}
