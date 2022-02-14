
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (struct sockaddr_in*,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;

int FUNC_6(int VAR_3)
{
    int VAR_4 = FUNC_5(VAR_0, VAR_2, VAR_1);
    if (VAR_4 < 0) {
        return -1;
    }

    int VAR_5;
    struct sockaddr_in VAR_6;
    FUNC_4(&VAR_6, 0, sizeof(VAR_6));
    VAR_6.sin_family = VAR_0;
    VAR_6.sin_port = FUNC_2(VAR_3);
    FUNC_3("127.0.0.1", &VAR_6.sin_addr);
    VAR_5 = FUNC_0(VAR_4, (struct sockaddr *)&VAR_6, sizeof(VAR_6));
    if (VAR_5 < 0) {
        FUNC_1(VAR_4);
        return -1;
    }
    return VAR_4;
}
