
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in {int sin_addr; int sin_family; } ;
struct in_addr {int dummy; } ;
struct hostent {scalar_t__ h_addr_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct hostent* FUNC_0 (char const*) ;
 int FUNC_1 (int *,struct in_addr*,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_3, struct sockaddr_in *VAR_4) {

    struct hostent *VAR_5;
    struct in_addr **VAR_6;
    VAR_5 = FUNC_0(VAR_3);
    if (VAR_5 == ((void*)0)) {
        return VAR_1;
    }
    VAR_6 = (struct in_addr **)VAR_5->h_addr_list;
    if (VAR_6[0] == ((void*)0)) {
        return VAR_1;
    }
    VAR_4->sin_family = VAR_0;
    FUNC_1(&VAR_4->sin_addr, VAR_6[0], sizeof(VAR_4->sin_addr));
    return VAR_2;
}
