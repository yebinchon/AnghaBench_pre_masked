
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {scalar_t__ device; } ;
struct TYPE_4__ {scalar_t__ inPos; scalar_t__ inData; } ;
typedef TYPE_1__ JpegDev ;
typedef TYPE_2__ JDEC ;


 int FUNC_0 (int *,scalar_t__,int ) ;

__attribute__((used)) static uint16_t FUNC_1(JDEC *VAR_0, uint8_t *VAR_1, uint16_t VAR_2)
{

    JpegDev *VAR_3 = (JpegDev *)VAR_0->device;
    if (VAR_1 != ((void*)0)) {
        FUNC_0(VAR_1, VAR_3->inData + VAR_3->inPos, VAR_2);
    }
    VAR_3->inPos += VAR_2;
    return VAR_2;
}
