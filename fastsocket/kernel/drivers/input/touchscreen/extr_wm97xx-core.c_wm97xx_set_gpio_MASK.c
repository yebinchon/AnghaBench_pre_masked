
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct wm97xx {scalar_t__ id; scalar_t__ variant; int codec_mutex; } ;
typedef enum wm97xx_gpio_status { ____Placeholder_wm97xx_gpio_status } wm97xx_gpio_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wm97xx*,int ) ;
 int FUNC_3 (struct wm97xx*,int ,int) ;

void FUNC_4(struct wm97xx *VAR_4, u32 VAR_5,
    enum wm97xx_gpio_status VAR_6)
{
 u16 VAR_7;

 FUNC_0(&VAR_4->codec_mutex);
 VAR_7 = FUNC_2(VAR_4, VAR_0);

 if (VAR_6 & VAR_2)
  VAR_7 |= VAR_5;
 else
  VAR_7 &= ~VAR_5;

 if (VAR_4->id == VAR_1 && VAR_4->variant != VAR_3)
  FUNC_3(VAR_4, VAR_0, VAR_7 << 1);
 else
  FUNC_3(VAR_4, VAR_0, VAR_7);
 FUNC_1(&VAR_4->codec_mutex);
}
