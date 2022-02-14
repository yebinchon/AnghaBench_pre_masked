
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct sockaddr_storage {scalar_t__ ss_family; } ;
struct TYPE_3__ {int * s6_addr; } ;
struct sockaddr_in6 {TYPE_1__ sin6_addr; } ;
struct TYPE_4__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int const*,int const*,int) ;

__attribute__((used)) static int FUNC_1(const struct sockaddr_storage *VAR_2,
                        const struct sockaddr_storage *VAR_3)
{
    if (VAR_2->ss_family != VAR_3->ss_family)
        return 1;
    if (VAR_2->ss_family == VAR_0) {
        return (((const struct sockaddr_in *)VAR_2)->sin_addr.s_addr !=
                ((const struct sockaddr_in *)VAR_3)->sin_addr.s_addr);
    }
    return 1;
}
