
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ data; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int ** VAR_4 ;
 int ** VAR_5 ;
 unsigned char** VAR_6 ;
 unsigned char** VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 scalar_t__* VAR_10 ;
 int VAR_11 ;
 int* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int * VAR_19 ;

int
FUNC_1
( int VAR_20,
  int VAR_21,
  int VAR_22,
  int VAR_23 )
{
    static unsigned short VAR_24 = 0;

    int VAR_25;
    int VAR_26 = -1;

    int VAR_27 = VAR_11;
    int VAR_28 = 0;
    int VAR_29;

    int VAR_30;
    int VAR_31;



    if ( VAR_20 == VAR_17
  || VAR_20 == VAR_16
  || VAR_20 == VAR_14
  || VAR_20 == VAR_15
  || VAR_20 == VAR_18
  || VAR_20 == VAR_13 )
    {

 for (VAR_25=0 ; VAR_25<VAR_0 ; VAR_25++)
 {

     if ( (VAR_6[VAR_25])
   && (VAR_3[VAR_25] == VAR_20) )
     {

  VAR_6[VAR_25] = 0;


  break;
     }
 }
    }


    for (VAR_25=0; (VAR_25<VAR_0) && (VAR_6[VAR_25]); VAR_25++)
    {
 if (VAR_8[VAR_25] < VAR_27)
 {
     VAR_28 = VAR_25;
     VAR_27 = VAR_8[VAR_25];
 }
    }





    if (VAR_25 == VAR_0)
 VAR_29 = VAR_28;
    else
 VAR_29 = VAR_25;




    VAR_6[VAR_29] = (unsigned char *) VAR_1[VAR_20].data;

    VAR_7[VAR_29] = VAR_6[VAR_29] + VAR_12[VAR_20];


    if (!VAR_24)
 VAR_24 = 100;



    VAR_2[VAR_29] = VAR_26 = VAR_24++;



    VAR_9[VAR_29] = VAR_22;

    VAR_10[VAR_29] = 0;

    VAR_8[VAR_29] = VAR_11;



    VAR_23 += 1;




    VAR_31 =
 VAR_21 - ((VAR_21*VAR_23*VAR_23) >> 16);
    VAR_23 = VAR_23 - 257;
    VAR_30 =
 VAR_21 - ((VAR_21*VAR_23*VAR_23) >> 16);


    if (VAR_30 < 0 || VAR_30 > 127)
 FUNC_0("rightvol out of bounds");

    if (VAR_31 < 0 || VAR_31 > 127)
 FUNC_0("leftvol out of bounds");



    VAR_4[VAR_29] = &VAR_19[VAR_31*256];
    VAR_5[VAR_29] = &VAR_19[VAR_30*256];



    VAR_3[VAR_29] = VAR_20;


    return VAR_26;
}
