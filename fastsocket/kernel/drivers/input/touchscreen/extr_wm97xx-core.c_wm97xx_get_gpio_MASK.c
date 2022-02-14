
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct wm97xx {int codec_mutex; } ;
typedef enum wm97xx_gpio_status { ____Placeholder_wm97xx_gpio_status } wm97xx_gpio_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct wm97xx*,int ) ;

enum wm97xx_gpio_status FUNC_3(struct wm97xx *VAR_3, u32 VAR_4)
{
 u16 VAR_5;
 enum wm97xx_gpio_status VAR_6;

 FUNC_0(&VAR_3->codec_mutex);
 VAR_5 = FUNC_2(VAR_3, VAR_0);

 if (VAR_5 & VAR_4)
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_2;

 FUNC_1(&VAR_3->codec_mutex);
 return VAR_6;
}
