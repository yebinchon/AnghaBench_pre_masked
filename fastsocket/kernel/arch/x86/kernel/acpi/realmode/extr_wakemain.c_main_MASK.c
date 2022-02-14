
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int real_magic; int realmode_flags; int video_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_0 ;

int FUNC_3(void)
{

 if (VAR_0.real_magic != 0x12345678)
  while (1);

 if (VAR_0.realmode_flags & 4)
  FUNC_1("...-");

 if (VAR_0.realmode_flags & 1)
  asm volatile("lcallw   $0xc000,$3");

 if (VAR_0.realmode_flags & 2) {

  FUNC_0(0);
  FUNC_2(VAR_0.video_mode);
 }
}
