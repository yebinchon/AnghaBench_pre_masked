
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static uint8_t FUNC_1(uint8_t *VAR_0) {
    uint8_t VAR_1[8], VAR_2;
    int VAR_3, VAR_4;
    FUNC_0(VAR_1, VAR_0, 8);
    for(VAR_3 = 0; VAR_3 < 7; VAR_3++) {
        for(VAR_4 = VAR_3+1; VAR_4 < 8; VAR_4++) {
            if(VAR_1[VAR_4] < VAR_1[VAR_3]) {
                VAR_2 = VAR_1[VAR_3];
                VAR_1[VAR_3] = VAR_1[VAR_4];
                VAR_1[VAR_4] = VAR_2;
            }
        }
    }
    return VAR_1[3];
}
