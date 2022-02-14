
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char const*,int) ;

__attribute__((used)) static const char * FUNC_7(int VAR_2)
{
    static char VAR_3[256];
    const char *VAR_4;
    int VAR_5 = FUNC_5(VAR_1);


    if (!VAR_5)
        if (FUNC_2(VAR_1) == -1)
        {
            FUNC_0(VAR_0, "Couldn't init SDL joystick subsystem: %s", FUNC_1() );
            return ((void*)0);
        }


    VAR_4 = FUNC_3(VAR_2);


    if (VAR_4 != ((void*)0))
    {
        FUNC_6(VAR_3, VAR_4, 255);
        VAR_3[255] = 0;
    }


    if (!VAR_5)
        FUNC_4(VAR_1);


    if (VAR_4 == ((void*)0))
        return ((void*)0);
    else
        return VAR_3;
}
