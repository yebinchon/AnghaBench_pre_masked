
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {void** s; } ;
struct TYPE_7__ {double* s; } ;
struct TYPE_6__ {double* s; } ;
struct TYPE_9__ {int rotation; TYPE_3__ skew; TYPE_2__ scale; TYPE_1__ translation; } ;
typedef TYPE_4__ FrameDelta ;


 int FUNC_0 (double) ;
 int VAR_0 ;
 int FUNC_1 (double) ;
 void* FUNC_2 (double) ;
 double FUNC_3 (double,double) ;
 double FUNC_4 (double) ;

__attribute__((used)) static FrameDelta FUNC_5(double *VAR_1)
{
    FrameDelta VAR_2;

    double VAR_3 = VAR_1[0];
    double VAR_4 = VAR_1[1];
    double VAR_5 = VAR_1[2];
    double VAR_6 = VAR_1[3];
    double VAR_7 = VAR_1[4];
    double VAR_8 = VAR_1[5];
    double VAR_9 = VAR_3 * VAR_7 - VAR_6 * VAR_4;

    VAR_2.translation.s[0] = VAR_5;
    VAR_2.translation.s[1] = VAR_8;


    if (VAR_3 != 0 || VAR_6 != 0) {
        double VAR_10 = FUNC_3(VAR_3, VAR_6);

        VAR_2.rotation = FUNC_0(VAR_6) * FUNC_1(VAR_3 / VAR_10);
        VAR_2.scale.s[0] = VAR_10;
        VAR_2.scale.s[1] = VAR_9 / VAR_10;
        VAR_2.skew.s[0] = FUNC_2((VAR_3 * VAR_4 + VAR_6 * VAR_7) / (VAR_10 * VAR_10));
        VAR_2.skew.s[1] = 0;
    } else if (VAR_4 != 0 || VAR_7 != 0) {
        double VAR_11 = FUNC_4(VAR_4 * VAR_4 + VAR_7 * VAR_7);

        VAR_2.rotation = VAR_0 / 2 - FUNC_0(VAR_7) * FUNC_1(-VAR_4 / VAR_11);
        VAR_2.scale.s[0] = VAR_9 / VAR_11;
        VAR_2.scale.s[1] = VAR_11;
        VAR_2.skew.s[0] = 0;
        VAR_2.skew.s[1] = FUNC_2((VAR_3 * VAR_4 + VAR_6 * VAR_7) / (VAR_11 * VAR_11));
    }

    return VAR_2;
}
