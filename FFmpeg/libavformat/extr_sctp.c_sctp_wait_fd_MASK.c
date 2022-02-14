
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int fd; int events; int revents; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (struct pollfd*,int,int) ;

__attribute__((used)) static int FUNC_3(int VAR_3, int VAR_4)
{
    int VAR_5 = VAR_4 ? VAR_2 : VAR_1;
    struct pollfd VAR_6 = { .fd = VAR_3, .events = VAR_5, .revents = 0 };
    int VAR_7;

    VAR_7 = FUNC_2(&VAR_6, 1, 100);
    return VAR_7 < 0 ? FUNC_1() : VAR_6.revents & VAR_5 ? 0 : FUNC_0(VAR_0);
}
