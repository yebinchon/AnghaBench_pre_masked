
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fixed_t ;
struct TYPE_3__ {int last; int first; } ;
typedef TYPE_1__ cliprange_t ;
typedef int boolean ;
typedef int angle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ,int ) ;
 size_t** VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;
 int* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

boolean FUNC_1 (fixed_t* VAR_14)
{
    int VAR_15;
    int VAR_16;
    int VAR_17;

    fixed_t VAR_18;
    fixed_t VAR_19;
    fixed_t VAR_20;
    fixed_t VAR_21;

    angle_t VAR_22;
    angle_t VAR_23;
    angle_t VAR_24;
    angle_t VAR_25;

    cliprange_t* VAR_26;

    int VAR_27;
    int VAR_28;



    if (VAR_12 <= VAR_14[VAR_4])
 VAR_15 = 0;
    else if (VAR_12 < VAR_14[VAR_5])
 VAR_15 = 1;
    else
 VAR_15 = 2;

    if (VAR_13 >= VAR_14[VAR_6])
 VAR_16 = 0;
    else if (VAR_13 > VAR_14[VAR_3])
 VAR_16 = 1;
    else
 VAR_16 = 2;

    VAR_17 = (VAR_16<<2)+VAR_15;
    if (VAR_17 == 5)
 return 1;

    VAR_18 = VAR_14[VAR_7[VAR_17][0]];
    VAR_19 = VAR_14[VAR_7[VAR_17][1]];
    VAR_20 = VAR_14[VAR_7[VAR_17][2]];
    VAR_21 = VAR_14[VAR_7[VAR_17][3]];


    VAR_22 = FUNC_0 (VAR_18, VAR_19) - VAR_10;
    VAR_23 = FUNC_0 (VAR_20, VAR_21) - VAR_10;

    VAR_24 = VAR_22 - VAR_23;


    if (VAR_24 >= VAR_0)
 return 1;

    VAR_25 = VAR_22 + VAR_8;

    if (VAR_25 > 2*VAR_8)
    {
 VAR_25 -= 2*VAR_8;


 if (VAR_25 >= VAR_24)
     return 0;

 VAR_22 = VAR_8;
    }
    VAR_25 = VAR_8 - VAR_23;
    if (VAR_25 > 2*VAR_8)
    {
 VAR_25 -= 2*VAR_8;


 if (VAR_25 >= VAR_24)
     return 0;

 VAR_23 = -VAR_8;
    }





    VAR_22 = (VAR_22+VAR_1)>>VAR_2;
    VAR_23 = (VAR_23+VAR_1)>>VAR_2;
    VAR_27 = VAR_11[VAR_22];
    VAR_28 = VAR_11[VAR_23];


    if (VAR_27 == VAR_28)
 return 0;
    VAR_28--;

    VAR_26 = VAR_9;
    while (VAR_26->last < VAR_28)
 VAR_26++;

    if (VAR_27 >= VAR_26->first
 && VAR_28 <= VAR_26->last)
    {

 return 0;
    }

    return 1;
}
