
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int special; } ;
typedef TYPE_1__ sector_t ;
typedef int button_t ;
struct TYPE_12__ {int special; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (char*) ;
 int ** VAR_5 ;
 int ** VAR_6 ;
 int FUNC_8 (int ) ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__* VAR_11 ;
 TYPE_3__** VAR_12 ;
 int FUNC_9 (int *,int ,int) ;
 int * VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 TYPE_1__* VAR_17 ;
 int VAR_18 ;

void FUNC_10 (void)
{
    sector_t* VAR_19;
    int VAR_20;
    int VAR_21;

    VAR_21 = 1;
    if (FUNC_7("texture2") >= 0)
 VAR_21 = 2;



    VAR_10 = 0;

    VAR_20 = FUNC_0("-avg");
    if (VAR_20 && VAR_8)
    {
 VAR_10 = 1;
 VAR_9 = 20 * 60 * 35;
    }

    VAR_20 = FUNC_0("-timer");
    if (VAR_20 && VAR_8)
    {
 int VAR_22;
 VAR_22 = FUNC_8(VAR_13[VAR_20+1]) * 60 * 35;
 VAR_10 = 1;
 VAR_9 = VAR_22;
    }


    VAR_19 = VAR_17;
    for (VAR_20=0 ; VAR_20<VAR_16 ; VAR_20++, VAR_19++)
    {
 if (!VAR_19->special)
     continue;

 switch (VAR_19->special)
 {
   case 1:

     FUNC_5 (VAR_19);
     break;

   case 2:

     FUNC_6(VAR_19,VAR_0,0);
     break;

   case 3:

     FUNC_6(VAR_19,VAR_4,0);
     break;

   case 4:

     FUNC_6(VAR_19,VAR_0,0);
     VAR_19->special = 4;
     break;

   case 8:

     FUNC_4(VAR_19);
     break;
   case 9:

     VAR_18++;
     break;

   case 10:

     FUNC_1 (VAR_19);
     break;

   case 12:

     FUNC_6 (VAR_19, VAR_4, 1);
     break;

   case 13:

     FUNC_6 (VAR_19, VAR_0, 1);
     break;

   case 14:

     FUNC_2 (VAR_19, VAR_20);
     break;

   case 17:
     FUNC_3(VAR_19);
     break;
 }
    }



    VAR_15 = 0;
    for (VAR_20 = 0;VAR_20 < VAR_14; VAR_20++)
    {
 switch(VAR_11[VAR_20].special)
 {
   case 48:

     VAR_12[VAR_15] = &VAR_11[VAR_20];
     VAR_15++;
     break;
 }
    }



    for (VAR_20 = 0;VAR_20 < VAR_2;VAR_20++)
 VAR_5[VAR_20] = ((void*)0);

    for (VAR_20 = 0;VAR_20 < VAR_3;VAR_20++)
 VAR_6[VAR_20] = ((void*)0);

    for (VAR_20 = 0;VAR_20 < VAR_1;VAR_20++)
 FUNC_9(&VAR_7[VAR_20],0,sizeof(button_t));



}
