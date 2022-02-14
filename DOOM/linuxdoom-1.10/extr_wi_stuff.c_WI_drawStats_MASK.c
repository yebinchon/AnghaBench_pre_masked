
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int height; } ;
struct TYPE_3__ {int epsd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,scalar_t__,int ) ;
 int FUNC_6 () ;
 int * VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_2__** VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_1__* VAR_17 ;

void FUNC_7(void)
{

    int VAR_18;

    VAR_18 = (3*FUNC_0(VAR_13[0]->height))/2;

    FUNC_6();


    FUNC_2();

    FUNC_3();

    FUNC_1(VAR_2, VAR_3, VAR_0, VAR_12);
    FUNC_4(VAR_1 - VAR_2, VAR_3, VAR_7[0]);

    FUNC_1(VAR_2, VAR_3+VAR_18, VAR_0, VAR_11);
    FUNC_4(VAR_1 - VAR_2, VAR_3+VAR_18, VAR_6[0]);

    FUNC_1(VAR_2, VAR_3+2*VAR_18, VAR_0, VAR_15);
    FUNC_4(VAR_1 - VAR_2, VAR_3+2*VAR_18, VAR_9[0]);

    FUNC_1(VAR_4, VAR_5, VAR_0, VAR_16);
    FUNC_5(VAR_1/2 - VAR_4, VAR_5, VAR_10);

    if (VAR_17->epsd < 3)
    {
 FUNC_1(VAR_1/2 + VAR_4, VAR_5, VAR_0, VAR_14);
 FUNC_5(VAR_1 - VAR_4, VAR_5, VAR_8);
    }

}
