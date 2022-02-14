
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {unsigned int (* scalarproduct_int16 ) (int const*,int const*,int ) ;} ;
typedef TYPE_1__ AudioDSPContext ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int const*,int const*,int ) ;

int FUNC_2(AudioDSPContext *VAR_1, const int16_t *VAR_2)
{
    unsigned int VAR_3 = VAR_1->scalarproduct_int16(VAR_2, VAR_2, VAR_0);

    if (VAR_3 == 0)
        return 0;

    return 0x20000000 / (FUNC_0(VAR_3) >> 8);
}
