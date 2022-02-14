
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int template ;
typedef int off_t ;


 int VAR_0 ;
 char* FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,char const*) ;
 scalar_t__ FUNC_8 (char const*) ;

int
FUNC_9(off_t VAR_2)
{
    static const char VAR_3[] = "/glfw-shared-XXXXXX";
    const char* VAR_4;
    char* VAR_5;
    int VAR_6;
    int VAR_7;

    VAR_4 = FUNC_4("XDG_RUNTIME_DIR");
    if (!VAR_4)
    {
        VAR_1 = VAR_0;
        return -1;
    }

    VAR_5 = FUNC_0(FUNC_8(VAR_4) + sizeof(VAR_3), 1);
    FUNC_7(VAR_5, VAR_4);
    FUNC_6(VAR_5, VAR_3);

    VAR_6 = FUNC_2(VAR_5);

    FUNC_3(VAR_5);

    if (VAR_6 < 0)
        return -1;
    VAR_7 = FUNC_5(VAR_6, 0, VAR_2);
    if (VAR_7 != 0)
    {
        FUNC_1(VAR_6);
        VAR_1 = VAR_7;
        return -1;
    }
    return VAR_6;
}
