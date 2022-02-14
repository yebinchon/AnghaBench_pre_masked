
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {char* hostname; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*,char const**,int) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__*,int ,int,int ) ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (scalar_t__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (scalar_t__*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static uint16_t FUNC_5(uint8_t * VAR_6, uint16_t * VAR_7, uint8_t * VAR_8, bool VAR_9, bool VAR_10)
{
    const char * VAR_11[2];
    uint16_t VAR_12 = 0;
    uint8_t VAR_13;

    VAR_11[0] = VAR_5->hostname;
    VAR_11[1] = VAR_3;

    if (FUNC_3(VAR_11[0])) {
        return 0;
    }


    VAR_13 = FUNC_0(VAR_6, VAR_7, VAR_11, 2);
    if (!VAR_13) {
        return 0;
    }
    VAR_12 += VAR_13;

    VAR_13 = FUNC_1(VAR_6, VAR_7, VAR_0, VAR_9, VAR_10?0:VAR_2);
    if (!VAR_13) {
        return 0;
    }
    VAR_12 += VAR_13;

    uint16_t VAR_14 = *VAR_7 - 2;

    if ((*VAR_7 + VAR_1) > VAR_4) {
        return 0;
    }

    VAR_13 = VAR_1;
    FUNC_4(VAR_6 + *VAR_7, VAR_8, VAR_13);
    *VAR_7 += VAR_13;
    FUNC_2(VAR_6, VAR_14, VAR_13);
    VAR_12 += VAR_13;
    return VAR_12;
}
