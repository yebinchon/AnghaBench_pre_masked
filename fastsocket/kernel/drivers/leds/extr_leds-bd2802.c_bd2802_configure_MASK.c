
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bd2802_led_platform_data {int rgb_time; } ;
struct bd2802_led {int client; struct bd2802_led_platform_data* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct bd2802_led *VAR_4)
{
 struct bd2802_led_platform_data *VAR_5 = VAR_4->pdata;
 u8 VAR_6;

 VAR_6 = FUNC_0(VAR_1, VAR_3, VAR_0);
 FUNC_1(VAR_4->client, VAR_6, VAR_5->rgb_time);

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_0);
 FUNC_1(VAR_4->client, VAR_6, VAR_5->rgb_time);
}
