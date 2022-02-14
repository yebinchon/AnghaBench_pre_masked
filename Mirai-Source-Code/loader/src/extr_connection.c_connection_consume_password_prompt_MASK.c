
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int rdbuf_pos; char* rdbuf; } ;


 int FUNC_0 (char*,int,char,char*) ;
 int FUNC_1 (char*,int,char*,int) ;

int FUNC_2(struct connection *VAR_0)
{
    char *VAR_1;
    int VAR_2, VAR_3 = -1;

    for (VAR_2 = VAR_0->rdbuf_pos; VAR_2 >= 0; VAR_2--)
    {
        if (VAR_0->rdbuf[VAR_2] == ':' || VAR_0->rdbuf[VAR_2] == '>' || VAR_0->rdbuf[VAR_2] == '$' || VAR_0->rdbuf[VAR_2] == '#' || VAR_0->rdbuf[VAR_2] == '%')
        {



            VAR_3 = VAR_2;
            break;
        }
    }

    if (VAR_3 == -1)
    {
        int VAR_4;

        if ((VAR_4 = FUNC_1(VAR_0->rdbuf, VAR_0->rdbuf_pos, "assword", 7)) != -1)
            VAR_3 = VAR_4;
    }

    if (VAR_3 == -1)
        return 0;
    else
        return VAR_3;
}
