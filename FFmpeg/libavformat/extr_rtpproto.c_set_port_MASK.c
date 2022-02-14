
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr_in6 {void* sin6_port; } ;
struct sockaddr_in {void* sin_port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct sockaddr_storage *VAR_2, int VAR_3)
{
    if (VAR_2->ss_family == VAR_0)
        ((struct sockaddr_in *)VAR_2)->sin_port = FUNC_0(VAR_3);




}
