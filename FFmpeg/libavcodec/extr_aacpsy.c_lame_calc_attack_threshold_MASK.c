
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int quality; float st_lrm; } ;


 int FUNC_0 (int,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static float FUNC_1(int VAR_1)
{

    int VAR_2 = 12, VAR_3 = 12;
    int VAR_4 = VAR_0[12].quality;
    int VAR_5 = VAR_0[12].quality;
    int VAR_6;




    for (VAR_6 = 1; VAR_6 < 13; VAR_6++) {
        if (FUNC_0(VAR_1, VAR_0[VAR_6].quality) != VAR_1) {
            VAR_3 = VAR_6;
            VAR_5 = VAR_0[VAR_6 ].quality;
            VAR_2 = VAR_6 - 1;
            VAR_4 = VAR_0[VAR_6 - 1].quality;
            break;
        }
    }


    if ((VAR_5 - VAR_1) > (VAR_1 - VAR_4))
        return VAR_0[VAR_2].st_lrm;
    return VAR_0[VAR_3].st_lrm;
}
