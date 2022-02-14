
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int sa ;
typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,struct sockaddr*,int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sockaddr_un*,int ,int) ;
 int FUNC_4 (int ,char*,int) ;

int FUNC_5(char *VAR_2, char *VAR_3, mode_t VAR_4, int VAR_5)
{
    int VAR_6;
    struct sockaddr_un VAR_7;

    if ((VAR_6 = FUNC_0(VAR_2,VAR_0)) == VAR_1)
        return VAR_1;

    FUNC_3(&VAR_7,0,sizeof(VAR_7));
    VAR_7.sun_family = VAR_0;
    FUNC_4(VAR_7.sun_path,VAR_3,sizeof(VAR_7.sun_path)-1);
    if (FUNC_1(VAR_2,VAR_6,(struct sockaddr*)&VAR_7,sizeof(VAR_7),VAR_5) == VAR_1)
        return VAR_1;
    if (VAR_4)
        FUNC_2(VAR_7.sun_path, VAR_4);
    return VAR_6;
}
