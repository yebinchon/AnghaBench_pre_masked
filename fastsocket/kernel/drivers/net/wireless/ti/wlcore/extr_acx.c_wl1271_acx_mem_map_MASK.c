
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int dummy; } ;
struct acx_header {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wl1271*,int ,struct acx_header*,size_t) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(struct wl1271 *VAR_2, struct acx_header *VAR_3,
         size_t VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_1, "acx mem map");

 VAR_5 = FUNC_0(VAR_2, VAR_0, VAR_3, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return 0;
}
