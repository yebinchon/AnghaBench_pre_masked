
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,size_t const,char*,char*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(char *VAR_2)
{
    struct sockaddr_un VAR_3;
    const size_t VAR_4 = sizeof(VAR_3.sun_path);
    VAR_3.sun_family = VAR_0;
    FUNC_2(VAR_3.sun_path, VAR_4, "%s", VAR_2);

    int VAR_5 = FUNC_3(VAR_0, VAR_1, 0);
    if (VAR_5 == -1) {
        FUNC_4("socket");
        FUNC_1(1);
    }

    int VAR_6 = FUNC_0(VAR_5, (struct sockaddr *)&VAR_3, sizeof VAR_3);
    if (VAR_6 == -1) {
        FUNC_4("connect");
        FUNC_1(1);
    }

    return VAR_5;
}
