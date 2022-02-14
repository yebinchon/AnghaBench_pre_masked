
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(uint8_t *VAR_6, uint16_t VAR_7, uint16_t VAR_8) {
    int VAR_9;
    bool VAR_10 = 1;

    VAR_0;
    FUNC_2(VAR_3);
    VAR_1;
    FUNC_2(VAR_2);
    FUNC_1(VAR_5, 1);

    VAR_10 &= FUNC_1(0xA0, 1);
    VAR_10 &= FUNC_1(VAR_4, 1);
    VAR_10 &= FUNC_1(VAR_7 >> 8, 1);
    VAR_10 &= FUNC_1(VAR_7 & 0xFF, 1);

    for(VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
        VAR_10 &= FUNC_0( VAR_6+VAR_9, VAR_9 != (VAR_8-1) );
    }
    return VAR_10;
}
