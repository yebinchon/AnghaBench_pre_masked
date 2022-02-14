
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vptr; } ;
struct GPU_FFT_PTR {TYPE_1__ arm; scalar_t__ vc; } ;
struct GPU_FFT_HOST {unsigned int peri_size; scalar_t__ mem_map; int peri_addr; int mem_flg; } ;
struct GPU_FFT_BASE {unsigned int volatile* peri; unsigned int peri_size; int mb; unsigned int handle; unsigned int size; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct GPU_FFT_HOST*) ;
 scalar_t__ FUNC_2 (int ,unsigned int) ;
 unsigned int FUNC_3 (int,unsigned int,int,int ) ;
 int FUNC_4 (int,unsigned int) ;
 scalar_t__ FUNC_5 (int,unsigned int) ;
 scalar_t__ FUNC_6 (int,int) ;

int FUNC_7 (
    int VAR_0,
    unsigned VAR_1,
    struct GPU_FFT_PTR *VAR_2) {

    struct GPU_FFT_HOST VAR_3;
    struct GPU_FFT_BASE *VAR_4;
    volatile unsigned *VAR_5;
    unsigned VAR_6;

    if (FUNC_1(&VAR_3)) return -5;

    if (FUNC_6(VAR_0, 1)) return -1;


    VAR_6 = FUNC_3(VAR_0, VAR_1, 4096, VAR_3.mem_flg);
    if (!VAR_6) {
        FUNC_6(VAR_0, 0);
        return -3;
    }

    VAR_5 = (volatile unsigned *) FUNC_2(VAR_3.peri_addr, VAR_3.peri_size);
    if (!VAR_5) {
        FUNC_4(VAR_0, VAR_6);
        FUNC_6(VAR_0, 0);
        return -4;
    }

    VAR_2->vc = FUNC_5(VAR_0, VAR_6);
    VAR_2->arm.vptr = FUNC_2(FUNC_0(VAR_2->vc+VAR_3.mem_map), VAR_1);

    VAR_4 = (struct GPU_FFT_BASE *) VAR_2->arm.vptr;
    VAR_4->peri = VAR_5;
    VAR_4->peri_size = VAR_3.peri_size;
    VAR_4->mb = VAR_0;
    VAR_4->handle = VAR_6;
    VAR_4->size = VAR_1;

    return 0;
}
