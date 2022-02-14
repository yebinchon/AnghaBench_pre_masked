
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* sfxinfo; int handle; } ;
typedef TYPE_1__ channel_t ;
struct TYPE_5__ {int usefulness; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_3__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;

void FUNC_3(int VAR_5)
{

    int VAR_6;
    channel_t* VAR_7 = &VAR_1[VAR_5];

    if (VAR_7->sfxinfo)
    {

 if (FUNC_0(VAR_7->handle))
 {




     FUNC_1(VAR_7->handle);
 }



 for (VAR_6=0 ; VAR_6<VAR_2 ; VAR_6++)
 {
     if (VAR_5 != VAR_6
  && VAR_7->sfxinfo == VAR_1[VAR_6].sfxinfo)
     {
  break;
     }
 }


 VAR_7->sfxinfo->usefulness--;

 VAR_7->sfxinfo = 0;
    }
}
