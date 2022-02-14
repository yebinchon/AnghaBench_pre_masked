
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*,char const**,int) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__*,int ,int,int ) ;
 int FUNC_2 (scalar_t__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static uint16_t FUNC_3(uint8_t * VAR_3, uint16_t * VAR_4, const char * VAR_5, const char * VAR_6, const char * VAR_7, bool VAR_8, bool VAR_9)
{
    const char * VAR_10[4];
    uint16_t VAR_11 = 0;
    uint8_t VAR_12;

    if (VAR_6 == ((void*)0)) {
        return 0;
    }

    VAR_10[0] = VAR_5;
    VAR_10[1] = VAR_6;
    VAR_10[2] = VAR_7;
    VAR_10[3] = VAR_2;

    VAR_12 = FUNC_0(VAR_3, VAR_4, VAR_10 + 1, 3);
    if (!VAR_12) {
        return 0;
    }
    VAR_11 += VAR_12;

    VAR_12 = FUNC_1(VAR_3, VAR_4, VAR_0, 0, VAR_9?0:VAR_1);
    if (!VAR_12) {
        return 0;
    }
    VAR_11 += VAR_12;

    uint16_t VAR_13 = *VAR_4 - 2;
    VAR_12 = FUNC_0(VAR_3, VAR_4, VAR_10, 4);
    if (!VAR_12) {
        return 0;
    }
    FUNC_2(VAR_3, VAR_13, VAR_12);
    VAR_11 += VAR_12;
    return VAR_11;
}
