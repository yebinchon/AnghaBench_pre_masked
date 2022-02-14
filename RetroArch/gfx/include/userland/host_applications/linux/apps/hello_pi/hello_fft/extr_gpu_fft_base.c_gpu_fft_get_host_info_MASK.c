
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct GPU_FFT_HOST {unsigned int peri_addr; unsigned int peri_size; int mem_flg; int mem_map; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (char*,int ) ;
 void* FUNC_2 (void*,char*) ;

int FUNC_3(struct GPU_FFT_HOST *VAR_2) {
    void *VAR_3;
    unsigned (*VAR_4) (void);
    unsigned (*VAR_5)(void);
    unsigned (*VAR_6) (void);


    VAR_2->peri_addr = 0x20000000;
    VAR_2->peri_size = 0x01000000;
    VAR_2->mem_flg = VAR_0? 0xC : 0x4;
    VAR_2->mem_map = VAR_0? 0x0 : 0x20000000;

    VAR_3 = FUNC_1("libbcm_host.so", VAR_1);
    if (!VAR_3) return -1;

    *(void **) (&VAR_4) = FUNC_2(VAR_3, "bcm_host_get_sdram_address");
    *(void **) (&VAR_5) = FUNC_2(VAR_3, "bcm_host_get_peripheral_address");
    *(void **) (&VAR_6) = FUNC_2(VAR_3, "bcm_host_get_peripheral_size");

    if (VAR_4 && VAR_4()!=0x40000000) {
        VAR_2->mem_flg = 0x4;
        VAR_2->mem_map = 0x0;
    }

    if (VAR_5) VAR_2->peri_addr = VAR_5();
    if (VAR_6) VAR_2->peri_size = VAR_6();

    FUNC_0(VAR_3);
    return 0;
}
