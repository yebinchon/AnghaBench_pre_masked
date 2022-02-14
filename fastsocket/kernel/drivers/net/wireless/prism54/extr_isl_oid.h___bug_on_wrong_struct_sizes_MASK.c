
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct obj_ssid {int dummy; } ;
struct obj_mlmeex {int dummy; } ;
struct obj_mlme {int dummy; } ;
struct obj_key {int dummy; } ;
struct obj_frequencies {int dummy; } ;
struct obj_buffer {int dummy; } ;
struct obj_bsslist {int dummy; } ;
struct obj_bss {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void
FUNC_1(void)
{
 FUNC_0(sizeof (struct obj_ssid) != 34);
 FUNC_0(sizeof (struct obj_key) != 34);
 FUNC_0(sizeof (struct obj_mlme) != 12);
 FUNC_0(sizeof (struct obj_mlmeex) != 14);
 FUNC_0(sizeof (struct obj_buffer) != 8);
 FUNC_0(sizeof (struct obj_bss) != 60);
 FUNC_0(sizeof (struct obj_bsslist) != 4);
 FUNC_0(sizeof (struct obj_frequencies) != 2);
}
