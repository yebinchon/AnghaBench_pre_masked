
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* travelflagfortype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;

__inline int FUNC_0(int VAR_8)
{
 int VAR_9;

 VAR_9 = 0;
 if (VAR_9 & VAR_4)
  VAR_9 |= VAR_2;
 if (VAR_9 & VAR_5)
  VAR_9 |= VAR_3;
 VAR_8 &= VAR_6;
 if (VAR_8 < 0 || VAR_8 >= VAR_0)
  return VAR_1;
 VAR_9 |= VAR_7.travelflagfortype[VAR_8];
 return VAR_9;
}
