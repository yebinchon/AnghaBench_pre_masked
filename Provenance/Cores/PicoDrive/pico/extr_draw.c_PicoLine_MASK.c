
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* reg; } ;
struct TYPE_4__ {TYPE_1__ video; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(int VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
  int VAR_11 = 0;

  if (VAR_6 > 0) {
    VAR_6--;
    return;
  }

  VAR_2 = VAR_7;
  if (&FUNC_3 != ((void*)0))
    VAR_11 = FUNC_3(VAR_7 + VAR_8);

  if (VAR_11) {
    VAR_6 = VAR_11 - 1;
    return;
  }


  FUNC_0(VAR_10, VAR_9);
  if (VAR_5.video.reg[1]&0x40)
    FUNC_1(VAR_9);

  if (&FUNC_2 != ((void*)0))
    FUNC_2(VAR_9, VAR_7);

  if (&FUNC_4 != ((void*)0))
    VAR_6 = FUNC_4(VAR_7 + VAR_8);

  VAR_3 += VAR_4;
  VAR_0 = (char *)VAR_0 + VAR_1;
}
