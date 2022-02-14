
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int quirks; } ;


 int VAR_0 ;
 int FUNC_0 (struct wl1271*) ;

__attribute__((used)) static int FUNC_1(struct wl1271 *VAR_1)
{
 int VAR_2;

 if (VAR_1->quirks & VAR_0)
  return 0;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 return 0;
}
