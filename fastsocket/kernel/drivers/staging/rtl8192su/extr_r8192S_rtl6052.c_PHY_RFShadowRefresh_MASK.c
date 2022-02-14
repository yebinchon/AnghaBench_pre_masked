
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int Compare; int Recorver; int ErrorOrNot; int Driver_Write; scalar_t__ Value; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__** VAR_2 ;

extern void FUNC_0(struct net_device * VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
 {
  for (VAR_5 = 0; VAR_5 <= VAR_1; VAR_5++)
  {
   VAR_2[VAR_4][VAR_5].Value = 0;
   VAR_2[VAR_4][VAR_5].Compare = 0;
   VAR_2[VAR_4][VAR_5].Recorver = 0;
   VAR_2[VAR_4][VAR_5].ErrorOrNot = 0;
   VAR_2[VAR_4][VAR_5].Driver_Write = 0;
  }
 }

}
