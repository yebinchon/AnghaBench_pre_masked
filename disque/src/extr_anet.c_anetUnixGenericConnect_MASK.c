
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
typedef int sa ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (char*,int) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,struct sockaddr*,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,char*,int) ;

int FUNC_7(char *VAR_6, char *VAR_7, int VAR_8)
{
    int VAR_9;
    struct sockaddr_un VAR_10;

    if ((VAR_9 = FUNC_0(VAR_6,VAR_0)) == VAR_2)
        return VAR_2;

    VAR_10.sun_family = VAR_0;
    FUNC_6(VAR_10.sun_path,VAR_7,sizeof(VAR_10.sun_path)-1);
    if (VAR_8 & VAR_1) {
        if (FUNC_1(VAR_6,VAR_9) != VAR_3)
            return VAR_2;
    }
    if (FUNC_4(VAR_9,(struct sockaddr*)&VAR_10,sizeof(VAR_10)) == -1) {
        if (VAR_5 == VAR_4 &&
            VAR_8 & VAR_1)
            return VAR_9;

        FUNC_2(VAR_6, "connect: %s", FUNC_5(VAR_5));
        FUNC_3(VAR_9);
        return VAR_2;
    }
    return VAR_9;
}
