
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int rmt_item32_t ;
typedef int * RingbufHandle_t ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,size_t,int *,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int **) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int *,void*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,size_t*,int) ;

__attribute__((used)) static void FUNC_8(void *VAR_2)
{
    int VAR_3 = VAR_1;
    FUNC_2();
    RingbufHandle_t VAR_4 = ((void*)0);

    FUNC_3(VAR_3, &VAR_4);
    FUNC_4(VAR_3, 1);
    while(VAR_4) {
        size_t VAR_5 = 0;



        rmt_item32_t* VAR_6 = (rmt_item32_t*) FUNC_7(VAR_4, &VAR_5, 1000);
        if(VAR_6) {
            uint16_t VAR_7;
            uint16_t VAR_8;
            int VAR_9 = 0;
            while(1) {

                int VAR_10 = FUNC_1(VAR_6 + VAR_9, VAR_5 / 4 - VAR_9, &VAR_7, &VAR_8);
                if(VAR_10 > 0) {
                    VAR_9 += VAR_10 + 1;
                    FUNC_0(VAR_0, "RMT RCV --- addr: 0x%04x cmd: 0x%04x", VAR_7, VAR_8);
                } else {
                    break;
                }
            }

            FUNC_5(VAR_4, (void*) VAR_6);
        } else {
            break;
        }
    }
    FUNC_6(((void*)0));
}
