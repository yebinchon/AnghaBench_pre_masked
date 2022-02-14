
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(char *VAR_2, size_t VAR_3)
{

    int VAR_4 = 0;
    while (VAR_4 < VAR_3) {
        int VAR_5 = FUNC_0(VAR_1);
        if (VAR_5 == '\n') {
            VAR_2[VAR_4] = '\0';
            break;
        } else if (VAR_5 > 0 && VAR_5 < 127) {
            VAR_2[VAR_4] = VAR_5;
            ++VAR_4;
        }
        FUNC_1(10 / VAR_0);
    }
}
