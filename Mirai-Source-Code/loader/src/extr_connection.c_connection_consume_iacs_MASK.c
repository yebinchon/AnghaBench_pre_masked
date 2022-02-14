
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct connection {int* rdbuf; int rdbuf_pos; int fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct connection*,int*,int) ;
 int FUNC_1 (int ,int*,int,int ) ;

int FUNC_2(struct connection *VAR_1)
{
    int VAR_2 = 0;
    uint8_t *VAR_3 = VAR_1->rdbuf;

    while (VAR_2 < VAR_1->rdbuf_pos)
    {
        int VAR_4;

        if (*VAR_3 != 0xff)
            break;
        else if (*VAR_3 == 0xff)
        {
            if (!FUNC_0(VAR_1, VAR_3, 1))
                break;
            if (VAR_3[1] == 0xff)
            {
                VAR_3 += 2;
                VAR_2 += 2;
                continue;
            }
            else if (VAR_3[1] == 0xfd)
            {
                uint8_t VAR_5[3] = {255, 251, 31};
                uint8_t VAR_6[9] = {255, 250, 31, 0, 80, 0, 24, 255, 240};

                if (!FUNC_0(VAR_1, VAR_3, 2))
                    break;
                if (VAR_3[2] != 31)
                    goto iac_wont;

                VAR_3 += 3;
                VAR_2 += 3;

                FUNC_1(VAR_1->fd, VAR_5, 3, VAR_0);
                FUNC_1(VAR_1->fd, VAR_6, 9, VAR_0);
            }
            else
            {
                iac_wont:

                if (!FUNC_0(VAR_1, VAR_3, 2))
                    break;

                for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
                {
                    if (VAR_3[VAR_4] == 0xfd)
                        VAR_3[VAR_4] = 0xfc;
                    else if (VAR_3[VAR_4] == 0xfb)
                        VAR_3[VAR_4] = 0xfd;
                }

                FUNC_1(VAR_1->fd, VAR_3, 3, VAR_0);
                VAR_3 += 3;
                VAR_2 += 3;
            }
        }
    }

    return VAR_2;
}
