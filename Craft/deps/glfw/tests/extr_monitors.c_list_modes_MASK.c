
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {float width; } ;
typedef TYPE_1__ GLFWvidmode ;
typedef int GLFWmonitor ;


 char* FUNC_0 (TYPE_1__ const*) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *,int*,int*) ;
 int FUNC_3 (int *,int*,int*) ;
 int * FUNC_4 () ;
 TYPE_1__* FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int *,int*) ;
 scalar_t__ FUNC_7 (TYPE_1__ const*,TYPE_1__ const*,int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char) ;

__attribute__((used)) static void FUNC_10(GLFWmonitor* VAR_0)
{
    int VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;
    const GLFWvidmode* VAR_7 = FUNC_5(VAR_0);
    const GLFWvidmode* VAR_8 = FUNC_6(VAR_0, &VAR_1);

    FUNC_3(VAR_0, &VAR_2, &VAR_3);
    FUNC_2(VAR_0, &VAR_4, &VAR_5);

    FUNC_8("Name: %s (%s)\n",
           FUNC_1(VAR_0),
           FUNC_4() == VAR_0 ? "primary" : "secondary");
    FUNC_8("Current mode: %s\n", FUNC_0(VAR_7));
    FUNC_8("Virtual position: %i %i\n", VAR_2, VAR_3);

    FUNC_8("Physical size: %i x %i mm (%0.2f dpi)\n",
           VAR_4, VAR_5, VAR_7->width * 25.4f / VAR_4);

    FUNC_8("Modes:\n");

    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
    {
        FUNC_8("%3u: %s", (unsigned int) VAR_6, FUNC_0(VAR_8 + VAR_6));

        if (FUNC_7(VAR_7, VAR_8 + VAR_6, sizeof(GLFWvidmode)) == 0)
            FUNC_8(" (current mode)");

        FUNC_9('\n');
    }
}
