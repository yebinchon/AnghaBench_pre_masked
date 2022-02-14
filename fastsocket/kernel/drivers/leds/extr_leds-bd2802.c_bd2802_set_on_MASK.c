
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bd2802_led {int client; int rgb_current; int adf_on; } ;
typedef enum led_ids { ____Placeholder_led_ids } led_ids ;
typedef enum led_colors { ____Placeholder_led_colors } led_colors ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bd2802_led*,int) ;
 int FUNC_1 (int,int,int ) ;
 scalar_t__ FUNC_2 (struct bd2802_led*) ;
 int FUNC_3 (struct bd2802_led*) ;
 int FUNC_4 (struct bd2802_led*,int,int,int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct bd2802_led *VAR_6, enum led_ids VAR_7,
       enum led_colors VAR_8)
{
 u8 VAR_9;

 if (FUNC_2(VAR_6) && !VAR_6->adf_on)
  FUNC_3(VAR_6);

 VAR_9 = FUNC_1(VAR_7, VAR_8, VAR_3);
 FUNC_5(VAR_6->client, VAR_9, VAR_6->rgb_current);
 VAR_9 = FUNC_1(VAR_7, VAR_8, VAR_4);
 FUNC_5(VAR_6->client, VAR_9, VAR_0);
 VAR_9 = FUNC_1(VAR_7, VAR_8, VAR_5);
 FUNC_5(VAR_6->client, VAR_9, VAR_2);

 FUNC_0(VAR_6, VAR_7);
 FUNC_4(VAR_6, VAR_7, VAR_8, VAR_1);
}
