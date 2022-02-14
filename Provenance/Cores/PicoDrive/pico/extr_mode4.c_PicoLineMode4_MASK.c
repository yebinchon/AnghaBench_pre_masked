
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* reg; } ;
struct TYPE_4__ {TYPE_1__ video; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_5(int VAR_5)
{
  if (VAR_4 > 0) {
    VAR_4--;
    return;
  }

  if (&FUNC_3 != ((void*)0))
    VAR_4 = FUNC_3(VAR_5 + VAR_3);


  FUNC_0(VAR_2.video.reg[7] & 0x0f, 0);
  if (VAR_2.video.reg[1] & 0x40)
    FUNC_1(VAR_5);

  if (&FUNC_2 != ((void*)0))
    FUNC_2(VAR_5);

  if (&FUNC_4 != ((void*)0))
    VAR_4 = FUNC_4(VAR_5 + VAR_3);

  VAR_0 = (char *)VAR_0 + VAR_1;
}
