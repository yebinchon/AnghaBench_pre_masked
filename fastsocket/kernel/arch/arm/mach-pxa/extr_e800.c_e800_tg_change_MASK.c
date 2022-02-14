
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w100fb_par {TYPE_1__* mode; } ;
struct TYPE_2__ {int xres; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct w100fb_par *VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_1->mode->xres == 480)
  VAR_2 |= 0x100;
 else
  VAR_2 &= ~0x100;
 FUNC_1(VAR_0, VAR_2);
}
