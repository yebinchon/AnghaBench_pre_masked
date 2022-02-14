
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long FUNC_0 (long) ;
 int FUNC_1 (char*,char*) ;

char* FUNC_2(long VAR_0, char* VAR_1, int VAR_2) {
    if(VAR_2 < 2 || VAR_2 > 16) {
        *VAR_1 = 0;
        return VAR_1;
    }

    char* VAR_3 = VAR_1;
    long VAR_4 = FUNC_0(VAR_0);

    do {
        const long VAR_5 = VAR_4 / VAR_2;
        *VAR_3 = "0123456789abcdef"[VAR_4 - (VAR_5 * VAR_2)];
        ++VAR_3;
        VAR_4 = VAR_5;
    } while(VAR_4);


    if(VAR_0 < 0)
        *VAR_3++ = '-';

    FUNC_1(VAR_1, VAR_3);
    *VAR_3 = 0;
    return VAR_1;
}
