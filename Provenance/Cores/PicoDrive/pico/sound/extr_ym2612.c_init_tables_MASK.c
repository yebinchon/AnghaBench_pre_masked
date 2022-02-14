
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 double FUNC_0 (double) ;
 scalar_t__** VAR_4 ;
 int* VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 double FUNC_3 (int) ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;

__attribute__((used)) static void FUNC_4(void)
{
 signed int VAR_9,VAR_10,VAR_11,VAR_12;
 signed int VAR_13;
 double VAR_14,VAR_15;

 for (VAR_9=0; VAR_9 < 256; VAR_9++)
 {

  VAR_15 = FUNC_3( ((VAR_9*2)+1) * VAR_1 / VAR_2 );



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

  VAR_6[ VAR_9 ] = VAR_13;

 }




 for (VAR_10=0; VAR_10 < VAR_3; VAR_10++)
 {
  VAR_15 = (1<<16) / FUNC_2(2, (VAR_10+1) * (VAR_0/4.0) / 8.0);
  VAR_15 = FUNC_0(VAR_15);




  VAR_13 = (int)VAR_15;
  VAR_13 >>= 4;
  if (VAR_13&1)
   VAR_13 = (VAR_13>>1)+1;
  else
   VAR_13 = VAR_13>>1;

  VAR_13 <<= 2;
  VAR_8[ VAR_10 ] = VAR_13;

  for (VAR_9=1; VAR_9 < 13; VAR_9++)
  {
   VAR_8[ VAR_10 + VAR_9*VAR_3 ] = VAR_13 >> VAR_9;
  }
 }

 for (VAR_10=0; VAR_10 < 256; VAR_10++)
 {
  int VAR_16 = VAR_6[ VAR_10 ];

  for (VAR_11=0; VAR_11 < 2*13*VAR_3/8; VAR_11+=2)
  {
   VAR_12 = (VAR_11<<2) + VAR_16;
   if (VAR_12 >= 13*VAR_3)
     VAR_7[(VAR_11<<7) | VAR_10] = 0;
   else VAR_7[(VAR_11<<7) | VAR_10] = VAR_8[VAR_12];
  }
 }



 for(VAR_9 = 0; VAR_9 < 8; VAR_9++)
 {
  UINT8 VAR_17;
  for (VAR_17=0; VAR_17<128; VAR_17++)
  {
   UINT8 VAR_18;
   UINT8 VAR_19;
   UINT32 VAR_20 = VAR_9;
   UINT32 VAR_21;
   UINT32 VAR_22;

   for (VAR_19=0; VAR_19<8; VAR_19++)
   {
    VAR_18 = 0;
    for (VAR_22=0; VAR_22<7; VAR_22++)
    {
     if (VAR_17 & (1<<VAR_22))
     {
      VAR_21 = VAR_22 * 8;
      VAR_18 += VAR_4[VAR_21 + VAR_20][VAR_19];
     }
    }
    VAR_5[(VAR_17*32*8) + (VAR_9*32) + VAR_19 + 0] = VAR_18;
    VAR_5[(VAR_17*32*8) + (VAR_9*32) +(VAR_19^7)+ 8] = VAR_18;
    VAR_5[(VAR_17*32*8) + (VAR_9*32) + VAR_19 +16] = -VAR_18;
    VAR_5[(VAR_17*32*8) + (VAR_9*32) +(VAR_19^7)+24] = -VAR_18;
   }
  }
 }
}
