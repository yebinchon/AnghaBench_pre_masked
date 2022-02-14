
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int*,int,int*,int ) ;
 int* FUNC_1 (int*,int,int*) ;

__attribute__((used)) static BOOLEAN FUNC_2 (UINT8 *VAR_4 , UINT32 VAR_5, UINT8 *VAR_6,
                                 UINT16 VAR_7, int VAR_8)
{
    UINT8 *VAR_9 = VAR_4 + VAR_5;
    UINT8 VAR_10;
    UINT32 VAR_11;


    if (VAR_8 > 3) {
        return (VAR_1);
    }

    while (VAR_4 < VAR_9) {
        VAR_10 = *VAR_4++;
        VAR_4 = FUNC_1 (VAR_4, VAR_10, &VAR_11);
        VAR_10 = VAR_10 >> 3;
        if (VAR_10 == VAR_3) {
            if (FUNC_0 (VAR_4, VAR_11, VAR_6, VAR_7)) {
                return (VAR_2);
            }
        } else if (VAR_10 == VAR_0) {
            if (FUNC_2 (VAR_4, VAR_11, VAR_6, VAR_7, VAR_8 + 1)) {
                return (VAR_2);
            }
        }
        VAR_4 = VAR_4 + VAR_11;
    }


    return (VAR_1);
}
