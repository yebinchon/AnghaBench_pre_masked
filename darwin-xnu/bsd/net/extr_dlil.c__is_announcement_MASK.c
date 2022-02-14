
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;


 int VAR_0 ;

__attribute__((used)) static __inline__ int
FUNC_0(const struct sockaddr_in * VAR_1,
    const struct sockaddr_in * VAR_2)
{
 if (VAR_1 == ((void*)0)) {
  return (VAR_0);
 }
 return (VAR_1->sin_addr.s_addr == VAR_2->sin_addr.s_addr);
}
