
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bptr; } ;
struct GPU_FFT_PTR {unsigned int vc; TYPE_1__ arm; } ;



unsigned FUNC_0 (
    struct GPU_FFT_PTR *VAR_0,
    int VAR_1) {

    unsigned VAR_2 = VAR_0->vc;
    VAR_0->vc += VAR_1;
    VAR_0->arm.bptr += VAR_1;
    return VAR_2;
}
