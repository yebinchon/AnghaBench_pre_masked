
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int (* set_power ) (int) ;} ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct wl1251 *VAR_0, bool VAR_1)
{
 if (VAR_0->set_power)
  VAR_0->set_power(VAR_1);

 return 0;
}
