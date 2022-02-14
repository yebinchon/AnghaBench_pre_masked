
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int si_other ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (int,char*,int ,int ,struct sockaddr*,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int) ;

int FUNC_11(void)
{
    struct sockaddr_in VAR_6;
    int VAR_7, VAR_8, VAR_9=sizeof(VAR_6);

    if ( (VAR_7=FUNC_8(VAR_0, VAR_4, VAR_1)) == -1)
    {
        FUNC_1("socket");
    }

    FUNC_6((char *) &VAR_6, 0, sizeof(VAR_6));
    VAR_6.sin_family = VAR_0;
    VAR_6.sin_port = FUNC_4(VAR_2);

    if (FUNC_5(VAR_3 , &VAR_6.sin_addr) == 0)
    {
        FUNC_3(VAR_5, "inet_aton() failed\n");
        FUNC_2(1);
    }
    while(1)
    {

        char VAR_10[10]="128";

        if (FUNC_7(VAR_7, VAR_10, FUNC_9(VAR_10) , 0 , (struct sockaddr *) &VAR_6, VAR_9)==-1)
        {
            FUNC_1("sendto()");
        }

        FUNC_10(16*1000);

    }

    FUNC_0(VAR_7);
    return 0;
}
