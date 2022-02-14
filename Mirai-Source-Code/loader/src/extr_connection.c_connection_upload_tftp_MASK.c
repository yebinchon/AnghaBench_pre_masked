
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int rdbuf_pos; int rdbuf; } ;


 char* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,char*,int) ;

int FUNC_2(struct connection *VAR_1)
{
    int VAR_2 = FUNC_1(VAR_1->rdbuf, VAR_1->rdbuf_pos, VAR_0, FUNC_0(VAR_0));

    if (VAR_2 == -1)
        return 0;

    if (FUNC_1(VAR_1->rdbuf, VAR_2, "Permission denied", 17) != -1)
        return VAR_2 * -1;

    if (FUNC_1(VAR_1->rdbuf, VAR_2, "timeout", 7) != -1)
        return VAR_2 * -1;

    if (FUNC_1(VAR_1->rdbuf, VAR_2, "illegal option", 14) != -1)
        return VAR_2 * -1;

    return VAR_2;
}
