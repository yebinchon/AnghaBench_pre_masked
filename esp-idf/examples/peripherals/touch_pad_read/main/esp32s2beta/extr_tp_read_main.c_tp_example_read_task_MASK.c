
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(void *VAR_4)
{
    uint32_t VAR_5;


    FUNC_2(100 / VAR_3);
    FUNC_0("Touch Sensor read, the output format is: \nTouchpad num:[raw data]\n\n");

    while (1) {
        for (int VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
            FUNC_1(VAR_1[VAR_6], &VAR_5);
            FUNC_0("T%d: [%4d] ", VAR_1[VAR_6], VAR_5);
        }
        FUNC_0("\n");
        FUNC_2(200 / VAR_2);
    }
}
