
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sys_timeout_handler ;
struct sys_timeouts {struct sys_timeout* next; } ;
struct sys_timeout {scalar_t__ h; void* arg; scalar_t__ time; struct sys_timeout* next; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct sys_timeout*) ;
 struct sys_timeouts* FUNC_1 () ;

void
FUNC_2(sys_timeout_handler VAR_1, void *VAR_2)
{
    struct sys_timeouts *VAR_3;
    struct sys_timeout *VAR_4, *VAR_5;

    VAR_3 = FUNC_1();

    if (VAR_3->next == ((void*)0))
        return;

    for (VAR_5 = VAR_3->next, VAR_4 = ((void*)0); VAR_5 != ((void*)0); VAR_4 = VAR_5, VAR_5 = VAR_5->next)
    {
        if ((VAR_5->h == VAR_1) && (VAR_5->arg == VAR_2))
        {


            if (VAR_4 == ((void*)0))
                VAR_3->next = VAR_5->next;
            else
                VAR_4->next = VAR_5->next;

            if (VAR_5->next != ((void*)0))
                VAR_5->next->time += VAR_5->time;
            FUNC_0(VAR_0, VAR_5);
            return;
        }
    }
    return;
}
