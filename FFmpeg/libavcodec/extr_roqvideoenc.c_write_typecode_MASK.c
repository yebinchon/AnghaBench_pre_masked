
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int typeSpool; int typeSpoolLength; scalar_t__ argumentSpool; scalar_t__ args; int pout; } ;
typedef TYPE_1__ CodingSpool ;


 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(CodingSpool *VAR_0, uint8_t VAR_1)
{
    VAR_0->typeSpool |= (VAR_1 & 3) << (14 - VAR_0->typeSpoolLength);
    VAR_0->typeSpoolLength += 2;
    if (VAR_0->typeSpoolLength == 16) {
        FUNC_1(VAR_0->pout, VAR_0->typeSpool);
        FUNC_0(VAR_0->pout, VAR_0->argumentSpool,
                              VAR_0->args - VAR_0->argumentSpool);
        VAR_0->typeSpoolLength = 0;
        VAR_0->typeSpool = 0;
        VAR_0->args = VAR_0->argumentSpool;
    }
}
