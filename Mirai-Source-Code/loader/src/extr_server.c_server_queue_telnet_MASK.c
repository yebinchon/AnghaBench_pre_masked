
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct telnet_info {int dummy; } ;
struct server {scalar_t__ max_open; int curr_open; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct server*,struct telnet_info*) ;
 int FUNC_4 (int) ;

void FUNC_5(struct server *VAR_0, struct telnet_info *VAR_1)
{
    while (FUNC_0(&VAR_0->curr_open) >= VAR_0->max_open)
    {
        FUNC_4(1);
    }
    FUNC_1(&VAR_0->curr_open);

    if (VAR_0 == ((void*)0))
        FUNC_2("srv == NULL 3\n");

    FUNC_3(VAR_0, VAR_1);
}
