
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int pitch; int priority; scalar_t__ lumpnum; int usefulness; int data; scalar_t__ volume; scalar_t__ link; } ;
typedef TYPE_1__ sfxinfo_t ;
struct TYPE_13__ {scalar_t__ x; scalar_t__ y; } ;
typedef TYPE_2__ mobj_t ;
struct TYPE_15__ {int handle; } ;
struct TYPE_14__ {TYPE_2__* mo; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,int,int,int,int) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*,int*,int*,int*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;
 TYPE_1__* VAR_4 ;
 TYPE_4__* VAR_5 ;
 size_t VAR_6 ;
 int FUNC_7 (int ,char*) ;
 TYPE_3__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

void
FUNC_8
( void* VAR_14,
  int VAR_15,
  int VAR_16 )
{

  int VAR_17;
  int VAR_18;
  int VAR_19;
  int VAR_20;
  sfxinfo_t* VAR_21;
  int VAR_22;

  mobj_t* VAR_23 = (mobj_t *) VAR_14;
  if (VAR_15 < 1 || VAR_15 > VAR_3)
    FUNC_0("Bad sfx #: %d", VAR_15);

  VAR_21 = &VAR_4[VAR_15];


  if (VAR_21->link)
  {
    VAR_19 = VAR_21->pitch;
    VAR_20 = VAR_21->priority;
    VAR_16 += VAR_21->volume;

    if (VAR_16 < 1)
      return;

    if (VAR_16 > VAR_12)
      VAR_16 = VAR_12;
  }
  else
  {
    VAR_19 = VAR_0;
    VAR_20 = VAR_1;
  }




  if (VAR_23 && VAR_23 != VAR_7[VAR_6].mo)
  {
    VAR_17 = FUNC_4(VAR_7[VAR_6].mo,
        VAR_23,
        &VAR_16,
        &VAR_18,
        &VAR_19);

    if ( VAR_23->x == VAR_7[VAR_6].mo->x
  && VAR_23->y == VAR_7[VAR_6].mo->y)
    {
      VAR_18 = VAR_2;
    }

    if (!VAR_17)
      return;
  }
  else
  {
    VAR_18 = VAR_2;
  }


  if (VAR_15 >= VAR_10
      && VAR_15 <= VAR_9)
  {
    VAR_19 += 8 - (FUNC_3()&15);

    if (VAR_19<0)
      VAR_19 = 0;
    else if (VAR_19>255)
      VAR_19 = 255;
  }
  else if (VAR_15 != VAR_8
    && VAR_15 != VAR_11)
  {
    VAR_19 += 16 - (FUNC_3()&31);

    if (VAR_19<0)
      VAR_19 = 0;
    else if (VAR_19>255)
      VAR_19 = 255;
  }


  FUNC_5(VAR_23);


  VAR_22 = FUNC_6(VAR_23, VAR_21);

  if (VAR_22<0)
    return;
  if (VAR_21->lumpnum < 0)
    VAR_21->lumpnum = FUNC_1(VAR_21);



  if (!VAR_21->data)
  {
    FUNC_7( VAR_13,
      "S_StartSoundAtVolume: 16bit and not pre-cached - wtf?\n");







  }



  if (VAR_21->usefulness++ < 0)
    VAR_21->usefulness = 1;



  VAR_5[VAR_22].handle = FUNC_2(VAR_15,

           VAR_16,
           VAR_18,
           VAR_19,
           VAR_20);
}
