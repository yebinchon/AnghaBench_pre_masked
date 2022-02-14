
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (char const* const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int*,char const* const,int,int *) ;
 int FUNC_3 (char*,char const* const,...) ;

__attribute__((used)) static void FUNC_4(void)
{
    int VAR_1;
    uint8_t VAR_2[4];
    static const char *const VAR_3[] = {
        "bikeshed",
        "RaNdOm",
        "foo",
        "red",
        "Red ",
        "RED",
        "Violet",
        "Yellow",
        "Red",
        "0x000000",
        "0x0000000",
        "0xff000000",
        "0x3e34ff",
        "0x3e34ffaa",
        "0xffXXee",
        "0xfoobar",
        "0xffffeeeeeeee",
        "#ff0000",
        "#ffXX00",
        "ff0000",
        "ffXX00",
        "red@foo",
        "random@10",
        "0xff0000@1.0",
        "red@",
        "red@0xfff",
        "red@0xf",
        "red@2",
        "red@0.1",
        "red@-1",
        "red@0.5",
        "red@1.0",
        "red@256",
        "red@10foo",
        "red@-1.0",
        "red@-0.0",
    };

    FUNC_1(VAR_0);

    for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_3); VAR_1++) {
        if (FUNC_2(VAR_2, VAR_3[VAR_1], -1, ((void*)0)) >= 0)
            FUNC_3("%s -> R(%d) G(%d) B(%d) A(%d)\n",
                   VAR_3[VAR_1], VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3]);
        else
            FUNC_3("%s -> error\n", VAR_3[VAR_1]);
    }
}
