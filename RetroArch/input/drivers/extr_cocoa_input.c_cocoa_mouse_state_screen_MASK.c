
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef float int16_t ;
struct TYPE_4__ {float window_pos_x; float window_pos_y; } ;
typedef TYPE_1__ cocoa_input_data_t ;




 float FUNC_0 (TYPE_1__*,unsigned int) ;
 float FUNC_1 () ;

__attribute__((used)) static int16_t FUNC_2(cocoa_input_data_t *VAR_0,
                                        unsigned VAR_1)
{
   int16_t VAR_2;

   float VAR_3 = FUNC_1();


    switch (VAR_1)
    {
        case 129:
            VAR_2 = VAR_0->window_pos_x;
            break;
        case 128:
            VAR_2 = VAR_0->window_pos_y;
            break;
        default:
            return FUNC_0(VAR_0, VAR_1);
    }


    VAR_2 *= VAR_3;

    return VAR_2;
}
