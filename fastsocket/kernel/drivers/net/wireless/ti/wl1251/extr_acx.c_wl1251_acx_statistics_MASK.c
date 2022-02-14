
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int dummy; } ;
struct acx_statistics {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wl1251*,int ,struct acx_statistics*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int) ;

int FUNC_3(struct wl1251 *VAR_3, struct acx_statistics *VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_1, "acx statistics");

 VAR_5 = FUNC_0(VAR_3, VAR_0, VAR_4,
         sizeof(*VAR_4));
 if (VAR_5 < 0) {
  FUNC_2("acx statistics failed: %d", VAR_5);
  return -VAR_2;
 }

 return 0;
}
