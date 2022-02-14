
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__** VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char) ;

int FUNC_3(char* VAR_3)
{
    int VAR_4;
    int VAR_5 = 0;
    int VAR_6;

    for (VAR_4 = 0;VAR_4 < FUNC_1(VAR_3);VAR_4++)
    {
 VAR_6 = FUNC_2(VAR_3[VAR_4]) - VAR_1;
 if (VAR_6 < 0 || VAR_6 >= VAR_0)
     VAR_5 += 4;
 else
     VAR_5 += FUNC_0 (VAR_2[VAR_6]->width);
    }

    return VAR_5;
}
