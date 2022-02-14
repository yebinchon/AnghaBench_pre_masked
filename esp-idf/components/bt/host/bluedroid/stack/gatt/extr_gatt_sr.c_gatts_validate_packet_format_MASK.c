
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tGATT_STATUS ;
struct TYPE_4__ {scalar_t__ len; } ;
typedef TYPE_1__ tBT_UUID ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,scalar_t__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int,scalar_t__**) ;

__attribute__((used)) static tGATT_STATUS FUNC_4(UINT8 VAR_7, UINT16 *VAR_8,
        UINT8 **VAR_9, tBT_UUID *VAR_10,
        UINT16 *VAR_11, UINT16 *VAR_12)
{
    tGATT_STATUS VAR_13 = VAR_6;
    UINT16 VAR_14, VAR_15 = 0, VAR_16 = 0;
    UINT16 VAR_17 = *VAR_8;
    UINT8 *VAR_18 = *VAR_9;

    if (VAR_17 >= 4) {

        FUNC_2(VAR_15, VAR_18);
        FUNC_2(VAR_16, VAR_18);
        VAR_17 -= 4;

        if (VAR_15 > VAR_16 || !FUNC_0(VAR_15) || !FUNC_0(VAR_16)) {
            VAR_13 = VAR_1;
        }

        else if (VAR_7 == VAR_4 ||
                 VAR_7 == VAR_3 ||
                 VAR_7 == VAR_5) {
            if (VAR_17 >= 2 && VAR_10 != ((void*)0)) {
                VAR_14 = (VAR_7 == VAR_3) ? 2 : VAR_17;


                if (FUNC_3 (VAR_10, VAR_14, &VAR_18) == VAR_0 ||
                        VAR_10->len == 0) {
                    FUNC_1("UUID filter does not exsit");
                    VAR_13 = VAR_2;
                } else {
                    VAR_17 -= VAR_10->len;
                }
            } else {
                VAR_13 = VAR_2;
            }
        }
    } else {
        VAR_13 = VAR_2;
    }

    *VAR_9 = VAR_18;
    *VAR_8 = VAR_17;
    *VAR_11 = VAR_15;
    *VAR_12 = VAR_16;

    return VAR_13;
}
