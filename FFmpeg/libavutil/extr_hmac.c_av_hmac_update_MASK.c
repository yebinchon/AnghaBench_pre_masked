
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int hash; int (* update ) (int ,int const*,unsigned int) ;} ;
typedef TYPE_1__ AVHMAC ;


 int FUNC_0 (int ,int const*,unsigned int) ;

void FUNC_1(AVHMAC *VAR_0, const uint8_t *VAR_1, unsigned int VAR_2)
{
    VAR_0->update(VAR_0->hash, VAR_1, VAR_2);
}
