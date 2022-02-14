
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_slices; int ** slices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int,unsigned char*,int) ;
 int FUNC_5 (int *,char*,unsigned char) ;
 int FUNC_6 (int *) ;

int FUNC_7(char *VAR_4)
{

    int VAR_5, VAR_6 = 0, VAR_7 = 0, VAR_8, VAR_9 = 0;
    unsigned char VAR_10;

    if ((VAR_5 = FUNC_3(VAR_4, VAR_2)) == -1)
        return -1;
    while ((VAR_7 = FUNC_4(VAR_5, &VAR_10, 1)) > 0) VAR_6++;
    FUNC_2(VAR_5);

    VAR_3.num_slices = FUNC_1(VAR_6 / (float)VAR_0);
    VAR_3.slices = FUNC_0(VAR_3.num_slices, sizeof(unsigned char *));
    if (VAR_3.slices == ((void*)0))
        return -1;

    for (VAR_8 = 0; VAR_8 < VAR_3.num_slices; VAR_8++)
    {
        VAR_3.slices[VAR_8] = FUNC_0(1, VAR_1 + 1);
        if (VAR_3.slices[VAR_8] == ((void*)0))
            return -1;
    }

    if ((VAR_5 = FUNC_3(VAR_4, VAR_2)) == -1)
        return -1;
    do
    {
        for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
        {
            VAR_7 = FUNC_4(VAR_5, &VAR_10, 1);
            if (VAR_7 != 1) break;

            FUNC_5(VAR_3.slices[VAR_9] + FUNC_6(VAR_3.slices[VAR_9]), "\\\\x%02X", VAR_10);
        }

        VAR_9++;
    } while(VAR_7 > 0);
    FUNC_2(VAR_5);

    return 0;
}
