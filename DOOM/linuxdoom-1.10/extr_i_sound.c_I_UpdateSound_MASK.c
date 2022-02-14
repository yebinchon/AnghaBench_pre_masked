
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__** VAR_2 ;
 scalar_t__** VAR_3 ;
 unsigned int** VAR_4 ;
 unsigned int** VAR_5 ;
 scalar_t__* VAR_6 ;
 int* VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,char*) ;
 short* VAR_9 ;
 int VAR_10 ;

void FUNC_1( void )
{
  register unsigned int VAR_11;
  register int VAR_12;
  register int VAR_13;


  signed short* VAR_14;
  signed short* VAR_15;
  signed short* VAR_16;

  int VAR_17;


  int VAR_18;



    VAR_14 = VAR_9;
    VAR_15 = VAR_9+1;
    VAR_17 = 2;



    VAR_16 = VAR_9 + VAR_1*VAR_17;




    while (VAR_14 != VAR_16)
    {

 VAR_12 = 0;
 VAR_13 = 0;




 for ( VAR_18 = 0; VAR_18 < VAR_0; VAR_18++ )
 {

     if (VAR_4[ VAR_18 ])
     {

  VAR_11 = *VAR_4[ VAR_18 ];




  VAR_12 += VAR_2[ VAR_18 ][VAR_11];
  VAR_13 += VAR_3[ VAR_18 ][VAR_11];

  VAR_7[ VAR_18 ] += VAR_6[ VAR_18 ];

  VAR_4[ VAR_18 ] += VAR_7[ VAR_18 ] >> 16;

  VAR_7[ VAR_18 ] &= 65536-1;


  if (VAR_4[ VAR_18 ] >= VAR_5[ VAR_18 ])
      VAR_4[ VAR_18 ] = 0;
     }
 }







 if (VAR_12 > 0x7fff)
     *VAR_14 = 0x7fff;
 else if (VAR_12 < -0x8000)
     *VAR_14 = -0x8000;
 else
     *VAR_14 = VAR_12;


 if (VAR_13 > 0x7fff)
     *VAR_15 = 0x7fff;
 else if (VAR_13 < -0x8000)
     *VAR_15 = -0x8000;
 else
     *VAR_15 = VAR_13;


 VAR_14 += VAR_17;
 VAR_15 += VAR_17;
    }
}
