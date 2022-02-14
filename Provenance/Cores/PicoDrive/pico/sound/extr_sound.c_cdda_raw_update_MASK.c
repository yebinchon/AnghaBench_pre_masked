
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * cdda_stream; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int*,scalar_t__,int) ;
 int FUNC_2 (int*,scalar_t__,int) ;
 int FUNC_3 (int*,scalar_t__,int) ;
 int FUNC_4 (scalar_t__,int,int *) ;

__attribute__((used)) static void FUNC_5(int *VAR_3, int VAR_4)
{
  int VAR_5, VAR_6, VAR_7 = 1;

  VAR_6 = VAR_4*4;
  if (VAR_1 <= 22050 + 100) VAR_7 = 2;
  if (VAR_1 < 22050 - 100) VAR_7 = 4;
  VAR_6 *= VAR_7;

  VAR_5 = FUNC_4(VAR_2, VAR_6, VAR_0->cdda_stream);
  if (VAR_5 < VAR_6) {
    FUNC_0((char *)VAR_2 + VAR_5, 0, VAR_6 - VAR_5);
    VAR_0->cdda_stream = ((void*)0);
    return;
  }


  switch (VAR_7) {
    case 1: FUNC_1(VAR_3, VAR_2, VAR_4*2); break;
    case 2: FUNC_2(VAR_3, VAR_2, VAR_4*2); break;
    case 4: FUNC_3(VAR_3, VAR_2, VAR_4*2); break;
  }
}
