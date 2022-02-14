
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_wid_list {int wl_count; struct fb_wid_item* wl_list; } ;
struct fb_wid_item {int wi_index; int* wi_values; int wi_type; } ;
struct fb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fb_info*,struct fb_wid_list*) ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_2)
{
 struct fb_wid_item VAR_3;
 struct fb_wid_list VAR_4;

 VAR_4.wl_count = 1;
 VAR_4.wl_list = &VAR_3;
 VAR_3.wi_type = VAR_1;
 VAR_3.wi_index = 0;
 VAR_3.wi_values [0] = 0x2c0;
 FUNC_0(VAR_2, &VAR_4);
 VAR_3.wi_index = 1;
 VAR_3.wi_values [0] = 0x30;
 FUNC_0(VAR_2, &VAR_4);
 VAR_3.wi_index = 2;
 VAR_3.wi_values [0] = 0x20;
 FUNC_0(VAR_2, &VAR_4);
 VAR_3.wi_type = VAR_0;
 VAR_3.wi_index = 1;
 VAR_3.wi_values [0] = 0x30;
 FUNC_0(VAR_2, &VAR_4);
}
