
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct GPU_FFT_BASE {int mb; unsigned int handle; unsigned int size; unsigned int peri_size; scalar_t__ peri; } ;


 int FUNC_0 (int,unsigned int) ;
 int FUNC_1 (int,unsigned int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (void*,unsigned int) ;

void FUNC_4(struct GPU_FFT_BASE *VAR_0) {
    int VAR_1 = VAR_0->mb;
    unsigned VAR_2 = VAR_0->handle, VAR_3 = VAR_0->size;
    FUNC_3((void*)VAR_0->peri, VAR_0->peri_size);
    FUNC_3((void*)VAR_0, VAR_3);
    FUNC_1(VAR_1, VAR_2);
    FUNC_0(VAR_1, VAR_2);
    FUNC_2(VAR_1, 0);
}
