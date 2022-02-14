
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {double* s; } ;
struct TYPE_6__ {double* s; } ;
struct TYPE_8__ {TYPE_2__ p2; TYPE_1__ p1; } ;
struct TYPE_9__ {TYPE_3__ p; } ;
typedef TYPE_4__ MotionVector ;



__attribute__((used)) static void FUNC_0(const MotionVector *VAR_0, double *VAR_1)
{

    double VAR_2 = VAR_0[0].p.p1.s[0];
    double VAR_3 = VAR_0[0].p.p1.s[1];
    double VAR_4 = VAR_0[1].p.p1.s[0];
    double VAR_5 = VAR_0[1].p.p1.s[1];
    double VAR_6 = VAR_0[2].p.p1.s[0];
    double VAR_7 = VAR_0[2].p.p1.s[1];


    double VAR_8 = VAR_0[0].p.p2.s[0];
    double VAR_9 = VAR_0[0].p.p2.s[1];
    double VAR_10 = VAR_0[1].p.p2.s[0];
    double VAR_11 = VAR_0[1].p.p2.s[1];
    double VAR_12 = VAR_0[2].p.p2.s[0];
    double VAR_13 = VAR_0[2].p.p2.s[1];

    double VAR_14 = 1.0 / ( VAR_2*(VAR_5-VAR_7) + VAR_4*(VAR_7-VAR_3) + VAR_6*(VAR_3-VAR_5) );

    VAR_1[0] = VAR_14 * ( VAR_8*(VAR_5-VAR_7) + VAR_10*(VAR_7-VAR_3) + VAR_12*(VAR_3-VAR_5) );
    VAR_1[1] = VAR_14 * ( VAR_8*(VAR_6-VAR_4) + VAR_10*(VAR_2-VAR_6) + VAR_12*(VAR_4-VAR_2) );
    VAR_1[2] = VAR_14 * ( VAR_8*(VAR_4*VAR_7 - VAR_6*VAR_5) + VAR_10*(VAR_6*VAR_3 - VAR_2*VAR_7) + VAR_12*(VAR_2*VAR_5 - VAR_4*VAR_3) );

    VAR_1[3] = VAR_14 * ( VAR_9*(VAR_5-VAR_7) + VAR_11*(VAR_7-VAR_3) + VAR_13*(VAR_3-VAR_5) );
    VAR_1[4] = VAR_14 * ( VAR_9*(VAR_6-VAR_4) + VAR_11*(VAR_2-VAR_6) + VAR_13*(VAR_4-VAR_2) );
    VAR_1[5] = VAR_14 * ( VAR_9*(VAR_4*VAR_7 - VAR_6*VAR_5) + VAR_11*(VAR_6*VAR_3 - VAR_2*VAR_7) + VAR_13*(VAR_2*VAR_5 - VAR_4*VAR_3) );
}
