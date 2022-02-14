
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int rmt_item32_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (void*,int ,size_t) ;
 int FUNC_5 (int,int *,int,int,int) ;
 int FUNC_6 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int *,int,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(void *VAR_7)
{
    FUNC_9(10);
    FUNC_6();
    FUNC_1(VAR_2, VAR_0);
    int VAR_8 = VAR_3;
    uint16_t VAR_9 = 0x0;
    uint16_t VAR_10 = 0x11;
    int VAR_11 = VAR_4;
    for(;;) {
        FUNC_0(VAR_2, "RMT TX DATA");
        size_t VAR_12 = (sizeof(rmt_item32_t) * VAR_1 * VAR_11);

        rmt_item32_t* VAR_13 = (rmt_item32_t*) FUNC_3(VAR_12);
        int VAR_14 = VAR_1 * VAR_11;
        FUNC_4((void*) VAR_13, 0, VAR_12);
        int VAR_15, VAR_16 = 0;
        while(1) {

            VAR_15 = FUNC_5(VAR_8, VAR_13 + VAR_16, VAR_14 - VAR_16, ((~VAR_10) << 8) | VAR_10, ((~VAR_9) << 8) | VAR_9);
            if(VAR_15 < 0) {
                break;
            }
            VAR_9++;
            VAR_10++;
            VAR_16 += VAR_15;
        }

        FUNC_8(VAR_8, VAR_13, VAR_14, 1);

        FUNC_7(VAR_8, VAR_5);

        FUNC_2(VAR_13);
        FUNC_9(2000 / VAR_6);
    }
    FUNC_10(((void*)0));
}
