
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_2__ {int cursorx; int cursory; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

qboolean FUNC_0 (int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 if (VAR_2.cursorx < VAR_3 ||
  VAR_2.cursory < VAR_4 ||
  VAR_2.cursorx > VAR_3+VAR_5 ||
  VAR_2.cursory > VAR_4+VAR_6)
  return VAR_0;

 return VAR_1;
}
