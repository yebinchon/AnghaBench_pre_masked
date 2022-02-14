
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mo; } ;


 size_t VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (char*) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_15 (char*,char*) ;
 int VAR_5 ;
 size_t VAR_6 ;
 int ** VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_16 (char*,char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_17 (char*,char*,int) ;

void FUNC_18 (void)
{
    if (VAR_4)
 FUNC_3 ();

    if (FUNC_11 ("-debugfile"))
    {
 char VAR_10[20];
 FUNC_17 (VAR_10,"debug%i.txt",VAR_2);
 FUNC_16 ("debug output to: %s\n",VAR_10);
 VAR_3 = FUNC_15 (VAR_10,"w");
    }

    FUNC_6 ();

    while (1)
    {

 FUNC_7 ();


 if (VAR_9)
 {
     FUNC_8 ();
     FUNC_2 ();
     FUNC_4 (&VAR_7[VAR_2][VAR_6%VAR_0]);
     if (VAR_1)
  FUNC_1 ();
     FUNC_12 ();
     FUNC_5 ();
     VAR_5++;
     VAR_6++;
 }
 else
 {
     FUNC_14 ();
 }

 FUNC_13 (VAR_8[VAR_2].mo);


 FUNC_0 ();



 FUNC_10();




 FUNC_9();

    }
}
