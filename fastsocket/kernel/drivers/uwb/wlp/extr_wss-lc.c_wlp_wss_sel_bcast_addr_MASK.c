
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlp_wss {int dummy; } ;
struct uwb_mac_addr {int data; } ;



__attribute__((used)) static
struct uwb_mac_addr FUNC_0(struct wlp_wss *VAR_0)
{
 struct uwb_mac_addr VAR_1 = {
  .data = { 0x01, 0x13, 0x88, 0x00, 0x01, 0x00 }
 };
 return VAR_1;
}
