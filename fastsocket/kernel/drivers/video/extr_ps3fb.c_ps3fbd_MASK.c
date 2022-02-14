
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ is_kicked; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (struct fb_info*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(void *VAR_2)
{
 struct fb_info *VAR_3 = VAR_2;

 FUNC_6();
 while (!FUNC_1()) {
  FUNC_7();
  FUNC_5(VAR_0);
  if (VAR_1.is_kicked) {
   VAR_1.is_kicked = 0;
   FUNC_0();
   FUNC_2(VAR_3, 0);
   FUNC_3();
  }
  FUNC_4();
 }
 return 0;
}
