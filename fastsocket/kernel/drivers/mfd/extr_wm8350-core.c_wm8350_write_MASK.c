
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wm8350 {int (* write_dev ) (struct wm8350*,int,int,char*) ;int* reg_cache; int dev; } ;
struct TYPE_2__ {int writable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (struct wm8350*,int) ;
 int FUNC_3 (struct wm8350*,int,int,char*) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_4(struct wm8350 *VAR_4, u8 VAR_5, int VAR_6, u16 *VAR_7)
{
 int VAR_8;
 int VAR_9 = VAR_5 + VAR_6;
 int VAR_10 = VAR_6 * 2;

 if (VAR_4->write_dev == ((void*)0))
  return -VAR_1;

 if ((VAR_5 + VAR_6 - 1) > VAR_2) {
  FUNC_1(VAR_4->dev, "invalid reg %x\n",
   VAR_5 + VAR_6 - 1);
  return -VAR_0;
 }


 for (VAR_8 = VAR_5; VAR_8 < VAR_9; VAR_8++) {
  if (!VAR_3[VAR_8].writable) {
   FUNC_1(VAR_4->dev,
    "attempted write to read only reg R%d\n", VAR_8);
   return -VAR_0;
  }

  if (FUNC_2(VAR_4, VAR_8)) {
   FUNC_1(VAR_4->dev,
          "attempted write to locked reg R%d\n", VAR_8);
   return -VAR_0;
  }

  VAR_7[VAR_8 - VAR_5] &= VAR_3[VAR_8].writable;

  VAR_4->reg_cache[VAR_8] =
   (VAR_4->reg_cache[VAR_8] & ~VAR_3[VAR_8].writable)
   | VAR_7[VAR_8 - VAR_5];

  VAR_7[VAR_8 - VAR_5] = FUNC_0(VAR_7[VAR_8 - VAR_5]);
 }


 return VAR_4->write_dev(VAR_4, VAR_5, VAR_10, (char *)VAR_7);
}
