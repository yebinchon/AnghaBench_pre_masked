
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(void)
{
    int VAR_0 = 0;
    const char *VAR_1;

    FUNC_1("usage: ffhash [b64:]algorithm [input]...\n");
    FUNC_1("Supported hash algorithms:");
    do {
        VAR_1 = FUNC_0(VAR_0);
        if (VAR_1)
            FUNC_1(" %s", VAR_1);
        VAR_0++;
    } while(VAR_1);
    FUNC_1("\n");
}
