
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
typedef int int16_t ;
struct TYPE_5__ {TYPE_1__* plane; } ;
struct TYPE_4__ {int available_lines; scalar_t__* line; } ;
typedef TYPE_2__ SwsSlice ;



__attribute__((used)) static void FUNC_0(SwsSlice *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < 4; ++VAR_3) {
        int VAR_4;
        int VAR_5 = VAR_0->plane[VAR_3].available_lines;
        for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4) {
            int VAR_6;
            int VAR_7 = VAR_2 ? VAR_1>>1: VAR_1;

            VAR_7 += 1;
            if (VAR_2)
                for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6)
                    ((int32_t*)(VAR_0->plane[VAR_3].line[VAR_4]))[VAR_6] = 1<<18;
            else
                for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6)
                    ((int16_t*)(VAR_0->plane[VAR_3].line[VAR_4]))[VAR_6] = 1<<14;
        }
    }
}
