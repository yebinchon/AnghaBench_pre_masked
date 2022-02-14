
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pal; } ;
struct TYPE_6__ {TYPE_1__ m; } ;
struct TYPE_5__ {int r12; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;

void FUNC_1(void)
{
  int VAR_4 = VAR_3[VAR_1.r12 & 7];
  if (VAR_0.m.pal)
       VAR_2 = (VAR_4<<16)/50/312/2;
  else VAR_2 = (VAR_4<<16)/60/262/2;
  FUNC_0(VAR_4);
}
