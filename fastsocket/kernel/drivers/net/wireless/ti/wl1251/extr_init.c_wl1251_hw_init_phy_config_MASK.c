
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wl1251*) ;
 int FUNC_1 (struct wl1251*) ;
 int FUNC_2 (struct wl1251*,int ) ;
 int FUNC_3 (struct wl1251*) ;
 int FUNC_4 (struct wl1251*,int ) ;

int FUNC_5(struct wl1251 *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_4(VAR_2, VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
