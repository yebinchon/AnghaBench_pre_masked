
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int low; int range; int const* bytestream; int const* bytestream_end; int const* bytestream_start; } ;
typedef TYPE_1__ CABACContext ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(CABACContext *VAR_2, const uint8_t *VAR_3, int VAR_4){
    VAR_2->bytestream_start=
    VAR_2->bytestream= VAR_3;
    VAR_2->bytestream_end= VAR_3 + VAR_4;
    VAR_2->low = (*VAR_2->bytestream++)<<10;
    VAR_2->low+= ((*VAR_2->bytestream++)<<2) + 2;

    VAR_2->range= 0x1FE;
    if ((VAR_2->range<<(VAR_1+1)) < VAR_2->low)
        return VAR_0;
    return 0;
}
