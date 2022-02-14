
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum AVColorTransferCharacteristic { ____Placeholder_AVColorTransferCharacteristic } AVColorTransferCharacteristic ;


 int FUNC_0 (int *,double) ;
 double FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(enum AVColorTransferCharacteristic VAR_0, uint8_t *VAR_1)
{
    double VAR_2 = FUNC_1(VAR_0);
    if (VAR_2 <= 1e-6)
        return 0;

    FUNC_0(VAR_1, 1.0 / VAR_2);
    return 1;
}
