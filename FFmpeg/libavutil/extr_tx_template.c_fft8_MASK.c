
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int im; int re; } ;
typedef int FFTSample ;
typedef TYPE_1__ FFTComplex ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(FFTComplex *VAR_1)
{
    FFTSample VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

    FUNC_3(VAR_1);

    FUNC_0(VAR_2, VAR_1[5].re, VAR_1[4].re, -VAR_1[5].re);
    FUNC_0(VAR_3, VAR_1[5].im, VAR_1[4].im, -VAR_1[5].im);
    FUNC_0(VAR_6, VAR_1[7].re, VAR_1[6].re, -VAR_1[7].re);
    FUNC_0(VAR_7, VAR_1[7].im, VAR_1[6].im, -VAR_1[7].im);

    FUNC_1(VAR_1[0],VAR_1[2],VAR_1[4],VAR_1[6]);
    FUNC_2(VAR_1[1],VAR_1[3],VAR_1[5],VAR_1[7],VAR_0,VAR_0);
}
