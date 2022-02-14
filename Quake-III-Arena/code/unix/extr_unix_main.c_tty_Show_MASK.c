
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cursor; scalar_t__ buffer; } ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,scalar_t__,int) ;

void FUNC_2()
{
  int VAR_3;
  FUNC_0(VAR_2);
  FUNC_0(VAR_1>0);
  VAR_1--;
  if (VAR_1 == 0)
  {
    if (VAR_0.cursor)
    {
      for (VAR_3=0; VAR_3<VAR_0.cursor; VAR_3++)
      {
        FUNC_1(1, VAR_0.buffer+VAR_3, 1);
      }
    }
  }
}
