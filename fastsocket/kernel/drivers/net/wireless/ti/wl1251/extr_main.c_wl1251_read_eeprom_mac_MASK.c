
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl1251 {int * mac_addr; } ;
typedef int mac ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wl1251*,int,int *,int) ;
 int FUNC_1 (struct wl1251*,int ,int ,int ,int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct wl1251 *VAR_3)
{
 u8 VAR_4[VAR_0];
 int VAR_5, VAR_6;

 FUNC_1(VAR_3, 0, 0, VAR_1, VAR_2);

 VAR_6 = FUNC_0(VAR_3, 0x1c, VAR_4, sizeof(VAR_4));
 if (VAR_6 < 0) {
  FUNC_2("failed to read MAC address from EEPROM");
  return VAR_6;
 }


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_3->mac_addr[VAR_5] = VAR_4[VAR_0 - VAR_5 - 1];

 return 0;
}
