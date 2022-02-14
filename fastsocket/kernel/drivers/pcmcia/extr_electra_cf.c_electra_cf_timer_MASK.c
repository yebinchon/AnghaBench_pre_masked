
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct electra_cf_socket {int present; int timer; scalar_t__ active; int socket; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct electra_cf_socket*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_3)
{
 struct electra_cf_socket *VAR_4 = (void *) VAR_3;
 int VAR_5 = FUNC_0(VAR_4);

 if (VAR_5 != VAR_4->present) {
  VAR_4->present = VAR_5;
  FUNC_2(&VAR_4->socket, VAR_1);
 }

 if (VAR_4->active)
  FUNC_1(&VAR_4->timer, VAR_2 + VAR_0);
}
