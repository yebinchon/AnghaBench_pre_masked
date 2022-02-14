
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gamestate_t ;
typedef int boolean ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;




 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_0 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (scalar_t__,int,int ,int ) ;
 int FUNC_17 () ;
 int FUNC_18 (char*,int ) ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_19 (int ,int ,int ,int ) ;
 int VAR_18 ;
 int FUNC_20 (int ,int ,int ,int ,int ,int) ;
 int FUNC_21 (int ,int ,int ,int ) ;
 int VAR_19 ;

void FUNC_22 (void)
{
    static boolean VAR_20 = 0;
    static boolean VAR_21 = 0;
    static boolean VAR_22 = 0;
    static boolean VAR_23 = 0;
    static gamestate_t VAR_24 = -1;
    static int VAR_25;
    int VAR_26;
    int VAR_27;
    int VAR_28;
    int VAR_29;
    boolean VAR_30;
    boolean VAR_31;
    boolean VAR_32;

    if (VAR_9)
 return;

    VAR_32 = 0;


    if (VAR_13)
    {
 FUNC_12 ();
 VAR_24 = -1;
 VAR_25 = 3;
    }


    if (VAR_5 != VAR_19)
    {
 VAR_31 = 1;
 FUNC_21(0, 0, VAR_2, VAR_1);
    }
    else
 VAR_31 = 0;

    if (VAR_5 == 128 && VAR_6)
 FUNC_4();


    switch (VAR_5)
    {
      case 128:
 if (!VAR_6)
     break;
 if (VAR_3)
     FUNC_0 ();
 if (VAR_31 || (VAR_15 != 200 && VAR_23) )
     VAR_32 = 1;
 if (VAR_22 && !VAR_7)
     VAR_32 = 1;
 FUNC_15 (VAR_15 == 200, VAR_32 );
 VAR_23 = VAR_15 == 200;
 break;

      case 129:
 FUNC_17 ();
 break;

      case 130:
 FUNC_2 ();
 break;

      case 131:
 FUNC_1 ();
 break;
    }


    FUNC_8 ();


    if (VAR_5 == 128 && !VAR_3 && VAR_6)
 FUNC_14 (&VAR_11[VAR_4]);

    if (VAR_5 == 128 && VAR_6)
 FUNC_3 ();


    if (VAR_5 != VAR_24 && VAR_5 != 128)
 FUNC_7 (FUNC_18 ("PLAYPAL",VAR_0));


    if (VAR_5 == 128 && VAR_24 != 128)
    {
 VAR_20 = 0;
 FUNC_13 ();
    }


    if (VAR_5 == 128 && !VAR_3 && VAR_12 != 320)
    {
 if (VAR_8 || VAR_21 || !VAR_20)
     VAR_25 = 3;
 if (VAR_25)
 {
     FUNC_11 ();
     VAR_25--;
 }

    }

    VAR_21 = VAR_8;
    VAR_20 = VAR_14;
    VAR_22 = VAR_7;
    VAR_24 = VAR_19 = VAR_5;


    if (VAR_10)
    {
 if (VAR_3)
     VAR_29 = 4;
 else
     VAR_29 = VAR_17+4;
 FUNC_16(VAR_16+(VAR_12-68)/2,
     VAR_29,0,FUNC_18 ("M_PAUSE", VAR_0));
    }



    FUNC_9 ();
    FUNC_10 ();



    if (!VAR_31)
    {
 FUNC_5 ();
 return;
    }


    FUNC_19(0, 0, VAR_2, VAR_1);

    VAR_28 = FUNC_6 () - 1;

    do
    {
 do
 {
     VAR_26 = FUNC_6 ();
     VAR_27 = VAR_26 - VAR_28;
 } while (!VAR_27);
 VAR_28 = VAR_26;
 VAR_30 = FUNC_20(VAR_18
          , 0, 0, VAR_2, VAR_1, VAR_27);
 FUNC_8 ();
 FUNC_9 ();
 FUNC_5 ();
    } while (!VAR_30);
}
