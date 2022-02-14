
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ priority; } ;
typedef TYPE_1__ sfxinfo_t ;
struct TYPE_6__ {void* origin; TYPE_1__* sfxinfo; } ;
typedef TYPE_2__ channel_t ;


 int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;

int
FUNC_1
( void* VAR_2,
  sfxinfo_t* VAR_3 )
{

    int VAR_4;

    channel_t* VAR_5;


    for (VAR_4=0 ; VAR_4<VAR_1 ; VAR_4++)
    {
 if (!VAR_0[VAR_4].sfxinfo)
     break;
 else if (VAR_2 && VAR_0[VAR_4].origin == VAR_2)
 {
     FUNC_0(VAR_4);
     break;
 }
    }


    if (VAR_4 == VAR_1)
    {

 for (VAR_4=0 ; VAR_4<VAR_1 ; VAR_4++)
     if (VAR_0[VAR_4].sfxinfo->priority >= VAR_3->priority) break;

 if (VAR_4 == VAR_1)
 {

     return -1;
 }
 else
 {

     FUNC_0(VAR_4);
 }
    }

    VAR_5 = &VAR_0[VAR_4];


    VAR_5->sfxinfo = VAR_3;
    VAR_5->origin = VAR_2;

    return VAR_4;
}
