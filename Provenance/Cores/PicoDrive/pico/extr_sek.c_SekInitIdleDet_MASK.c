
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ frame_count; } ;
struct TYPE_4__ {TYPE_1__ m; } ;


 int FUNC_0 () ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (unsigned short**) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned short** VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__* VAR_5 ;
 unsigned short** FUNC_3 (unsigned short**,int) ;

void FUNC_4(void)
{
  unsigned short **VAR_6 = FUNC_3(VAR_3, 0x200*4);
  if (VAR_6 == ((void*)0)) {
    FUNC_2(VAR_3);
    VAR_3 = ((void*)0);
  }
  else
    VAR_3 = VAR_6;
  VAR_2 = VAR_1 = 0;
  VAR_4 = VAR_0.m.frame_count + 360;
}
