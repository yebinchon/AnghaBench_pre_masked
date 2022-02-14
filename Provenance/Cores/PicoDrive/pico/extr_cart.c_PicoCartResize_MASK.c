
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* rom; } ;


 TYPE_1__ VAR_0 ;
 void* FUNC_0 (void*,int,int) ;
 int VAR_1 ;

int FUNC_1(int VAR_2)
{
  void *VAR_3 = FUNC_0(VAR_0.rom, VAR_1, VAR_2);
  if (VAR_3 == ((void*)0))
    return -1;

  VAR_0.rom = VAR_3;
  VAR_1 = VAR_2;
  return 0;
}
