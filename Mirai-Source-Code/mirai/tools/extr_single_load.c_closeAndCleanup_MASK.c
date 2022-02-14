
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct linger {int l_onoff; scalar_t__ l_linger; } ;
typedef int linger ;
struct TYPE_2__ {int fd; scalar_t__ is_open; scalar_t__ got_prompt; scalar_t__ special; scalar_t__ success; scalar_t__ pathInd; scalar_t__ echoInd; scalar_t__* password; scalar_t__* username; scalar_t__** path; scalar_t__ state; scalar_t__ slotUsed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int ,char*,int) ;
 int FUNC_2 (int,int ) ;
 TYPE_1__* VAR_3 ;

void FUNC_3(int VAR_4)
{
    if(VAR_3[VAR_4].slotUsed && VAR_3[VAR_4].fd == VAR_4)
    {
        VAR_3[VAR_4].slotUsed = 0;
        VAR_3[VAR_4].state = 0;
        VAR_3[VAR_4].path[0][0] = 0;
        VAR_3[VAR_4].path[1][0] = 0;
        VAR_3[VAR_4].path[2][0] = 0;
        VAR_3[VAR_4].path[3][0] = 0;
        VAR_3[VAR_4].path[4][0] = 0;
        VAR_3[VAR_4].username[0] = 0;
        VAR_3[VAR_4].password[0] = 0;
        VAR_3[VAR_4].echoInd = 0;
        VAR_3[VAR_4].pathInd = 0;
        VAR_3[VAR_4].success = 0;
        VAR_3[VAR_4].special = 0;
        VAR_3[VAR_4].got_prompt = 0;

        if(VAR_3[VAR_4].is_open)
        {
            VAR_3[VAR_4].is_open = 0;

            FUNC_2(VAR_4, VAR_0);
            struct linger VAR_5;
            VAR_5.l_onoff = 1;
            VAR_5.l_linger = 0;
            FUNC_1(VAR_4, VAR_1, VAR_2, (char *) &VAR_5, sizeof(VAR_5));
            FUNC_0(VAR_4);
        }
    }
}
