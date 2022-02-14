
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int chan; int up; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

u16 FUNC_0(int VAR_3)
{
 if(VAR_3<VAR_0 || VAR_3>VAR_1 || VAR_2[VAR_3].chan==-1) return 0;
 return VAR_2[VAR_3].up;
}
