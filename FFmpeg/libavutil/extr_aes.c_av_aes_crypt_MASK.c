
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int rounds; int (* crypt ) (TYPE_1__*,int *,int const*,int,int *,int ) ;} ;
typedef TYPE_1__ AVAES ;


 int FUNC_0 (TYPE_1__*,int *,int const*,int,int *,int ) ;

void FUNC_1(AVAES *VAR_0, uint8_t *VAR_1, const uint8_t *VAR_2,
                  int VAR_3, uint8_t *VAR_4, int VAR_5)
{
    VAR_0->crypt(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_0->rounds);
}
