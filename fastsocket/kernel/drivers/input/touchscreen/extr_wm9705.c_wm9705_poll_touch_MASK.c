
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm97xx_data {int p; int y; int x; } ;
struct wm97xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct wm97xx*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct wm97xx *VAR_6, struct wm97xx_data *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_3, &VAR_7->x);
 if (VAR_8 != VAR_1)
  return VAR_8;
 VAR_8 = FUNC_0(VAR_6, VAR_4, &VAR_7->y);
 if (VAR_8 != VAR_1)
  return VAR_8;
 if (VAR_5) {
  VAR_8 = FUNC_0(VAR_6, VAR_2, &VAR_7->p);
  if (VAR_8 != VAR_1)
   return VAR_8;
 } else
  VAR_7->p = VAR_0;

 return VAR_1;
}
