
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int reuse ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int,struct sockaddr const*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int,int ,int ,int*,int) ;

int FUNC_5(int VAR_3, const struct sockaddr *VAR_4,
              socklen_t VAR_5)
{
    int VAR_6;
    int VAR_7 = 1;
    if (FUNC_4(VAR_3, VAR_1, VAR_2, &VAR_7, sizeof(VAR_7))) {
        FUNC_0(((void*)0), VAR_0, "setsockopt(SO_REUSEADDR) failed\n");
    }
    VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
    if (VAR_6)
        return FUNC_2();

    VAR_6 = FUNC_3(VAR_3, 1);
    if (VAR_6)
        return FUNC_2();
    return VAR_6;
}
