
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bd2802_led {int client; } ;
typedef enum led_ids { ____Placeholder_led_ids } led_ids ;
typedef enum led_colors { ____Placeholder_led_colors } led_colors ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int ) ;
 scalar_t__ FUNC_1 (struct bd2802_led*,int,int) ;
 int FUNC_2 (struct bd2802_led*,int,int,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct bd2802_led *VAR_4, enum led_ids VAR_5,
       enum led_colors VAR_6)
{
 u8 VAR_7;

 if (FUNC_1(VAR_4, VAR_5, VAR_6))
  return;

 VAR_7 = FUNC_0(VAR_5, VAR_6, VAR_2);
 FUNC_3(VAR_4->client, VAR_7, VAR_0);
 VAR_7 = FUNC_0(VAR_5, VAR_6, VAR_3);
 FUNC_3(VAR_4->client, VAR_7, VAR_0);

 FUNC_2(VAR_4, VAR_5, VAR_6, VAR_1);
}
