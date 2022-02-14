
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {char* hostname; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*,char const**,int) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__*,int ,int,int ) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (scalar_t__*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static uint16_t FUNC_5(uint8_t * VAR_5, uint16_t * VAR_6, uint32_t VAR_7, bool VAR_8, bool VAR_9)
{
    const char * VAR_10[2];
    uint16_t VAR_11 = 0;
    uint8_t VAR_12;

    VAR_10[0] = VAR_4->hostname;
    VAR_10[1] = VAR_2;

    if (FUNC_4(VAR_10[0])) {
        return 0;
    }


    VAR_12 = FUNC_0(VAR_5, VAR_6, VAR_10, 2);
    if (!VAR_12) {
        return 0;
    }
    VAR_11 += VAR_12;

    VAR_12 = FUNC_1(VAR_5, VAR_6, VAR_0, VAR_8, VAR_9?0:VAR_1);
    if (!VAR_12) {
        return 0;
    }
    VAR_11 += VAR_12;

    uint16_t VAR_13 = *VAR_6 - 2;

    if ((*VAR_6 + 3) >= VAR_3) {
        return 0;
    }
    FUNC_2(VAR_5, VAR_6, VAR_7 & 0xFF);
    FUNC_2(VAR_5, VAR_6, (VAR_7 >> 8) & 0xFF);
    FUNC_2(VAR_5, VAR_6, (VAR_7 >> 16) & 0xFF);
    FUNC_2(VAR_5, VAR_6, (VAR_7 >> 24) & 0xFF);
    FUNC_3(VAR_5, VAR_13, 4);

    VAR_11 += 4;
    return VAR_11;
}
