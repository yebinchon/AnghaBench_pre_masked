
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int total_tftps; int total_wgets; int total_echoes; int total_successes; int total_logins; int curr_open; int total_input; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int,int,int,int,int,int,int) ;
 int FUNC_3 (int) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void *FUNC_4(void *VAR_3)
{
    uint32_t VAR_4 = 0;

    while (VAR_0)
    {

        FUNC_2("%ds\tProcessed: %d\tConns: %d\tLogins: %d\tRan: %d\tEchoes:%d Wgets: %d, TFTPs: %d\n",
               VAR_4++, FUNC_0(&VAR_1->total_input), FUNC_0(&VAR_1->curr_open), FUNC_0(&VAR_1->total_logins), FUNC_0(&VAR_1->total_successes),
               FUNC_0(&VAR_1->total_echoes), FUNC_0(&VAR_1->total_wgets), FUNC_0(&VAR_1->total_tftps));

        FUNC_1(VAR_2);
        FUNC_3(1);
    }
}
