
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_4__ {int * s6_addr16; } ;
struct TYPE_3__ {TYPE_2__ sin6_addr; } ;


 int FUNC_0 (struct sockaddr*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 (struct sockaddr*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static inline void
FUNC_5(struct sockaddr *VAR_0, unsigned int VAR_1)
{

 FUNC_0(VAR_0);
 FUNC_3(FUNC_1(&(FUNC_2(VAR_0)->sin6_addr)));

 FUNC_2(VAR_0)->sin6_addr.s6_addr16[1] = FUNC_4(VAR_1);
}
