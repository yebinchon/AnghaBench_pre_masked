
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int URLContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int *) ;
 int FUNC_2 (int,struct sockaddr const*,int ) ;

int FUNC_3(int VAR_0, const struct sockaddr *VAR_1,
                   socklen_t VAR_2, int VAR_3, URLContext *VAR_4)
{
    int VAR_5;
    if ((VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2)) < 0)
        return VAR_5;
    if ((VAR_5 = FUNC_1(VAR_0, VAR_3, VAR_4)) < 0)
        return VAR_5;
    FUNC_0(VAR_0);
    return VAR_5;
}
