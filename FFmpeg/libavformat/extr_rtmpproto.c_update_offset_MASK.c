
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flv_off; int flv_size; } ;
typedef TYPE_1__ RTMPContext ;



__attribute__((used)) static int FUNC_0(RTMPContext *VAR_0, int VAR_1)
{
    int VAR_2;


    if (VAR_0->flv_off < VAR_0->flv_size) {

        VAR_2 = VAR_0->flv_size;
        VAR_0->flv_size += VAR_1;
    } else {

        VAR_2 = 0;
        VAR_0->flv_size = VAR_1;
        VAR_0->flv_off = 0;
    }

    return VAR_2;
}
