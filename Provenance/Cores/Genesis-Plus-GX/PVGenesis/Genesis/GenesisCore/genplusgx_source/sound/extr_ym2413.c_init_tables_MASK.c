
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 double FUNC_0 (double) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 double FUNC_3 (int) ;
 int* VAR_6 ;
 int* VAR_7 ;

__attribute__((used)) static int FUNC_4(void)
{
  signed int VAR_8,VAR_9;
  signed int VAR_10;
  double VAR_11,VAR_12;

  for (VAR_9=0; VAR_9<VAR_4; VAR_9++)
  {
    VAR_12 = (1<<16) / FUNC_2(2, (VAR_9+1) * (VAR_0/4.0) / 8.0);
    VAR_12 = FUNC_0(VAR_12);




    VAR_10 = (int)VAR_12;
    VAR_10 >>= 4;
    if (VAR_10&1)
      VAR_10 = (VAR_10>>1)+1;
    else
      VAR_10 = VAR_10>>1;

    VAR_7[ VAR_9*2 + 0 ] = VAR_10;
    VAR_7[ VAR_9*2 + 1 ] = -VAR_7[ VAR_9*2 + 0 ];

    for (VAR_8=1; VAR_8<11; VAR_8++)
    {
      VAR_7[ VAR_9*2+0 + VAR_8*2*VAR_4 ] = VAR_7[ VAR_9*2+0 ]>>VAR_8;
      VAR_7[ VAR_9*2+1 + VAR_8*2*VAR_4 ] = -VAR_7[ VAR_9*2+0 + VAR_8*2*VAR_4 ];
    }
  }

  for (VAR_8=0; VAR_8<VAR_3; VAR_8++)
  {

    VAR_12 = FUNC_3( ((VAR_8*2)+1) * VAR_1 / VAR_3 );



    if (VAR_12>0.0)
      VAR_11 = 8*FUNC_1(1.0/VAR_12)/FUNC_1(2);
    else
      VAR_11 = 8*FUNC_1(-1.0/VAR_12)/FUNC_1(2);

    VAR_11 = VAR_11 / (VAR_0/4);

    VAR_10 = (int)(2.0*VAR_11);
    if (VAR_10&1)
      VAR_10 = (VAR_10>>1)+1;
    else
      VAR_10 = VAR_10>>1;


    VAR_6[ VAR_8 ] = VAR_10*2 + (VAR_12>=0.0? 0: 1 );




    if (VAR_8 & (1<<(VAR_2-1)) )
      VAR_6[1*VAR_3+VAR_8] = VAR_5;
    else
      VAR_6[1*VAR_3+VAR_8] = VAR_6[VAR_8];
  }

  return 1;
}
