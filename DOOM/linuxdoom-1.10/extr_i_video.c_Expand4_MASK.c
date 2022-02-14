
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 double* VAR_2 ;
 int VAR_3 ;

void
FUNC_1
( unsigned* VAR_4,
  double* VAR_5 )
{
    double VAR_6;
    unsigned VAR_7;
    unsigned VAR_8;
    unsigned VAR_9;
    unsigned VAR_10;
    double* VAR_11;

    VAR_11 = VAR_2;
    if (!VAR_3)
    {
 VAR_3 = 1;
 FUNC_0 ();
    }


    VAR_10 = 3*VAR_1/2;

    VAR_8 = VAR_0-1;
    do
    {
 VAR_7 = VAR_1;

 do
 {
     VAR_9 = VAR_4[0];

     VAR_6 = *(double *)( (int)VAR_11 + ( (VAR_9&0xffff0000)>>13) );
     VAR_5[0] = VAR_6;
     VAR_5[160] = VAR_6;
     VAR_5[320] = VAR_6;
     VAR_5[480] = VAR_6;

     VAR_6 = *(double *)( (int)VAR_11 + ( (VAR_9&0xffff)<<3 ) );
     VAR_5[1] = VAR_6;
     VAR_5[161] = VAR_6;
     VAR_5[321] = VAR_6;
     VAR_5[481] = VAR_6;

     VAR_9 = VAR_4[1];

     VAR_6 = *(double *)( (int)VAR_11 + ( (VAR_9&0xffff0000)>>13) );
     VAR_5[2] = VAR_6;
     VAR_5[162] = VAR_6;
     VAR_5[322] = VAR_6;
     VAR_5[482] = VAR_6;

     VAR_6 = *(double *)( (int)VAR_11 + ( (VAR_9&0xffff)<<3 ) );
     VAR_5[3] = VAR_6;
     VAR_5[163] = VAR_6;
     VAR_5[323] = VAR_6;
     VAR_5[483] = VAR_6;

     VAR_9 = VAR_4[2];

     VAR_6 = *(double *)( (int)VAR_11 + ( (VAR_9&0xffff0000)>>13) );
     VAR_5[4] = VAR_6;
     VAR_5[164] = VAR_6;
     VAR_5[324] = VAR_6;
     VAR_5[484] = VAR_6;

     VAR_6 = *(double *)( (int)VAR_11 + ( (VAR_9&0xffff)<<3 ) );
     VAR_5[5] = VAR_6;
     VAR_5[165] = VAR_6;
     VAR_5[325] = VAR_6;
     VAR_5[485] = VAR_6;

     VAR_9 = VAR_4[3];

     VAR_6 = *(double *)( (int)VAR_11 + ( (VAR_9&0xffff0000)>>13) );
     VAR_5[6] = VAR_6;
     VAR_5[166] = VAR_6;
     VAR_5[326] = VAR_6;
     VAR_5[486] = VAR_6;

     VAR_6 = *(double *)( (int)VAR_11 + ( (VAR_9&0xffff)<<3 ) );
     VAR_5[7] = VAR_6;
     VAR_5[167] = VAR_6;
     VAR_5[327] = VAR_6;
     VAR_5[487] = VAR_6;

     VAR_4+=4;
     VAR_5+=8;
 } while (VAR_7-=16);
 VAR_5 += VAR_10;
    } while (VAR_8--);
}
