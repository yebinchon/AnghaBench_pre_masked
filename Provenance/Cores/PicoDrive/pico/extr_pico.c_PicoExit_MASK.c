
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ end; scalar_t__ start; scalar_t__ size; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(void)
{
  if (VAR_1 & VAR_0)
    FUNC_1();
  FUNC_0();
  FUNC_4();

    if (VAR_2.data != ((void*)0)) {
        FUNC_2(VAR_2.data);
        VAR_2.data = ((void*)0);
        VAR_2.size = 0;
        VAR_2.start = VAR_2.end = 0;
    }
  FUNC_3();
}
