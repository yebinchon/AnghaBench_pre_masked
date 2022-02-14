
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_5__ {int (* scalarproduct_int16 ) (int const*,int const*,int,int ) ;} ;
struct TYPE_4__ {int (* scalarproduct_int16 ) (int const*,int const*,int) ;} ;
typedef TYPE_1__ AudioDSPContext ;


 int FUNC_0 (int,int) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (double) ;
 int FUNC_2 (int) ;
 long long FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int const*,int const*,int,int ) ;
 int FUNC_6 (int const*,int const*,int) ;

int16_t FUNC_7(
    AudioDSPContext *VAR_1,
    int VAR_2,
    const int16_t* VAR_3,
    int VAR_4,
    const int16_t* VAR_5,
    const int16_t* VAR_6,
    int VAR_7,
    int VAR_8)
{
    int VAR_9;

    VAR_4 <<= 10;

    for(VAR_9=0; VAR_9<VAR_8; VAR_9++)
        VAR_4 += VAR_5[VAR_9] * VAR_6[VAR_9];
    VAR_4 = VAR_2 * FUNC_1((double)VAR_4 / (20 << 23)) /
                FUNC_4(VAR_1->scalarproduct_int16(VAR_3, VAR_3, VAR_7));
    return VAR_4 >> 12;

}
