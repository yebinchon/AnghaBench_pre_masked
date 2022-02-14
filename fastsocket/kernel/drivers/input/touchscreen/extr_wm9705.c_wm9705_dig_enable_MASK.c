
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm97xx {int* dig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wm97xx*,int ) ;
 int FUNC_1 (struct wm97xx*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct wm97xx *VAR_3, int VAR_4)
{
 if (VAR_4) {
  FUNC_1(VAR_3, VAR_0,
     VAR_3->dig[2] | VAR_2);
  FUNC_0(VAR_3, VAR_1);
 } else
  FUNC_1(VAR_3, VAR_0,
     VAR_3->dig[2] & ~VAR_2);
}
