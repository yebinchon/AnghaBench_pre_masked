
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_3__ {int * s6_addr16; } ;
struct TYPE_4__ {TYPE_1__ sin6_addr; } ;


 int FUNC_0 (struct sockaddr*) ;
 TYPE_2__* FUNC_1 (struct sockaddr*) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static inline unsigned int
FUNC_3(struct sockaddr *VAR_0)
{

 FUNC_0(VAR_0);

 return (FUNC_2(FUNC_1(VAR_0)->sin6_addr.s6_addr16[1]));
}
