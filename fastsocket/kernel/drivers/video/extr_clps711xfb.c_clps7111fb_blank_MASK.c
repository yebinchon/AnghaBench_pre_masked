
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(int VAR_6, struct fb_info *VAR_7)
{
     if (VAR_6) {
  if (FUNC_4()) {

   FUNC_2(FUNC_0(VAR_3) & ~VAR_2, VAR_3);


   FUNC_2(FUNC_0(VAR_3) & ~VAR_0, VAR_3);


   FUNC_5(100);


   FUNC_2(FUNC_0(VAR_3) & ~VAR_1, VAR_3);


   FUNC_3(FUNC_1(VAR_4) & ~VAR_5,
     VAR_4);
  }
 } else {
  if (FUNC_4()) {

   FUNC_3(FUNC_1(VAR_4) | VAR_5,
     VAR_4);


   FUNC_2(FUNC_0(VAR_3) | VAR_1, VAR_3);


   FUNC_5(100);


   FUNC_2(FUNC_0(VAR_3) | VAR_0,
     VAR_3);


   FUNC_2(FUNC_0(VAR_3) | VAR_2, VAR_3);
  }
 }
 return 0;
}
