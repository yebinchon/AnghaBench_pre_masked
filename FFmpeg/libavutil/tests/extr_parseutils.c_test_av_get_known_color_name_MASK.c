
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int,int const**) ;
 int VAR_0 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(void)
{
    int VAR_1;
    const uint8_t *VAR_2;
    const char *VAR_3;

    for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); ++VAR_1) {
        VAR_3 = FUNC_1(VAR_1, &VAR_2);
        if (VAR_3)
            FUNC_2("%s -> R(%d) G(%d) B(%d) A(%d)\n",
                    VAR_3, VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3]);
        else
            FUNC_2("Color ID: %d not found\n", VAR_1);
    }
}
