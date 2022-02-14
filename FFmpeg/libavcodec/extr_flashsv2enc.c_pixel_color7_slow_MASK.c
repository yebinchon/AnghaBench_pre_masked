
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* colors; } ;
typedef TYPE_1__ Palette ;


 int FUNC_0 (int,unsigned int) ;

__attribute__((used)) static int FUNC_1(Palette * VAR_0, unsigned VAR_1)
{
    int VAR_2, VAR_3 = 0x7fffffff;
    int VAR_4 = -1;
    for (VAR_2 = 0; VAR_2 < 128; VAR_2++) {
        int VAR_5 = VAR_0->colors[VAR_2];
        int VAR_6 = FUNC_0(VAR_5, VAR_1);
        if (VAR_6 < VAR_3) {
            VAR_3 = VAR_6;
            VAR_4 = VAR_2;
        }
    }
    return VAR_4;
}
