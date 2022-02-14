
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned short* red; unsigned short* green; unsigned short* blue; int size; } ;
typedef int GLFWmonitor ;
typedef TYPE_1__ GLFWgammaramp ;


 float VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 double FUNC_3 (double,double) ;

void FUNC_4(GLFWmonitor* VAR_2, float VAR_3)
{
    int VAR_4;
    unsigned short VAR_5[256];
    GLFWgammaramp VAR_6;

    FUNC_0();

    if (VAR_3 != VAR_3 || VAR_3 <= 0.f || VAR_3 > VAR_0)
    {
        FUNC_1(VAR_1, "Invalid gamma value");
        return;
    }

    for (VAR_4 = 0; VAR_4 < 256; VAR_4++)
    {
        double VAR_7;


        VAR_7 = VAR_4 / 255.0;

        VAR_7 = FUNC_3(VAR_7, 1.0 / VAR_3) * 65535.0 + 0.5;


        if (VAR_7 > 65535.0)
            VAR_7 = 65535.0;

        VAR_5[VAR_4] = (unsigned short) VAR_7;
    }

    VAR_6.red = VAR_5;
    VAR_6.green = VAR_5;
    VAR_6.blue = VAR_5;
    VAR_6.size = 256;

    FUNC_2(VAR_2, &VAR_6);
}
