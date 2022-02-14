
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (int,int*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(void *VAR_2)
{
    uint16_t VAR_3;
    uint16_t VAR_4;



    FUNC_0("Touch Sensor normal mode read, the output format is: \nTouchpad num:[raw data]\n\n");

    while (1) {
        for (int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {






            FUNC_1(VAR_5, &VAR_3);
            FUNC_0("T%d:[%4d] ", VAR_5, VAR_3);

        }
        FUNC_0("\n");
        FUNC_4(200 / VAR_1);
    }
}
