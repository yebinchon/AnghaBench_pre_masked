
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FFTSample ;
typedef int FFTComplex ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int * FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(FFTComplex *VAR_2)
{
    FFTSample VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    FFTSample VAR_9 = FUNC_2(VAR_1)[1];
    FFTSample VAR_10 = FUNC_2(VAR_1)[3];

    FUNC_4(VAR_2);
    FUNC_3(VAR_2+8);
    FUNC_3(VAR_2+12);

    FUNC_1(VAR_2[0],VAR_2[4],VAR_2[8],VAR_2[12]);
    FUNC_0(VAR_2[2],VAR_2[6],VAR_2[10],VAR_2[14],VAR_0,VAR_0);
    FUNC_0(VAR_2[1],VAR_2[5],VAR_2[9],VAR_2[13],VAR_9,VAR_10);
    FUNC_0(VAR_2[3],VAR_2[7],VAR_2[11],VAR_2[15],VAR_10,VAR_9);
}
