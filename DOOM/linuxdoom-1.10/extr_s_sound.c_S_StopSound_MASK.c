
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* origin; scalar_t__ sfxinfo; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

void FUNC_1(void *VAR_2)
{

    int VAR_3;

    for (VAR_3=0 ; VAR_3<VAR_1 ; VAR_3++)
    {
 if (VAR_0[VAR_3].sfxinfo && VAR_0[VAR_3].origin == VAR_2)
 {
     FUNC_0(VAR_3);
     break;
 }
    }
}
