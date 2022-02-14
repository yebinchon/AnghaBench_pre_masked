
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int skill_t ;
struct TYPE_4__ {int viewz; int * mo; scalar_t__ itemcount; scalar_t__ secretcount; scalar_t__ killcount; } ;
struct TYPE_3__ {int partime; scalar_t__ maxfrags; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (scalar_t__,int ) ;
 int FUNC_16 (char*) ;
 int FUNC_17 () ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (int ,scalar_t__) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 size_t VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__* VAR_25 ;
 TYPE_2__* VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int FUNC_20 (char*,char*,int) ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 TYPE_1__ VAR_32 ;

void
FUNC_21
( int VAR_33,
  int VAR_34,
  int VAR_35,
  skill_t VAR_36)
{
    int VAR_37;
    char VAR_38[9];
    int VAR_39;

    VAR_30 = VAR_29 = VAR_31 = VAR_32.maxfrags = 0;
    VAR_32.partime = 180;
    for (VAR_37=0 ; VAR_37<VAR_1 ; VAR_37++)
    {
 VAR_26[VAR_37].killcount = VAR_26[VAR_37].secretcount
     = VAR_26[VAR_37].itemcount = 0;
    }



    VAR_26[VAR_16].viewz = 1;


    FUNC_14 ();
 FUNC_19 (VAR_12, VAR_13-1);



    FUNC_2 ();


    FUNC_17 ();


    if ( VAR_21 == VAR_15)
    {
 if (VAR_34<10)
     FUNC_20 (VAR_38,"map0%i", VAR_34);
 else
     FUNC_20 (VAR_38,"map%i", VAR_34);
    }
    else
    {
 VAR_38[0] = 'E';
 VAR_38[1] = '0' + VAR_33;
 VAR_38[2] = 'M';
 VAR_38[3] = '0' + VAR_34;
 VAR_38[4] = 0;
    }

    VAR_39 = FUNC_16 (VAR_38);

    VAR_24 = 0;


    FUNC_3 (VAR_39+VAR_2);
    FUNC_11 (VAR_39+VAR_11);
    FUNC_6 (VAR_39+VAR_6);
    FUNC_8 (VAR_39+VAR_8);

    FUNC_4 (VAR_39+VAR_3);
    FUNC_9 (VAR_39+VAR_9);
    FUNC_5 (VAR_39+VAR_4);
    FUNC_7 (VAR_39+VAR_7);

    VAR_28 = FUNC_15 (VAR_39+VAR_5,VAR_12);
    FUNC_1 ();

    VAR_14 = 0;
    VAR_18 = VAR_19;
    FUNC_10 (VAR_39+VAR_10);


    if (VAR_17)
    {
 for (VAR_37=0 ; VAR_37<VAR_1 ; VAR_37++)
     if (VAR_25[VAR_37])
     {
  VAR_26[VAR_37].mo = ((void*)0);
  FUNC_0 (VAR_37);
     }

    }


    VAR_22 = VAR_23 = 0;


    FUNC_12 ();





    if (VAR_27)
 FUNC_13 ();



}
