
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TransferCharacteristics {int alpha; } ;
typedef enum AVColorTransferCharacteristic { ____Placeholder_AVColorTransferCharacteristic } AVColorTransferCharacteristic ;


 int VAR_0 ;
 struct TransferCharacteristics* VAR_1 ;

__attribute__((used)) static const struct TransferCharacteristics *
    FUNC_0(enum AVColorTransferCharacteristic VAR_2)
{
    const struct TransferCharacteristics *VAR_3;

    if (VAR_2 >= VAR_0)
        return ((void*)0);
    VAR_3 = &VAR_1[VAR_2];
    if (!VAR_3->alpha)
        return ((void*)0);

    return VAR_3;
}
