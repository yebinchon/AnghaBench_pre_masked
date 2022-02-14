
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ end; scalar_t__ start; scalar_t__ size; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int * FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;

int FUNC_2(void)
{



  if (VAR_1 & VAR_0) {
    if (VAR_2.data == ((void*)0))
      VAR_2.data = FUNC_0(1, 0x12000);
  }
  else if (VAR_2.data != ((void*)0)) {
    FUNC_1(VAR_2.data);
    VAR_2.data = ((void*)0);
      VAR_2.size = 0;
  }
  VAR_2.start = VAR_2.end = 0;

  return 0;
}
