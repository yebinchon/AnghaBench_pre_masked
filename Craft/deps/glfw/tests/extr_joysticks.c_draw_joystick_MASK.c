
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int axis_count; float* axes; int button_count; scalar_t__* buttons; } ;
typedef TYPE_1__ Joystick ;


 int FUNC_0 (float,float,float) ;
 int FUNC_1 (int,int,int,int) ;

__attribute__((used)) static void FUNC_2(Joystick* VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;
    const int VAR_6 = 3 * VAR_4 / 4;
    const int VAR_7 = VAR_4 / 4;

    if (VAR_0->axis_count)
    {
        const int VAR_8 = VAR_3 / VAR_0->axis_count;

        for (VAR_5 = 0; VAR_5 < VAR_0->axis_count; VAR_5++)
        {
            float VAR_9 = VAR_0->axes[VAR_5] / 2.f + 0.5f;

            FUNC_0(0.3f, 0.3f, 0.3f);
            FUNC_1(VAR_1 + VAR_5 * VAR_8,
                    VAR_2,
                    VAR_1 + (VAR_5 + 1) * VAR_8,
                    VAR_2 + VAR_6);

            FUNC_0(1.f, 1.f, 1.f);
            FUNC_1(VAR_1 + VAR_5 * VAR_8,
                    VAR_2 + (int) (VAR_9 * (VAR_6 - 5)),
                    VAR_1 + (VAR_5 + 1) * VAR_8,
                    VAR_2 + 5 + (int) (VAR_9 * (VAR_6 - 5)));
        }
    }

    if (VAR_0->button_count)
    {
        const int VAR_10 = VAR_3 / VAR_0->button_count;

        for (VAR_5 = 0; VAR_5 < VAR_0->button_count; VAR_5++)
        {
            if (VAR_0->buttons[VAR_5])
                FUNC_0(1.f, 1.f, 1.f);
            else
                FUNC_0(0.3f, 0.3f, 0.3f);

            FUNC_1(VAR_1 + VAR_5 * VAR_10,
                    VAR_2 + VAR_6,
                    VAR_1 + (VAR_5 + 1) * VAR_10,
                    VAR_2 + VAR_6 + VAR_7);
        }
    }
}
