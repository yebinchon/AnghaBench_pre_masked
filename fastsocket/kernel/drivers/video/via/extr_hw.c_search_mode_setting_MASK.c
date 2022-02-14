
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ModeIndex; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2)
{
 int VAR_3 = 0;

 while ((VAR_3 < VAR_1) &&
   (VAR_2 != VAR_0[VAR_3].ModeIndex))
  VAR_3++;
 if (VAR_3 >= VAR_1)
  VAR_3 = 0;
 return VAR_3;

}
