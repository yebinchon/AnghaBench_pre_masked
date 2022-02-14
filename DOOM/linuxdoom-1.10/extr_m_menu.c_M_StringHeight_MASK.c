
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; } ;


 int FUNC_0 (int ) ;
 TYPE_1__** VAR_0 ;
 int FUNC_1 (char*) ;

int FUNC_2(char* VAR_1)
{
    int VAR_2;
    int VAR_3;
    int VAR_4 = FUNC_0(VAR_0[0]->height);

    VAR_3 = VAR_4;
    for (VAR_2 = 0;VAR_2 < FUNC_1(VAR_1);VAR_2++)
 if (VAR_1[VAR_2] == '\n')
     VAR_3 += VAR_4;

    return VAR_3;
}
