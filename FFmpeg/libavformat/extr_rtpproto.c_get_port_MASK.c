
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const struct sockaddr_storage *VAR_2)
{
    if (VAR_2->ss_family == VAR_0)
        return FUNC_0(((const struct sockaddr_in *)VAR_2)->sin_port);




    return 0;
}
