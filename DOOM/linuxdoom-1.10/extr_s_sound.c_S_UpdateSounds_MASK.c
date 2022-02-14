
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pitch; scalar_t__ volume; scalar_t__ link; } ;
typedef TYPE_1__ sfxinfo_t ;
typedef int mobj_t ;
struct TYPE_5__ {void* origin; int handle; TYPE_1__* sfxinfo; } ;
typedef TYPE_2__ channel_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,void*,int*,int*,int*) ;
 int FUNC_3 (int) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_4(void* VAR_5)
{
    int VAR_6;
    int VAR_7;
    int VAR_8;
    int VAR_9;
    int VAR_10;
    sfxinfo_t* VAR_11;
    channel_t* VAR_12;

    mobj_t* VAR_13 = (mobj_t*)VAR_5;
    for (VAR_7=0 ; VAR_7<VAR_3 ; VAR_7++)
    {
 VAR_12 = &VAR_2[VAR_7];
 VAR_11 = VAR_12->sfxinfo;

 if (VAR_12->sfxinfo)
 {
     if (FUNC_0(VAR_12->handle))
     {

  VAR_8 = VAR_4;
  VAR_10 = VAR_0;
  VAR_9 = VAR_1;

  if (VAR_11->link)
  {
      VAR_10 = VAR_11->pitch;
      VAR_8 += VAR_11->volume;
      if (VAR_8 < 1)
      {
   FUNC_3(VAR_7);
   continue;
      }
      else if (VAR_8 > VAR_4)
      {
   VAR_8 = VAR_4;
      }
  }



  if (VAR_12->origin && VAR_5 != VAR_12->origin)
  {
      VAR_6 = FUNC_2(VAR_13,
        VAR_12->origin,
        &VAR_8,
        &VAR_9,
        &VAR_10);

      if (!VAR_6)
      {
   FUNC_3(VAR_7);
      }
      else
   FUNC_1(VAR_12->handle, VAR_8, VAR_9, VAR_10);
  }
     }
     else
     {


  FUNC_3(VAR_7);
     }
 }
    }





}
