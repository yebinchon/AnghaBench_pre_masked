
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int width; } ;
struct TYPE_9__ {int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int ,TYPE_1__*) ;
 int VAR_10 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int,int ,int) ;
 int FUNC_5 () ;
 TYPE_1__* VAR_11 ;
 int ** VAR_12 ;
 int * VAR_13 ;
 TYPE_1__* VAR_14 ;
 int VAR_15 ;
 TYPE_5__** VAR_16 ;
 TYPE_1__** VAR_17 ;
 scalar_t__* VAR_18 ;
 TYPE_1__* VAR_19 ;
 TYPE_1__* VAR_20 ;
 TYPE_1__* VAR_21 ;

void FUNC_6(void)
{

    int VAR_22;
    int VAR_23;
    int VAR_24;
    int VAR_25;
    int VAR_26;

    int VAR_27;

    VAR_27 = VAR_10;

    FUNC_5();


    FUNC_2();
    FUNC_3();


    FUNC_1(VAR_5-FUNC_0(VAR_20->width)/2,
  VAR_3-VAR_10+10,
  VAR_8,
  VAR_20);

    FUNC_1(VAR_0, VAR_1, VAR_8, VAR_14);
    FUNC_1(VAR_6, VAR_7, VAR_8, VAR_21);


    VAR_24 = VAR_2 + VAR_4;
    VAR_25 = VAR_3;

    for (VAR_22=0 ; VAR_22<VAR_9 ; VAR_22++)
    {
 if (VAR_18[VAR_22])
 {
     FUNC_1(VAR_24-FUNC_0(VAR_17[VAR_22]->width)/2,
   VAR_3 - VAR_10,
   VAR_8,
   VAR_17[VAR_22]);

     FUNC_1(VAR_2-FUNC_0(VAR_17[VAR_22]->width)/2,
   VAR_25,
   VAR_8,
   VAR_17[VAR_22]);

     if (VAR_22 == VAR_15)
     {
  FUNC_1(VAR_24-FUNC_0(VAR_17[VAR_22]->width)/2,
       VAR_3 - VAR_10,
       VAR_8,
       VAR_11);

  FUNC_1(VAR_2-FUNC_0(VAR_17[VAR_22]->width)/2,
       VAR_25,
       VAR_8,
       VAR_19);
     }
 }
 else
 {




 }
 VAR_24 += VAR_4;
 VAR_25 += VAR_10;
    }


    VAR_25 = VAR_3+10;
    VAR_26 = FUNC_0(VAR_16[0]->width);

    for (VAR_22=0 ; VAR_22<VAR_9 ; VAR_22++)
    {
 VAR_24 = VAR_2 + VAR_4;

 if (VAR_18[VAR_22])
 {
     for (VAR_23=0 ; VAR_23<VAR_9 ; VAR_23++)
     {
  if (VAR_18[VAR_23])
      FUNC_4(VAR_24+VAR_26, VAR_25, VAR_12[VAR_22][VAR_23], 2);

  VAR_24 += VAR_4;
     }
     FUNC_4(VAR_5+VAR_26, VAR_25, VAR_13[VAR_22], 2);
 }
 VAR_25 += VAR_10;
    }
}
