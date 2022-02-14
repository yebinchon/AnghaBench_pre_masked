
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl3501_card {int base_addr; int* mac_addr; void** version; void* reg_domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (struct wl3501_card*,int ) ;

__attribute__((used)) static int FUNC_4(struct wl3501_card *VAR_7)
{
 int VAR_8 = VAR_7->base_addr;


 FUNC_2(VAR_1, VAR_8 + VAR_3);
 FUNC_2(0x00, VAR_8 + VAR_6);
 FUNC_2(0x40, VAR_8 + VAR_5);


 FUNC_0(100);
 VAR_7->mac_addr[0] = FUNC_1(VAR_8 + VAR_4);
 FUNC_0(100);
 VAR_7->mac_addr[1] = FUNC_1(VAR_8 + VAR_4);
 FUNC_0(100);
 VAR_7->mac_addr[2] = FUNC_1(VAR_8 + VAR_4);
 FUNC_0(100);
 VAR_7->mac_addr[3] = FUNC_1(VAR_8 + VAR_4);
 FUNC_0(100);
 VAR_7->mac_addr[4] = FUNC_1(VAR_8 + VAR_4);
 FUNC_0(100);
 VAR_7->mac_addr[5] = FUNC_1(VAR_8 + VAR_4);
 FUNC_0(100);
 VAR_7->reg_domain = FUNC_1(VAR_8 + VAR_4);
 FUNC_0(100);
 FUNC_2(VAR_0, VAR_8 + VAR_3);
 FUNC_2(0x04, VAR_8 + VAR_6);
 FUNC_2(0x40, VAR_8 + VAR_5);
 FUNC_0(100);
 VAR_7->version[0] = FUNC_1(VAR_8 + VAR_4);
 FUNC_0(100);
 VAR_7->version[1] = FUNC_1(VAR_8 + VAR_4);

 FUNC_3(VAR_7, VAR_2);


 return VAR_7->mac_addr[0] == 0x00 && VAR_7->mac_addr[1] == 0x60;
}
