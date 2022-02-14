
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int sg_enabled; } ;


 int FUNC_0 (struct wl1271*,int ) ;
 int FUNC_1 (struct wl1271*) ;

int FUNC_2(struct wl1271 *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0, VAR_0->sg_enabled);
 if (VAR_1 < 0)
  return VAR_1;

 return 0;
}
