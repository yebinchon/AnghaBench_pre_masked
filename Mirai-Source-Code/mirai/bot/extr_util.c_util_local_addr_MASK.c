
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int ipv4_t ;
typedef int addr ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct sockaddr*,int) ;
 int VAR_2 ;
 int FUNC_3 (int,struct sockaddr*,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,int ,int ) ;

ipv4_t FUNC_7(void)
{
    int VAR_3;
    struct sockaddr_in VAR_4;
    socklen_t VAR_5 = sizeof (VAR_4);

    VAR_2 = 0;
    if ((VAR_3 = FUNC_6(VAR_0, VAR_1, 0)) == -1)
    {



        return 0;
    }

    VAR_4.sin_family = VAR_0;
    VAR_4.sin_addr.s_addr = FUNC_0(8,8,8,8);
    VAR_4.sin_port = FUNC_4(53);

    FUNC_2(VAR_3, (struct sockaddr *)&VAR_4, sizeof (struct sockaddr_in));

    FUNC_3(VAR_3, (struct sockaddr *)&VAR_4, &VAR_5);
    FUNC_1(VAR_3);
    return VAR_4.sin_addr.s_addr;
}
