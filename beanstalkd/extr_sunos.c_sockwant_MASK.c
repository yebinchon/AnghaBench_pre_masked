
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int added; int fd; } ;
typedef TYPE_1__ Socket ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,void*) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_4 ;

int
FUNC_2(Socket *VAR_5, int VAR_6)
{
    int VAR_7 = 0;

    if (VAR_6) {
        switch (VAR_6) {
        case 'r':
            VAR_7 |= VAR_0;
            break;
        case 'w':
            VAR_7 |= VAR_1;
            break;
        }
    }

    VAR_7 |= VAR_2;

    if (!VAR_5->added && !VAR_6) {
        return 0;
    } else if (!VAR_5->added && VAR_6) {
        VAR_5->added = 1;
        return FUNC_0(VAR_4, VAR_3, VAR_5->fd, VAR_7, (void *)VAR_5);
    } else if (!VAR_6) {
        return FUNC_1(VAR_4, VAR_3, VAR_5->fd);
    } else {
        FUNC_1(VAR_4, VAR_3, VAR_5->fd);
        return FUNC_0(VAR_4, VAR_3, VAR_5->fd, VAR_7, (void *)VAR_5);
    }
}
