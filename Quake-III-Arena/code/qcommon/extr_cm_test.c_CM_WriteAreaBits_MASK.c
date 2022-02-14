
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int byte ;
struct TYPE_6__ {int numAreas; TYPE_1__* areas; } ;
struct TYPE_5__ {scalar_t__ integer; } ;
struct TYPE_4__ {int floodnum; } ;


 int FUNC_0 (int*,int,int) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__* VAR_1 ;

int FUNC_1 (byte *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_6 = (VAR_0.numAreas+7)>>3;


 if (VAR_1->integer || VAR_3 == -1)



 {
  FUNC_0 (VAR_2, 255, VAR_6);
 }
 else
 {
  VAR_5 = VAR_0.areas[VAR_3].floodnum;
  for (VAR_4=0 ; VAR_4<VAR_0.numAreas ; VAR_4++)
  {
   if (VAR_0.areas[VAR_4].floodnum == VAR_5 || VAR_3 == -1)
    VAR_2[VAR_4>>3] |= 1<<(VAR_4&7);
  }
 }

 return VAR_6;
}
