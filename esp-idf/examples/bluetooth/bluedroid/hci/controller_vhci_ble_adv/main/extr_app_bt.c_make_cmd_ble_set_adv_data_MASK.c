
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;


 int FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__*,int ) ;
 int FUNC_2 (scalar_t__*,scalar_t__) ;
 int FUNC_3 (scalar_t__*,int ,scalar_t__) ;

__attribute__((used)) static uint16_t FUNC_4(uint8_t *VAR_4, uint8_t VAR_5, uint8_t *VAR_6)
{
    FUNC_2 (VAR_4, VAR_0);
    FUNC_1 (VAR_4, VAR_2);
    FUNC_2 (VAR_4, VAR_1 + 1);

    FUNC_3(VAR_4, 0, VAR_1);

    if (VAR_6 != ((void*)0) && VAR_5 > 0) {
        if (VAR_5 > VAR_1) {
            VAR_5 = VAR_1;
        }

        FUNC_2 (VAR_4, VAR_5);

        FUNC_0 (VAR_4, VAR_6, VAR_5);
    }
    return VAR_3 + VAR_1 + 1;
}
