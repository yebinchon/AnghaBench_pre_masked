
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int rmt_item32_t ;
typedef scalar_t__ RingbufHandle_t ;


 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,size_t,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (scalar_t__,void*) ;
 scalar_t__ FUNC_4 (scalar_t__,size_t*,int) ;

__attribute__((used)) static int FUNC_5(RingbufHandle_t VAR_1)
{
    uint16_t VAR_2 = 0;
    while(VAR_1) {
        size_t VAR_3 = 0;
        rmt_item32_t* VAR_4 = (rmt_item32_t*) FUNC_4(VAR_1, &VAR_3, 1000);
        if(VAR_4) {
            uint16_t VAR_5;
            uint16_t VAR_6;
            int VAR_7 = 0;
            while(1) {
                int VAR_8 = FUNC_2(VAR_4 + VAR_7, VAR_3 / 4 - VAR_7, &VAR_5, &VAR_6);
                if(VAR_8 > 0) {
                    VAR_7 += VAR_8 + 1;
                    FUNC_0(VAR_0, "RMT RCV --- addr: 0x%04x cmd: 0x%04x", VAR_5, VAR_6);
                    FUNC_1(VAR_6 == VAR_2);
                    VAR_2++;
                } else {
                    break;
                }
            }
            FUNC_3(VAR_1, (void*) VAR_4);
        } else {
            break;
        }
    }
    return VAR_2;
}
