
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; scalar_t__ sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct server {int bind_addrs_len; int * bind_addrs; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int ) ;

int FUNC_6(struct server *VAR_7)
{
    struct sockaddr_in VAR_8;
    int VAR_9, VAR_10, VAR_11;
    BOOL VAR_12 = VAR_1;

    if ((VAR_10 = FUNC_5(VAR_0, VAR_5, 0)) == -1)
        return -1;

    VAR_8.sin_family = VAR_0;
    VAR_8.sin_port = 0;


    VAR_11 = FUNC_4() % VAR_7->bind_addrs_len;
    for (VAR_9 = 0; VAR_9 < VAR_7->bind_addrs_len; VAR_9++)
    {
        VAR_8.sin_addr.s_addr = VAR_7->bind_addrs[VAR_11];
        if (FUNC_0(VAR_10, (struct sockaddr *)&VAR_8, sizeof (struct sockaddr_in)) == -1)
        {
            if (++VAR_11 == VAR_7->bind_addrs_len)
                VAR_11 = 0;
        }
        else
        {
            VAR_12 = VAR_6;
            break;
        }
    }
    if (!VAR_12)
    {
        FUNC_1(VAR_10);



        return -1;
    }


    if (FUNC_2(VAR_10, VAR_3, FUNC_2(VAR_10, VAR_2, 0) | VAR_4) == -1)
    {



    }
    return VAR_10;
}
