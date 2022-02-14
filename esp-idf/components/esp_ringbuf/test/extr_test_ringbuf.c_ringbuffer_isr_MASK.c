
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BaseType_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,void*,int ,int ,int) ;
 int FUNC_2 (int ,void*,int ,int ,int) ;
 int FUNC_3 (int ,void*,int ,int ,int) ;
 int FUNC_4 (int ,void*,int ,int ,int) ;
 scalar_t__ VAR_14 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_9(void *VAR_15)
{

    FUNC_6(VAR_7, VAR_6);
    FUNC_5(VAR_7, FUNC_7());


    if (VAR_8 < VAR_1) {
        FUNC_4(VAR_9[VAR_8], (void *)VAR_14, VAR_5, 0, 1);
    }


    if (VAR_8 == VAR_4) {

        FUNC_3(VAR_9[VAR_8], (void *)VAR_14, VAR_5, 0, 1);
        VAR_8++;
    } else if (VAR_8 == VAR_2) {

        FUNC_1(VAR_9[VAR_8], (void *)VAR_14, VAR_5, 0, 1);
        VAR_8++;
    } else if (VAR_8 == VAR_3) {

        FUNC_2(VAR_9[VAR_8], (void *)VAR_14, VAR_5, 0, 1);
        VAR_8++;
    } else if (VAR_8 == VAR_1) {

        if (VAR_11 < VAR_0) {
            VAR_11++;
            VAR_8 = 0;
            return;
        } else {

            BaseType_t VAR_16 = VAR_12;
            FUNC_8(VAR_10, &VAR_16);
            if (VAR_16 == VAR_13) {
                VAR_8++;
                FUNC_0();
            }
        }
    }
}
