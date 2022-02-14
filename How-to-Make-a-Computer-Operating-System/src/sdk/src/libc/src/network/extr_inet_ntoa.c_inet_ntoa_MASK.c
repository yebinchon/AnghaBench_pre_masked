
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct in_addr {unsigned int s_addr; } ;


 int FUNC_0 (char*,int,char*,int,int,int,int) ;

char* FUNC_1( struct in_addr VAR_0 ) {
    unsigned int VAR_1;
    static char VAR_2[18];
    int VAR_3;
    uint8_t VAR_4[4];
    uint8_t* VAR_5;

    VAR_1 = VAR_0.s_addr;

    VAR_5 = (uint8_t *)&VAR_1;

    for(VAR_3 = 0; VAR_3 < 4; VAR_3++) {
        VAR_4[VAR_3] = *VAR_5++;
    }

    FUNC_0 (VAR_2, 18, "%d.%d.%d.%d", VAR_4[0], VAR_4[1], VAR_4[2], VAR_4[3]);

    return VAR_2;
}
