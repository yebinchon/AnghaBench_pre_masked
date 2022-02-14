
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int width; } ;
struct TYPE_9__ {int width; int height; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int,int ,TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int,int ,int) ;
 int FUNC_5 (int,int,int ) ;
 int FUNC_6 () ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_1__* VAR_11 ;
 TYPE_1__* VAR_12 ;
 TYPE_1__* VAR_13 ;
 int VAR_14 ;
 TYPE_1__** VAR_15 ;
 TYPE_3__* VAR_16 ;
 int * VAR_17 ;
 TYPE_1__* VAR_18 ;
 TYPE_1__* VAR_19 ;

void FUNC_7(void)
{
    int VAR_20;
    int VAR_21;
    int VAR_22;
    int VAR_23 = FUNC_0(VAR_16->width);

    FUNC_6();


    FUNC_2();

    FUNC_3();


    FUNC_1(VAR_3+VAR_2-FUNC_0(VAR_13->width),
  VAR_4, VAR_0, VAR_13);

    FUNC_1(VAR_3+2*VAR_2-FUNC_0(VAR_12->width),
  VAR_4, VAR_0, VAR_12);

    FUNC_1(VAR_3+3*VAR_2-FUNC_0(VAR_18->width),
  VAR_4, VAR_0, VAR_18);

    if (VAR_10)
 FUNC_1(VAR_3+4*VAR_2-FUNC_0(VAR_11->width),
      VAR_4, VAR_0, VAR_11);


    VAR_22 = VAR_4 + FUNC_0(VAR_13->height);

    for (VAR_20=0 ; VAR_20<VAR_1 ; VAR_20++)
    {
 if (!VAR_17[VAR_20])
     continue;

 VAR_21 = VAR_3;
 FUNC_1(VAR_21-FUNC_0(VAR_15[VAR_20]->width), VAR_22, VAR_0, VAR_15[VAR_20]);

 if (VAR_20 == VAR_14)
     FUNC_1(VAR_21-FUNC_0(VAR_15[VAR_20]->width), VAR_22, VAR_0, VAR_19);

 VAR_21 += VAR_2;
 FUNC_5(VAR_21-VAR_23, VAR_22+10, VAR_8[VAR_20]); VAR_21 += VAR_2;
 FUNC_5(VAR_21-VAR_23, VAR_22+10, VAR_7[VAR_20]); VAR_21 += VAR_2;
 FUNC_5(VAR_21-VAR_23, VAR_22+10, VAR_9[VAR_20]); VAR_21 += VAR_2;

 if (VAR_10)
     FUNC_4(VAR_21, VAR_22+10, VAR_6[VAR_20], -1);

 VAR_22 += VAR_5;
    }

}
