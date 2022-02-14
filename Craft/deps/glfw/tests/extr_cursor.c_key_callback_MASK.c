
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;
 int ** VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_6(GLFWwindow* VAR_11, int VAR_12, int VAR_13, int VAR_14, int VAR_15)
{
    if (VAR_14 != VAR_4)
        return;

    switch (VAR_12)
    {
        case 135:
        {
            VAR_6 = !VAR_6;
            if (!VAR_6)
                FUNC_1(VAR_11, ((void*)0));

            break;
        }

        case 133:
        {
            if (FUNC_0(VAR_11, VAR_0) != VAR_1)
            {
                FUNC_3(VAR_11, VAR_5);
                break;
            }


        }

        case 131:
            FUNC_2(VAR_11, VAR_0, VAR_3);
            FUNC_5("(( cursor is normal ))\n");
            break;

        case 134:
            FUNC_2(VAR_11, VAR_0, VAR_1);
            FUNC_5("(( cursor is disabled ))\n");
            break;

        case 132:
            FUNC_2(VAR_11, VAR_0, VAR_2);
            FUNC_5("(( cursor is hidden ))\n");
            break;

        case 130:
            VAR_8 = 1 - VAR_8;
            FUNC_5("(( swap interval: %i ))\n", VAR_8);
            FUNC_4(VAR_8);
            break;

        case 128:
            VAR_10 = !VAR_10;
            FUNC_5("(( %sing for events ))\n", VAR_10 ? "wait" : "poll");
            break;

        case 129:
            VAR_9 = !VAR_9;
            break;

        case 142:
            FUNC_1(VAR_11, ((void*)0));
            break;

        case 141:
            FUNC_1(VAR_11, VAR_7[0]);
            break;

        case 140:
            FUNC_1(VAR_11, VAR_7[1]);
            break;

        case 139:
            FUNC_1(VAR_11, VAR_7[2]);
            break;

        case 138:
            FUNC_1(VAR_11, VAR_7[3]);
            break;

        case 137:
            FUNC_1(VAR_11, VAR_7[4]);
            break;

        case 136:
            FUNC_1(VAR_11, VAR_7[5]);
            break;
    }
}
