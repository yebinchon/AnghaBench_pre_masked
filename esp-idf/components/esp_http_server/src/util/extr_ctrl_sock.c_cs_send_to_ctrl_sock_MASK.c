
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int to_addr ;
struct sockaddr_in {int sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int,void*,unsigned int,int ,struct sockaddr*,int) ;

int FUNC_3(int VAR_1, int VAR_2, void *VAR_3, unsigned int VAR_4)
{
    int VAR_5;
    struct sockaddr_in VAR_6;
    VAR_6.sin_family = VAR_0;
    VAR_6.sin_port = FUNC_0(VAR_2);
    FUNC_1("127.0.0.1", &VAR_6.sin_addr);
    VAR_5 = FUNC_2(VAR_1, VAR_3, VAR_4, 0, (struct sockaddr *)&VAR_6, sizeof(VAR_6));

    if (VAR_5 < 0) {
        return -1;
    }
    return VAR_5;
}
