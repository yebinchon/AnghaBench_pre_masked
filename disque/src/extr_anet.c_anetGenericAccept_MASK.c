
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,struct sockaddr*,int *) ;
 int FUNC_1 (char*,char*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(char *VAR_3, int VAR_4, struct sockaddr *VAR_5, socklen_t *VAR_6) {
    int VAR_7;
    while(1) {
        VAR_7 = FUNC_0(VAR_4,VAR_5,VAR_6);
        if (VAR_7 == -1) {
            if (VAR_2 == VAR_1)
                continue;
            else {
                FUNC_1(VAR_3, "accept: %s", FUNC_2(VAR_2));
                return VAR_0;
            }
        }
        break;
    }
    return VAR_7;
}
