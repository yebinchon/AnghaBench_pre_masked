
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ lsb_bits; } ;
typedef TYPE_1__ BestOffset ;



__attribute__((used)) static int FUNC_0(BestOffset *VAR_0, BestOffset *VAR_1)
{
    if (VAR_0->lsb_bits != VAR_1->lsb_bits)
        return 1;

    return 0;
}
