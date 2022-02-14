
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char,int ) ;
 int FUNC_2 (char const*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(char* VAR_3, size_t VAR_4, const char* VAR_5) {

    FUNC_2(VAR_5, VAR_2);
    int VAR_6 = 0;
    while (VAR_6 < VAR_4) {
        int VAR_7 = FUNC_0(VAR_1);
        if (VAR_7 == '\n') {
            break;
        } else if (VAR_7 >= 0x1c && VAR_7 <= 0x1f){
            continue;
        } else if (VAR_7 == VAR_0 || VAR_7 == 0x8) {
            if (VAR_6 > 0) {
                VAR_3[VAR_6 - 1] = 0;
                VAR_6 --;
            }
            FUNC_2("\x08 ", VAR_2);
        } else {
            VAR_3[VAR_6] = VAR_7;
            ++VAR_6;
        }
        FUNC_1(VAR_7, VAR_2);
    }
    FUNC_1('\n', VAR_2);
    return VAR_6;
}
