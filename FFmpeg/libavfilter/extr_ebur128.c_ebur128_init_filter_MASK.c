
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* d; scalar_t__ samplerate; } ;
struct TYPE_4__ {double* b; double* a; double** v; } ;
typedef TYPE_2__ FFEBUR128State ;


 double VAR_0 ;
 double FUNC_0 (double,double) ;
 double FUNC_1 (double) ;

__attribute__((used)) static void FUNC_2(FFEBUR128State * VAR_1)
{
    int VAR_2, VAR_3;

    double VAR_4 = 1681.974450955533;
    double VAR_5 = 3.999843853973347;
    double VAR_6 = 0.7071752369554196;

    double VAR_7 = FUNC_1(VAR_0 * VAR_4 / (double) VAR_1->samplerate);
    double VAR_8 = FUNC_0(10.0, VAR_5 / 20.0);
    double VAR_9 = FUNC_0(VAR_8, 0.4996667741545416);

    double VAR_10[3] = { 0.0, 0.0, 0.0 };
    double VAR_11[3] = { 1.0, 0.0, 0.0 };
    double VAR_12[3] = { 1.0, -2.0, 1.0 };
    double VAR_13[3] = { 1.0, 0.0, 0.0 };

    double VAR_14 = 1.0 + VAR_7 / VAR_6 + VAR_7 * VAR_7;
    VAR_10[0] = (VAR_8 + VAR_9 * VAR_7 / VAR_6 + VAR_7 * VAR_7) / VAR_14;
    VAR_10[1] = 2.0 * (VAR_7 * VAR_7 - VAR_8) / VAR_14;
    VAR_10[2] = (VAR_8 - VAR_9 * VAR_7 / VAR_6 + VAR_7 * VAR_7) / VAR_14;
    VAR_11[1] = 2.0 * (VAR_7 * VAR_7 - 1.0) / VAR_14;
    VAR_11[2] = (1.0 - VAR_7 / VAR_6 + VAR_7 * VAR_7) / VAR_14;

    VAR_4 = 38.13547087602444;
    VAR_6 = 0.5003270373238773;
    VAR_7 = FUNC_1(VAR_0 * VAR_4 / (double) VAR_1->samplerate);

    VAR_13[1] = 2.0 * (VAR_7 * VAR_7 - 1.0) / (1.0 + VAR_7 / VAR_6 + VAR_7 * VAR_7);
    VAR_13[2] = (1.0 - VAR_7 / VAR_6 + VAR_7 * VAR_7) / (1.0 + VAR_7 / VAR_6 + VAR_7 * VAR_7);

    VAR_1->d->b[0] = VAR_10[0] * VAR_12[0];
    VAR_1->d->b[1] = VAR_10[0] * VAR_12[1] + VAR_10[1] * VAR_12[0];
    VAR_1->d->b[2] = VAR_10[0] * VAR_12[2] + VAR_10[1] * VAR_12[1] + VAR_10[2] * VAR_12[0];
    VAR_1->d->b[3] = VAR_10[1] * VAR_12[2] + VAR_10[2] * VAR_12[1];
    VAR_1->d->b[4] = VAR_10[2] * VAR_12[2];

    VAR_1->d->a[0] = VAR_11[0] * VAR_13[0];
    VAR_1->d->a[1] = VAR_11[0] * VAR_13[1] + VAR_11[1] * VAR_13[0];
    VAR_1->d->a[2] = VAR_11[0] * VAR_13[2] + VAR_11[1] * VAR_13[1] + VAR_11[2] * VAR_13[0];
    VAR_1->d->a[3] = VAR_11[1] * VAR_13[2] + VAR_11[2] * VAR_13[1];
    VAR_1->d->a[4] = VAR_11[2] * VAR_13[2];

    for (VAR_2 = 0; VAR_2 < 5; ++VAR_2) {
        for (VAR_3 = 0; VAR_3 < 5; ++VAR_3) {
            VAR_1->d->v[VAR_2][VAR_3] = 0.0;
        }
    }
}
