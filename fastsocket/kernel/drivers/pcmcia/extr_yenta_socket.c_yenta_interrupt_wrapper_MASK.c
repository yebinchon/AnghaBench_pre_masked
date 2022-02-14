
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ expires; } ;
struct yenta_socket {TYPE_1__ poll_timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,void*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_2)
{
 struct yenta_socket *VAR_3 = (struct yenta_socket *) VAR_2;

 FUNC_1(0, (void *)VAR_3);
 VAR_3->poll_timer.expires = VAR_1 + VAR_0;
 FUNC_0(&VAR_3->poll_timer);
}
