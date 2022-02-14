
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; int revents; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (struct pollfd*,int,int ) ;

int FUNC_3(int VAR_6, int VAR_7)
{
    int VAR_8 = VAR_7 ? VAR_5 : VAR_3;
    struct pollfd VAR_9 = { .fd = VAR_6, .events = VAR_8, .revents = 0 };
    int VAR_10;
    VAR_10 = FUNC_2(&VAR_9, 1, VAR_4);
    return VAR_10 < 0 ? FUNC_1() : VAR_9.revents & (VAR_8 | VAR_1 | VAR_2) ? 0 : FUNC_0(VAR_0);
}
