
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,void*,int) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int,void*,int,int) ;
 int FUNC_4 (char*,char*,int,int) ;
 TYPE_1__* VAR_1 ;

int FUNC_5(int VAR_2, void *VAR_3, int VAR_4, int VAR_5)
{
    FUNC_1(VAR_3, 0, VAR_4);
    int VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);
    if (VAR_6 > 0)
    {
        int VAR_7 = 0;
        for(VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
        {
            if (((char *)VAR_3)[VAR_7] == 0x00)
            {
                ((char *)VAR_3)[VAR_7] = 'A';
            }
        }
    }
    if (VAR_0)
    {
        char VAR_8[32] = {0};
        FUNC_4(VAR_8, "state %d - recv: %d", VAR_1[VAR_2].state, VAR_6);
        if (VAR_6 != -1)
            FUNC_0(VAR_8, VAR_3, VAR_6);
        else
            FUNC_2("%s\n", VAR_8);
    }
    return VAR_6;

}
