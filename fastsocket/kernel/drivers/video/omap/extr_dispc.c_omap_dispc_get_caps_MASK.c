
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_caps {int plane_color; int ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_0(int VAR_10, struct omapfb_caps *VAR_11)
{
 VAR_11->ctrl |= VAR_0;
 if (VAR_10 > 0)
  VAR_11->ctrl |= VAR_1;
 VAR_11->plane_color |= (1 << VAR_7) |
        (1 << VAR_8) |
        (1 << VAR_9);
 if (VAR_10 == 0)
  VAR_11->plane_color |= (1 << VAR_5) |
         (1 << VAR_4) |
         (1 << VAR_3) |
         (1 << VAR_2) |
         (1 << VAR_6);
}
