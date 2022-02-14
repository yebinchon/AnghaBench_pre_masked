
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_4__ {int ** dt_tab; } ;
struct TYPE_5__ {TYPE_1__ ST; } ;
struct TYPE_6__ {TYPE_2__ OPN; } ;
typedef int INT32 ;


 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 double FUNC_0 (double) ;
 scalar_t__** VAR_5 ;
 int* VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 double FUNC_3 (int) ;
 int* VAR_7 ;
 int* VAR_8 ;
 TYPE_3__ VAR_9 ;

__attribute__((used)) static void FUNC_4(void)
{
  signed int VAR_10,VAR_11,VAR_12;
  signed int VAR_13;
  double VAR_14,VAR_15;


  for (VAR_12=0; VAR_12<VAR_3; VAR_12++)
  {
    VAR_15 = (1<<16) / FUNC_2(2,(VAR_12+1) * (VAR_0/4.0) / 8.0);
    VAR_15 = FUNC_0(VAR_15);




    VAR_13 = (int)VAR_15;
    VAR_13 >>= 4;
    if (VAR_13&1)
      VAR_13 = (VAR_13>>1)+1;
    else
      VAR_13 = VAR_13>>1;

    VAR_13 <<= 2;


    VAR_8[ VAR_12*2 + 0 ] = VAR_13;
    VAR_8[ VAR_12*2 + 1 ] = -VAR_8[ VAR_12*2 + 0 ];






    for (VAR_11=1; VAR_11<13; VAR_11++)
    {
      VAR_8[ VAR_12*2+0 + VAR_11*2*VAR_3 ] = VAR_8[ VAR_12*2+0 ]>>VAR_11;
      VAR_8[ VAR_12*2+1 + VAR_11*2*VAR_3 ] = -VAR_8[ VAR_12*2+0 + VAR_11*2*VAR_3 ];
    }
  }


  for (VAR_11=0; VAR_11<VAR_2; VAR_11++)
  {

    VAR_15 = FUNC_3( ((VAR_11*2)+1) * VAR_1 / VAR_2 );


    if (VAR_15>0.0)
      VAR_14 = 8*FUNC_1(1.0/VAR_15)/FUNC_1(2);
    else
      VAR_14 = 8*FUNC_1(-1.0/VAR_15)/FUNC_1(2);

    VAR_14 = VAR_14 / (VAR_0/4);

    VAR_13 = (int)(2.0*VAR_14);
    if (VAR_13&1)
      VAR_13 = (VAR_13>>1)+1;
    else
      VAR_13 = VAR_13>>1;


    VAR_7[ VAR_11 ] = VAR_13*2 + (VAR_15>=0.0? 0: 1 );
  }


  for(VAR_11 = 0; VAR_11 < 8; VAR_11++)
  {
    UINT8 VAR_16;
    for (VAR_16=0; VAR_16<128; VAR_16++)
    {
      UINT8 VAR_17;
      UINT8 VAR_18;
      UINT32 VAR_19 = VAR_11;
      UINT32 VAR_20;
      UINT32 VAR_21;

      for (VAR_18=0; VAR_18<8; VAR_18++)
      {
        VAR_17 = 0;
        for (VAR_21=0; VAR_21<7; VAR_21++)
        {
          if (VAR_16 & (1<<VAR_21))
          {
            VAR_20 = VAR_21 * 8;
            VAR_17 += VAR_5[VAR_20 + VAR_19][VAR_18];
          }
        }

        VAR_6[(VAR_16*32*8) + (VAR_11*32) + VAR_18 + 0] = VAR_17;
        VAR_6[(VAR_16*32*8) + (VAR_11*32) +(VAR_18^7)+ 8] = VAR_17;
        VAR_6[(VAR_16*32*8) + (VAR_11*32) + VAR_18 +16] = -VAR_17;
        VAR_6[(VAR_16*32*8) + (VAR_11*32) +(VAR_18^7)+24] = -VAR_17;
      }
    }
  }


  for (VAR_10 = 0;VAR_10 <= 3;VAR_10++)
  {
    for (VAR_11 = 0;VAR_11 <= 31;VAR_11++)
    {
      VAR_9[VAR_10][VAR_11] = (INT32) VAR_4[VAR_10*32 + VAR_11];
      VAR_9[VAR_10+4][VAR_11] = -VAR_9[VAR_10][VAR_11];
    }
  }

}
