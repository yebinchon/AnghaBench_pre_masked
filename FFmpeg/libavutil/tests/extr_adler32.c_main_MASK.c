
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,int*,int) ;
 int FUNC_2 (int *,int ,char*,int) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (char*,char*) ;

int FUNC_5(int VAR_4, char **VAR_5)
{
    int VAR_6;
    uint8_t VAR_7[VAR_1];

    FUNC_3(VAR_0);

    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
        VAR_7[VAR_6] = ((VAR_6 * VAR_6) >> 3) + 123 * VAR_6;

    if (VAR_4 > 1 && !FUNC_4(VAR_5[1], "-t")) {
        for (VAR_6 = 0; VAR_6 < 1000; VAR_6++) {
            VAR_2;
            VAR_3 = FUNC_1(1, VAR_7, VAR_1);
            FUNC_0("adler");
        }
    } else {
        VAR_3 = FUNC_1(1, VAR_7, VAR_1);
    }

    FUNC_2(((void*)0), VAR_0, "%X (expected 50E6E508)\n", VAR_3);
    return VAR_3 == 0x50e6e508 ? 0 : 1;
}
