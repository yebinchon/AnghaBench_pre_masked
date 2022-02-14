
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RingbufHandle_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t FUNC_1 () ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ,void*,size_t,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(RingbufHandle_t VAR_8, size_t VAR_9)
{
    for (int VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
        size_t VAR_11 = 0;
        size_t VAR_12;

        while (VAR_11 < VAR_0) {

            VAR_12 = FUNC_1() % (VAR_9 + 1);
            if (VAR_12 + VAR_11 > VAR_0) {
                VAR_12 = VAR_0 - VAR_11;
            }


            FUNC_0(FUNC_2(VAR_8, (void *)&(VAR_3[VAR_11]), VAR_12, VAR_2) == VAR_4, "Failed to send an item");
            VAR_11 += VAR_12;
        }
        FUNC_3(VAR_7);
        FUNC_4(VAR_6, VAR_5);
    }
}
