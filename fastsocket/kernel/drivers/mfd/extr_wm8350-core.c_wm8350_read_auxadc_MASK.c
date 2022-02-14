
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350 {int auxadc_mutex; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct wm8350*,scalar_t__) ;
 int FUNC_5 (struct wm8350*,scalar_t__,int) ;

int FUNC_6(struct wm8350 *VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
 u16 VAR_14, VAR_15 = 0;
 int VAR_16 = 5;

 if (VAR_11 < VAR_2 || VAR_11 > VAR_6)
  return -VAR_0;
 if (VAR_11 >= VAR_7 && VAR_11 <= VAR_6
     && (VAR_12 != 0 || VAR_13 != 0))
  return -VAR_0;

 FUNC_1(&VAR_10->auxadc_mutex);


 VAR_14 = FUNC_4(VAR_10, VAR_9);
 FUNC_5(VAR_10, VAR_9, VAR_14 | VAR_4);

 if (VAR_12 || VAR_13) {
  VAR_14 = VAR_12 << 13;
  VAR_14 |= VAR_13 << 12;
  FUNC_5(VAR_10, VAR_1 + VAR_11, VAR_14);
 }

 VAR_14 = FUNC_4(VAR_10, VAR_8);
 VAR_14 |= 1 << VAR_11 | VAR_5;
 FUNC_5(VAR_10, VAR_8, VAR_14);

 do {
  FUNC_3(1);
  VAR_14 = FUNC_4(VAR_10, VAR_8);
 } while ((VAR_14 & VAR_5) && --VAR_16);

 if (!VAR_16)
  FUNC_0(VAR_10->dev, "adc chn %d read timeout\n", VAR_11);
 else
  VAR_15 = FUNC_4(VAR_10,
      VAR_1 + VAR_11);


 VAR_14 = FUNC_4(VAR_10, VAR_9);
 FUNC_5(VAR_10, VAR_9,
    VAR_14 & ~VAR_4);

 FUNC_2(&VAR_10->auxadc_mutex);

 return VAR_15 & VAR_3;
}
