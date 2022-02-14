
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ data; } ;


 TYPE_1__* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int ** VAR_3 ;
 int ** VAR_4 ;
 unsigned char** VAR_5 ;
 unsigned char** VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 scalar_t__* VAR_9 ;
 int FUNC_0 (char*) ;
 int* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int * VAR_18 ;

int
FUNC_1
( int VAR_19,
  int VAR_20,
  int VAR_21,
  int VAR_22 )
{
    static unsigned short VAR_23 = 0;

    int VAR_24;
    int VAR_25 = -1;

    int VAR_26 = VAR_11;
    int VAR_27 = 0;
    int VAR_28;
    int VAR_29;
    int VAR_30;



    if ( VAR_19 == VAR_16
  || VAR_19 == VAR_15
  || VAR_19 == VAR_13
  || VAR_19 == VAR_14
  || VAR_19 == VAR_17
  || VAR_19 == VAR_12 )
    {
 for (VAR_24=0 ; VAR_24<8 ; VAR_24++)
 {
     if (VAR_5[VAR_24] && VAR_2[VAR_24] == VAR_19)
     {
  VAR_5[VAR_24] = 0;
  break;
     }
 }
    }

    for (VAR_24=0 ; VAR_24<8 && VAR_5[VAR_24] ; VAR_24++)
    {
 if (VAR_7[VAR_24] < VAR_26)
 {
     VAR_27 = VAR_24;
     VAR_26 = VAR_7[VAR_24];
 }
    }

    if (VAR_24 == 8)
 VAR_28 = VAR_27;
    else
 VAR_28 = VAR_24;

    VAR_5[VAR_28] = (unsigned char *) VAR_0[VAR_19].data;
    VAR_6[VAR_28] = VAR_5[VAR_28] + VAR_10[VAR_19];

    if (!VAR_23)
 VAR_23 = 100;

    VAR_1[VAR_28] = VAR_25 = VAR_23++;
    VAR_8[VAR_28] = VAR_21;
    VAR_9[VAR_28] = 0;
    VAR_7[VAR_28] = VAR_11;


    VAR_22 += 1;


    VAR_30 =
 VAR_20 - (VAR_20*VAR_22*VAR_22)/(256*256);

    VAR_22 = VAR_22 - 257;


    VAR_29 =
 VAR_20 - (VAR_20*VAR_22*VAR_22)/(256*256);


    if (VAR_29 < 0 || VAR_29 > 127)
 FUNC_0("rightvol out of bounds");

    if (VAR_30 < 0 || VAR_30 > 127)
 FUNC_0("leftvol out of bounds");



    VAR_3[VAR_28] = &VAR_18[VAR_30*256];
    VAR_4[VAR_28] = &VAR_18[VAR_29*256];

    VAR_2[VAR_28] = VAR_19;

    return VAR_25;

}
