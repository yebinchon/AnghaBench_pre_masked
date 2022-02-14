
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int arch; } ;
struct connection {int rdbuf_pos; int fd; TYPE_1__ info; int rdbuf; } ;


 char* VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int,char*,int) ;

int FUNC_4(struct connection *VAR_1)
{
    int VAR_2 = FUNC_3(VAR_1->rdbuf, VAR_1->rdbuf_pos, VAR_0, FUNC_2(VAR_0));

    if (VAR_2 == -1)
        return 0;

    if (FUNC_3(VAR_1->rdbuf, VAR_2, "ARMv7", 5) != -1 || FUNC_3(VAR_1->rdbuf, VAR_2, "ARMv6", 5) != -1)
    {



        FUNC_1(VAR_1->info.arch, "arm7");
    }

    return VAR_2;
}
